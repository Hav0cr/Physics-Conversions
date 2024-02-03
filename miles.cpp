#include <iostream>
//miles to km
int main() {
  double miles;
  double km;

  std::cout << "Enter the number of miles: \n";
  std::cin >> miles;

    km = (miles * 1.609344);

  std::cout << miles << " miles is " << km << " kilometers. \n";

}