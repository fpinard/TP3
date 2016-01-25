
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>

#include "Character.h"
#include "Yoshi.h"
#include "Mario.h"


// ===========================================================================
//                            Function declarations
// ===========================================================================


// ===========================================================================
//                                    MAIN
// ===========================================================================
int main(int argc, char* argv[]) {
  Yoshi       character2 = Yoshi();
  Yoshi*      character4 = new Yoshi();
  Character*  character7 = new Yoshi();
  Yoshi       character1 = Yoshi(BLUE);
  Mario       character0 = Mario();

  character2.Accelerate();
  character4->Accelerate();
  character7->Accelerate();
  character0.Accelerate();

  

  printf("Character 2 speed : %f\n", character2.speed());
  printf("Character 4 speed : %f\n", character4->speed());
  printf("Character 7 speed : %f\n", character7->speed());
  printf("Character 0 speed : %f\n", character0.speed());


  printf("\n" );

  character2.Break();
  character4->Break();
  character7->Break();
  character0.Break();


  printf("couleur super belle : %d\n",character1.colour());

  printf("Character 2 speed : %f\n", character2.speed());
  printf("Character 4 speed : %f\n", character4->speed());
  printf("Character 7 speed : %f\n", character7->speed());
  printf("Character 0 speed : %f\n", character0.speed());


  delete character4;
  delete character7;


  return 0;
}
