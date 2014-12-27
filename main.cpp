/* 
 * File:   main.cpp
 * Author: james
 *
 * Created on 19 December 2014, 5:52 PM
 */
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char** argv) {
	int argv1len = strlen(argv[1]); 
	char myString[argv1len] = {};
	cout << "           argv[1]: " << argv[1] << endl;
	strcpy(myString, argv[1]);
	char *head;
	char *tail;
	char temp;
	head = myString;
	tail = &myString[argv1len-1];
	while (head < tail){
		temp = *head;
		*head = *tail;
		*tail = temp;
		head++;
		tail--;
	}
	cout << "Reversed string is: " << myString << endl;
	return 0;
}
