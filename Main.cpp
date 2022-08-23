/******************************************************************************
file: palindrome.cpp
author: T.Krafjack
date: 06/24/2022
purpose: interview question 
*******************************************************************************/

#include <iostream>
//added cstring derective to use strcpy and c_str
#include <cstring>
using namespace std;

bool fun(string x){
    //getting length of the string given
    int lngth = x.length();
    //declaring array that string characters will be put in
    char arry[lngth];
    //turn string into array
    strcpy(arry, x.c_str());
    //for loop that goes half the arry length
    for (int i=0; i<lngth/2;i++){
        //if statement to check if arry[i] and arry[lngth-j] are not equal
        if (arry[i] != arry[lngth-(i+1)]){
            //return false and end function. it only needs to be false once
            return false;
        }
    }
    //return true
    return true;
}

int main()
{
    //declaring string x
    string x;
    //tell user to enter a palindrome
    cout << "Enter a word and I will tell you if it is a palindrome." << endl;
    //store given string in x
    cin >> x;
    //printing return from fun()
    cout << fun(x);

    return 0;
}
