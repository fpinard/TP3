
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>
#include <list>

#include "Character.h"
#include "Yoshi.h"
#include "Mario.h"
using namespace std;


// ===========================================================================
//                            Function declarations
// ===========================================================================


// ===========================================================================
//                                    MAIN
// ===========================================================================
int main(int argc, char* argv[]) {
  ofstream fichier("vitesse.txt", ios::out | ios::trunc);
  fichier << "Yoshi1\t\t\tYoshi2\t\t\tMario1\t\t\tMario2" << endl;
  Yoshi*      character1 = new Yoshi();
  Yoshi*      character2 = new Yoshi();
  Mario*      character3 = new Mario();
  Mario*      character4 = new Mario();

  list<Character*> persos;

  persos.push_back(character1);
  persos.push_back(character2);
  persos.push_back(character3);
  persos.push_back(character4);



  for (int i=0;i<10;i++){
    string vitesse = "";
    for (list<Character*>::iterator it = persos.begin();\
 it != persos.end(); it++){
      (**it).Accelerate();
      vitesse += to_string((**it).speed()) + "\t\t";
    }
    fichier << vitesse << endl;
  }
  
  printf("\n" );

  for (int i=0;i<10;i++){
    string vitesse = "";
    for (list<Character*>::iterator it = persos.begin();\
 it != persos.end(); it++){
      (**it).Break();
      vitesse += to_string((**it).speed()) + "\t\t";
    }
    fichier << vitesse << endl;
  }


  delete character1;
  delete character2;
  delete character3;
  delete character4;

  fichier.close();
  return 0;
}
