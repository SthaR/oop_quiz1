/*
 Program: Question 6 from quiz 1.
 Name   : Ruby Shrestha
 Roll   : 0341
 Output : 2293316 (garbage)
*/


#include<iostream>

using namespace std;

int main()
{
	int a;
	int *q;
	a=4;
	q=&a;
	cout << *(q+1);
}
