//
//  main.cpp
//  TopDownParser
//
//  Created by Aviral Upadhyay on 10/12/16.
//  Copyright © 2016 Aviral. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    cout<<"\t\t\t-------TOP DOWN PARSER--------\n\n\n";
    char nonTerminals[15], terminals[15];
    int numNT = 0, numT = 0;
    cout<<"\nEnter number of Non terminals : ";       cin>>numNT;
    cout<<"\nEnter number if terminals : ";         cin>>numT;
    cout<<"\nEnter non terminals, one by one\n";
    for(int i = 0; i < numNT; i++)
        cin>>nonTerminals[i];
    cout<<"\nEnter terminals, one by one\n";
    for(int i = 0; i < numT; i++)
        cin>>terminals[i];
    cout<<"\nThe number for NT is\n";
    for(int i = 0; i < numNT; i++)
        cout<<i<<"\t:\t"<<nonTerminals[i]<<endl;
    cout<<"\nThe number for T is\n";
    for(int i = 0; i < numT; i++)
        cout<<i<<"\t:\t"<<terminals[i]<<endl;
    cout<<"\nEnter productions as 1. enter the Non terminal number, followed by that";
    return 0;
}
