
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
  Yoshi*      character1 = new Yoshi(BLUE);
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
    for (auto it : persos){
      (*it).Accelerate();
      vitesse += to_string((*it).speed()) + "\t\t";
    }
    fichier << vitesse << endl;
  }

  Yoshi       character5{};
  Mario       character6{*character3};
  character5 = *character2;
  

  cout<<"Vitesse character 5 : "<<character5.speed()<<endl;
  cout<<"Vitesse character 6 : "<<character6.speed()<<endl;
  cout<<"Vitesse character 2 : "<<character2->speed()<<endl;
  cout<<"Vitesse character 3 : "<<character3->speed()<<endl;
  
  printf("\n" );

  for (int i=0;i<10;i++){
    string vitesse = "";
    for (auto it : persos){
      (*it).Break();
      vitesse += to_string((*it).speed()) + "\t\t";
    }
    fichier << vitesse << endl;
  }

  character1->WhatAmI();

  delete character1;
  delete character2;
  delete character3;
  delete character4;

  fichier.close();
  return 0;
}
