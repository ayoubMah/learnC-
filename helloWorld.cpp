#include <iostream>
#include <limits.h>
using namespace std ;


int main() {
  cout << "=========== WELLCOME TO OUR APP ==============\n" ;
  short int s = 10;
  cout << sizeof(s) << "\n";
  unsigned int a = -12 ;
  cout << a << "\n" ;

  using bigint = long long int ; // using alias with using

  typedef long long int lli ; // using alias with typedef

  lli z = 1234567890987654321 ;
  cout << z << "\n" ;

  return 0;
}
