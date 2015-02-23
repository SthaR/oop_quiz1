/*
 Program: Question 2 from quiz 1.
 Name   : Ruby Shrestha
 Roll   : 0341
 Output : Ruby Shrestha
*/


#include<iostream>

using namespace std;

int main()
{
	string s;
	string *p;
	s="Ruby Shrestha";
	p=&s;
	cout << *p;
}
