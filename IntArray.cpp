#include "IntArray.h"

namespace ds {

/**
 * Construct a new IntArray object
 *
 * @param len length of the IntArray
 */
IntArray::IntArray(int len) {
  // TODO: initialize data members
  storedArray = new int[len];
}

/**
 * Destroy the IntArray object
 */
IntArray::~IntArray() {
  // TODO: delete the internal array
  delete storedArray;
}

/**
 * Reverse the IntArray
 */
void IntArray::reverse() {
  // TODO: reverse `storedArray`
  int temp[10];
  for(int i = 0; i < 10; i++) {
    temp[i] = *(storedArray + (9 - i));
  }

  for(int i = 0; i < 10; i++) {
    *(storedArray + i) = temp[i];
  }
}

} // namespace ds
