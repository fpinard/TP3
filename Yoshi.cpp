
// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Yoshi.h"


// ===========================================================================
//                       Definition of static attributes
// ===========================================================================

// ===========================================================================
//                                Constructors
// ===========================================================================
Yoshi::Yoshi() {
}

// ===========================================================================
//                                 Destructor
// ===========================================================================
Yoshi::~Yoshi() {
}

// ===========================================================================
//                               Public Methods
// ===========================================================================
void Yoshi::Accelerate() {
  if (speed_ == 0.) speed_ = 0.15;
  else speed_ *= 1.15;

  if (speed_ > max_speed_) speed_ = max_speed_;
}

void Yoshi::Break() {
  if (speed_ < 0.1) speed_ = 0.;
  else speed_ *= 0.8;
}

void Yoshi::WhatAmI(){
  std::cout<<"Yoshi"<<std::endl;
}

// ===========================================================================
//                              Protected Methods
// ===========================================================================
