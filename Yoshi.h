
#ifndef YOSHI_H__
#define YOSHI_H__

// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Character.h"
#include <iostream>


  enum palette{RED, GREEN, YELLOW, PINK, BLUE};
  


class Yoshi : public Character {
 public :
  // =========================================================================
  //                               Constructors
  // =========================================================================
  Yoshi();
  Yoshi(palette c);
  Yoshi(const Yoshi& model);
  const Yoshi &operator=(const Yoshi&);

  // =========================================================================
  //                                Destructor
  // =========================================================================
  virtual ~Yoshi();

  // =========================================================================
  //                                  Getters
  // =========================================================================
  inline palette colour() const;
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
  palette colour_;

};

// ===========================================================================
//                            Getters' definitions
// ===========================================================================
  inline palette Yoshi::colour() const {
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
