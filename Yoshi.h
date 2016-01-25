
#ifndef YOSHI_H__
#define YOSHI_H__

// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Character.h"
#include <iostream>

  enum colour{RED, GREEN, YELLOW, PINK, BLUE};

class Yoshi : public Character {
 public :
  // =========================================================================
  //                               Constructors
  // =========================================================================
  Yoshi();
  Yoshi(int c);

  // =========================================================================
  //                                Destructor
  // =========================================================================
  virtual ~Yoshi();

  // =========================================================================
  //                                  Getters
  // =========================================================================
  inline int colour() const;
  // =========================================================================
  //                                  Setters
  // =========================================================================

  // =========================================================================
  //                                 Operators
  // =========================================================================

  // =========================================================================
  //                              Public Methods
  // =========================================================================
  virtual void Accelerate();
  void WhatAmI();

 protected :
  // =========================================================================
  //                             Protected Methods
  // =========================================================================

  // =========================================================================
  //                                Attributes
  // =========================================================================
  int colour_;

};

// ===========================================================================
//                            Getters' definitions
// ===========================================================================
  inline int Yoshi::colour() const {
    return colour_;
  }
// ===========================================================================
//                            Setters' definitions
// ===========================================================================

// ===========================================================================
//                           Operators' definitions
// ===========================================================================

// ===========================================================================
//                        Inline functions' definition
// ===========================================================================


#endif // YOSHI_H__
