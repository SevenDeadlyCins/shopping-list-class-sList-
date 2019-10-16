/*
- Name: Abdullah Banawas
- Class: CS441 Software Engineer
- Group Project ( Cocktails Recipes )
    - Shopping List Class implementaion
- Date: October 15, 2019
*/
#include <iostream>
#include <vector>
#include "sList.h"
#include <string>
using namespace std;

sList::sList() { }

sList::~sList() {}

// add ingredient to shopping list
void sList::addIngredient(Ingredient name) {
    list.push_back(name);  // add ingredient into shopping list vector
}

// remove an item from the list
void sList::removeIngredient(Ingredient ing) {
    for (int i = 0; i < list.size(); i++)
    {
        // compare specfied ingredient with list ingredient
        // if a match was found then erase it
        if( ing.getName() == list[i].getName()) // *this may not work*
            list.erase(list.begin() + i); // earise i+1 element
    }
}
// display all items in the list with the total cost
void sList::display() {
    double totalCost = 0; // add up the costs of all ingredients
    for (int i = 0; i < list.size(); i++) // for loop goes through vectore and print the info
    {
        cout << list[i].getName() << "  " << list[i].getPrice() << endl; // display ingredient name + cost
        totalCost += list[i].getPrice(); // add cost of each ingredient to totalCost
    }
    cout << "\nThe total cost of the igredients: $" << totalCost;
}
