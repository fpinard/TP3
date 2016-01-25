
// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Yoshi.h"
using namespace std;

// ===========================================================================
//                       Definition of static attributes
// ===========================================================================

// ===========================================================================
//                                Constructors
// ===========================================================================
Yoshi::Yoshi() {
  colour_ = 0;
}

Yoshi::Yoshi(int c) {
  colour_ = c;
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
  if (*speed_ == 0.) *speed_ = 0.15;
  else *speed_ *= 1.15;

  if (*speed_ > max_speed_) *speed_ = max_speed_;
}

void Yoshi::WhatAmI(){
  switch(colour_){
    case RED : cout<<"red ";  break;
    case GREEN : cout<<"green ";  break;
    case YELLOW : cout<<"yellow ";  break;
    case BLUE : cout<<"blue ";  break;
    case PINK : cout<<"pink ";  break;
  }
  cout<<"Yoshi"<<endl;
}

// ===========================================================================
//                              Protected Methods
// ===========================================================================
