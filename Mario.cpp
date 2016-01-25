
// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Mario.h"


// ===========================================================================
//                       Definition of static attributes
// ===========================================================================

// ===========================================================================
//                                Constructors
// ===========================================================================
Mario::Mario() {
  
}

Mario::Mario(const Mario& model) : Character(model){

}


// ===========================================================================
//                                 Destructor
// ===========================================================================
Mario::~Mario() {
}

// ===========================================================================
//                               Public Methods
// ===========================================================================
void Mario::Break() {
  if (*speed_ < 0.1) *speed_ = 0.;
  else *speed_ *= 0.7;
}

void Mario::WhatAmI(){
  std::cout<<"Mario"<<std::endl;
}

// ===========================================================================
//                              Protected Methods
// ===========================================================================
