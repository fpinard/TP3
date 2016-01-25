
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
  colour_ = palette(0);
}

Yoshi::Yoshi(palette c) {
  colour_ = c;
}

Yoshi::Yoshi(const Yoshi& model): Character(model){
  *speed_ = *(model.speed_);
  cout<<*speed_<<endl;
  colour_ = model.colour_;
  max_speed_ = model.max_speed_;
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

void Yoshi::WhatAmI() const{
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
