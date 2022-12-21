// Linked_List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Singly_Linked_List.h"

int main()
{   
    Singly_Linked_List sll;
    sll.insertFirst(5);
    sll.insertLast(6);
    sll.insertFirst(8);
    sll.insertFirst(5);
    sll.insertFirst(2);
    sll.insertFirst(4);
    sll.insertAt(3, 10);
    sll.print();
    
}

