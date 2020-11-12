

/*Write a C++ Program to find the product of two numbers entered by the User*/ 
/*Your Output should look something like this Enter two numbers: 3.4 5.5 Product = 18.7 */

#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	
	int a,b;
	std::cout<<"Enter two numbers: ";
	std::cin>>a>>b;
	std::cout<<"Product = "<<(a*b);

	
	return 0;
}
