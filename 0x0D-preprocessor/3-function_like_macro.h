#ifndef Function_Like_Macro_h
#define Function_Like_Macro_h

/**
 * File: 3-function_like_macro.h
 * Description: Header file that defines a function-like macro ABS(x)
 * that computes the absolute number of x
 * @x: the number to find its absolute value
 */

#define ABS(x) ((x) < (0) ? ((x) * (-1)) : (x))

#endif
