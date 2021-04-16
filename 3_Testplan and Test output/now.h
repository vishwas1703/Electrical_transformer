/**
 * @file data.h
 * @author Harshitha M S_ 258027 (harshithahani233@gmail.com) 
 * @brief The information, calculation are all briefed here
 * @version 0.1
 * @date 2021-04-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef DATA_H
#define DATA_H
#include <stdlib.h>


 typedef struct data 
{
    char fname[100];
    char lname[100]; 
    int rnum;
}da ;

typedef enum error_t{
    PASS = 0,
    FAIL = -1,
    ERR_NEGATIVE = -2
}error_t;


void consumer_data ();

/**
 * @brief This function performs the collection of data from the consumers
 * 
 * It collects Name and the Register number of the power consumers
 *  
 * This function is used for the new  users
 */

void consumer_display ();

/**
 * @brief function which display the details
 * 
 * It displays the consumer's details
 * 
 * This function displays the new users details
 */

void user();

/**
 * @brief Function used to display the details of the existing users 
 * 
 * Register numbers are updated for the existing users 
 * 
 * @return int 
 */

int calculation ();

/**
 * @brief function for the calculation of the bill
 * 
 * The amount is calculated using this function.
 * 
 */



#endif