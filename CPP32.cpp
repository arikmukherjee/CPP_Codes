#include<iostream>
int main()
{
  int num1, num2;
  std::cout << "Enter first number: ";
  std::cin >> num1;
  std::cout << "Enter second number: ";
  std::cin >> num2;
  std::cout << "Sum: " << num1 + num2 << std::endl;
  std::cout << "Difference: " << num1 - num2 << std::endl;
  std::cout << "Product: " << num1 * num2 << std::endl;
  std::cout << "Quotient: " << (num1 / num2) << std::endl;
  std::cout << "Remainder: " << num1 % num2 << std::endl;
}