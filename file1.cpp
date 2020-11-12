#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Write a C++ Program to Find Size of int, float, double and char in Your System 
Your output should look something like this Size of char: 1 byte Size of int: 4 bytes Size of float: 4 bytes Size of double: 8 bytes */

int main(int argc, char** argv) {
	std::cout<<"Size of char:"<<sizeof(char)<<" byte\n"<<"Size of int:"<<sizeof(int)<<" byte\n"<<"Size of float:"<<sizeof(float)<<" byte\n"<<"Size of double:"<<sizeof(double)<<" byte\n";
	
	
	return 0;
}
