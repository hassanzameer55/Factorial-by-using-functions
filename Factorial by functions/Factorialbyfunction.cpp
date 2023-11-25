 // Create a program that calculates the factorial of a number using a function. The user should input the number.
#include<iostream>
using namespace std;

long long isFact(int num) // Declaring Function and defining function
{
	long long fact = 1;
	for (int i = 1; i <= num; i++) // Using loop to start from 1 end at the given number 
	{
		fact = fact * i;
	}
	return fact; 
}
int main()
{
	int num;
	cout << "Enter factorial number : "; // Prompt user to enter number
	cin >> num;

	long long factorial = isFact(num); // Caling function
	cout << "Factorial is : " << factorial; // Output factorial of given number
}