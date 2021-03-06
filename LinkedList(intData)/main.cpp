/*********************************************
 *   Author         : Jonathan Sum
 *   Assignment     : Lab 11 - IntList Intro
 *   SECTION        : CS 003A
 *   Due Date       : 4/11/19
 *   ________________________________________________
 *   Goals
 *   Write a linked list

***********************************************/
#include "IntList.h"
#include <iostream>
#include "header.h"
#include <fstream>
using namespace std;



int main(){
    IntList L1, L2;

    cout << "Testing display function on empty List\n";
    L1.display();

    cout << "\nTesting display function on one item List\n";
    L1.push_front(100);
    L1.display();
    cout << endl;

    cout << "\nTesting display function on two item List\n";
    L1.push_front(200);
    L1.display();
    cout << endl;

    cout << "\nTesting push_front function (by calling it 10 times)\n";
    for (int i = 0; i < 10; i++){
        L1.push_front(i);
    }

    cout << "Testing display function on list with several items\n";
    L1.display();
    cout << endl;

    cout << "\nTesting the pop_front function\n";
    for (int i = 0; i < 5; i++){
        L1.pop_front();
    }

    cout << "Testing display function after calling pop_front 5 times\n";
    L1.display();
    cout << endl;

}