//Include Library
#include <iostream>
using namespace std;
//write the main function
int main(){
	//Declaring the variables
	int a,b,add,sub,div,pro,remaind;
	//Defining the values for the variables
	a = 15;
	b = 3;
	add = a + b; // sum of two numbers
	sub = a - b; // difference of two numbers
	div = a/b ;// division of two numbers
	pro = a*b; // multiplication of two numbers
	remaind = a % b; //shows the remainder 
	cout <<"The numbers are "<< a <<","<<b<< endl;
	cout <<"The arithmetis operation between " << a << " and " <<b << endl;
	cout <<"Their sum is " << add<< endl;
	cout <<"Their difference is " << sub<< endl;
	cout <<"Their division is " << div << endl;
	cout <<"Their product is " <<pro<<endl;
	cout <<"The reminder of the division between the numbers is " <<remaind << endl;
	return 0;
} 
