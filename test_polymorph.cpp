
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include <fstream>

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

  for (int i=0;i<10;i++){
    character1->Accelerate();
    character2->Accelerate();
    character3->Accelerate();
    character4->Accelerate();
    fichier << character1->speed() <<"\t\t\t"<<character2->speed()<<"\t\t\t"\
<<character3->speed()<<"\t\t\t"<< character4->speed()<< endl;
  }
  
  printf("\n" );

  for (int i=0;i<10;i++){
    character1->Break();
    character2->Break();
    character3->Break();
    character4->Break();
    fichier << character1->speed() <<"\t\t\t"<<character2->speed()<<"\t\t\t"\
<<character3->speed()<<"\t\t\t"<< character4->speed()<< endl;
  }


  delete character1;
  delete character2;
  delete character3;
  delete character4;

  fichier.close();
  return 0;
}
