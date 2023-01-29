/**
 * @file List.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "List.h"
#include "Pair.h"
#include <stdexcept>

/**
 * @brief Construct a new List object
 * 
 */
 List::List() {
    index = 0;
	pairs = nullptr;
 }

/**
 * @brief Destroy the List object
 * 
 */
 List::~List() {
     // need to delete our free store
 }

/**
 * @brief push back a Pair object into our List
 * 
 * @param p 
 */
 void List::push_back(const Pair& p) {

    // here we need to add additional free store for the Pair object

    // now we need to copy all the Pair objects in the Pairs free store into newPairs

    // need to delete the old
 
    // and now set Pairs to newPairs

    // add the Pair from the argument to the free store
}


/**
 * @brief return the number of Pairs in our List
 * 
 * @return unsigned int 
 */
 unsigned int List::size() {
 
     // return the number of Pair objects in our List
 }

/**
 * @brief Clear our List of Pairs
 * 
 */
void List::clear() {
 
    // need to delete our free store
    
    // reset the List variables
}

/**
 * @brief [] operator
 * 
 * @param index 
 * @return Pair& 
 */
Pair& List::operator[](unsigned int index) {
 
    // check if index out of range the throw an exception else return the Pair
 }
