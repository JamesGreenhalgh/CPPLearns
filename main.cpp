/* 
 * File:   main.cpp
 * Author: james
 *
 * Created on 19 December 2014, 5:52 PM
 */
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int myArray[] = {1,2,3,4,5,6,7};
    int size = sizeof(myArray)/sizeof(myArray[0]);
    for (int i=0; i<size; i++){
        cout << myArray[i] << ", ";
    }
    cout << endl;
    int *head;
    head = myArray;
    int *tail;
    tail = &myArray[size-1];
    int temp;
    while (head < tail){
        temp = *head;
        *head = *tail;
        *tail = temp;
        head++;
        tail--;
    }
    
    for (int i=0; i<size; i++){
        cout << myArray[i] << ", ";
    }
    
    cout << endl;
    return 0;
}