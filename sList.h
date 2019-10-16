#pragma once
#include <iostream>
#include <vector>
#include "Ingredient.h"

using namespace std;


/*
The user can search for ingredients that are not in their virtual cabinet and add it to a virtual shopping list. This\
 shopping list will also give an estimated total for all the ingredients in the shopping list. With a click of the bu\
tton by the user, all of the ingredients in the shopping list will be added to their virtual cabinet. With these adde\
d ingredients, the user can create more cocktails.
*/


class sList {

private:
    vector <Ingredient> list; // list of ingeredients

public:
    sList(); // constructure
    ~sList(); // deconstructure
    void addIngredient(Ingredient); // add ingredient to shopping list
    void removeIngredient(Ingredient);
    //void getItem(Ingredient); // get an indredient from shopping list
    //void Price(Ingredient); // display the price of all items
    void display(); // display all ingredient with the total price

};
