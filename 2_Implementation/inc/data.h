/**
 * @file data.h
 * @author vishwas H 259036 (vishwashv3@gmail.com)
 * @brief all the variable are defined here
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef DATA_H
#define DATA_H
#include<stdio.h>

typedef struct 
{
    double n1,                                            
           n2,                                                   
           v1,                                              
           i1;                                              
} transformer_t;                                            
/**
 * @brief defining structure
 * 
 * variables declaration to save transformer parameters
 * 
 */
int scan_transformer(transformer_t *tranp)
/**
 * @brief read input from user
 * 
 * takes primary turns,primary voltage,secondary turns,input current data
 * 
 */
transformer_t set_v1_for_v2(transformer_t *tranp, double volt2)
/**
 * @brief calculation
 * caluclate the primary voltage for desired secondary voltage
 * 
 */
#endif
