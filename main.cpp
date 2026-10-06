#include <iostream>
#include <string>

// Homework 6 — Ashley Duran
// CIS 5 Week 06 · Menu

int main() {

  int num = 0;
  int count = 0;

  do
  {
std::cout << "Enter a number from 1 to 3: ";
std::string user = "Ashley";
std::cin >> num;

if (num == 1)
{
  std::cout << "Hello " <<  user << std::endl;
}
else if (num == 2)
{
std::cout << "Please enter a number positive number: ";
std::cin >> count;

    for(int i = count; i >= 0 ; i--)

    std::cout << i <<" "<< std::endl;
  }
  else if (num == 3)
  {
    std::cout << "Goodbye for now." << std::endl; 
  } 
} while (num != 3);
 return 0;
}
