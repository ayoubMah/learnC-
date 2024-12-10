#include <iostream>
using namespace std ;


int main() {
  cout << "=========== WELLCOME TO OUR APP ==============\n" ;
  cout << "------------------------------------------------\n" ;
  cout << "Please Enter your age : \n" ;
  int age ;
  cin >>  age;
  int ageWithDays = age * 365 ;

  cout << " your are by days is : "   ;
  cout << ageWithDays << endl ;
  cout << "Thank you \n" ;
  return 0;
}
