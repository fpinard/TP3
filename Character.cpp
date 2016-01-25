
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>

#include <iostream>
#include "Character.h"


// ===========================================================================
//                       Definition of static attributes
// ===========================================================================

int Character::nb_instances = 0;

// ===========================================================================
//                                Constructors
// ===========================================================================
Character::Character() {
  speed_     = new float(0.);
  max_speed_ = 10.;
  nb_instances ++;
  std::cout<<"nombre instances :"<<nb_instances<<std::endl;
}

Character::Character(const Character& model){
  speed_ = new float (*(model.speed_));
  max_speed_ = model.max_speed_;
  nb_instances ++;
  std::cout<<"nombre instances :"<<nb_instances<<std::endl;
}


const Character& Character::operator=(const Character& model){
  *speed_ = *(model.speed_);
  max_speed_ = model.max_speed_;
  return *this;
}

// ===========================================================================
//                                 Destructor
// ===========================================================================
Character::~Character() {
  nb_instances --;
  std::cout<<"nombre instances :"<<nb_instances<<std::endl;
  delete speed_;
}

// ===========================================================================
//                               Public Methods
// ===========================================================================
void Character::Accelerate() {
  if (*speed_ == 0.) *speed_ = 0.1;
  else *speed_ *= 1.1;

  if ( *speed_ > max_speed_ ) *speed_ = max_speed_;
}

void Character::Break() {
  if (*speed_ < 0.1) *speed_ = 0.;
  else *speed_ *= 0.9;
}

// ===========================================================================
//                              Protected Methods
// ===========================================================================

  
