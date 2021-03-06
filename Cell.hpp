/**
 * \mainpage COMP2012H Programming Assignment 0, Fall 2014
 *
 * \author **SUN Yushi**
 * \author **20176087**
 * \author **sunyushi9546@gmail.com**
 * \author **LA1**
 *
 * \date **2014.09.06**
 *
 * Instructor: <a href="http://www.cs.ust.hk/~dekai/">Dekai Wu</a>
 * Due: 2014.09.16 at 23:00 by CASS
 */

/**
 * \file Cell.hpp
 *
 * Implements a tagged union - a kind of struct that uses the same memory to hold an int, a double, or a symbol, by using an additional type tag member to keep track of which type of data is currently being held in the cell.
 */

#ifndef CELL_HPP
#define CELL_HPP

enum TypeTag {type_int, type_double, type_symbol};

/**
 * \class Cell
 * \brief Tagged union that holds an int, double, or symbol
 */
typedef struct{
  TypeTag tag_m;
  union {
    int int_m;
    double double_m;
    char* symbol_m;
  };
}Cell;

#endif // CELL_HPP
