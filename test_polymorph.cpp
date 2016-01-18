
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>

#include "Character.h"
#include "Yoshi.h"


// ===========================================================================
//                            Function declarations
// ===========================================================================


// ===========================================================================
//                                    MAIN
// ===========================================================================
int main(int argc, char* argv[]) {
  Character   character1 = Character();
  Yoshi       character2 = Yoshi();
  Character*  character3 = new Character();
  Yoshi*      character4 = new Yoshi();
  Character*  character7 = new Yoshi();

  character1.Accelerate();
  character2.Accelerate();
  character3->Accelerate();
  character4->Accelerate();
  character7->Accelerate();

  printf("Character 1 speed : %f\n", character1.speed());
  printf("Character 2 speed : %f\n", character2.speed());
  printf("Character 3 speed : %f\n", character3->speed());
  printf("Character 4 speed : %f\n", character4->speed());
  printf("Character 7 speed : %f\n", character7->speed());

  printf("\n" );

  character1.Break();
  character2.Break();
  character3->Break();
  character4->Break();
  character7->Break();

  printf("Character 1 speed : %f\n", character1.speed());
  printf("Character 2 speed : %f\n", character2.speed());
  printf("Character 3 speed : %f\n", character3->speed());
  printf("Character 4 speed : %f\n", character4->speed());
  printf("Character 7 speed : %f\n", character7->speed());

  delete character3;
  delete character4;
  delete character7;

  return 0;
}
