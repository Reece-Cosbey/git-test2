#include <iostream>

using namespace std;
int sum(int n){
  int i = 1;
  int n2 = n;
  while (i != n){
    n2 = n2 + i;
    i++;
  }
  return n2;
}
int product(int n){
  int i = 1;
  int n2 = n;
  while (i != n){
    n2 = n2*i;
    i++;
  }
  return n2;
}
int main() {
  int number;
  cout << "Input a number ";
  cin >> number;
  int number2 = sum(number);
  int number3 = product(number);
  cout << number3 <<" " << number2 << endl;
  return 0;
}
