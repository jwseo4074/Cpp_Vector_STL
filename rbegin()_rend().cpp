#include <bits/stdc++.h>
using namespace std;


int main() {
 int i, num ;

 vector <int>   intvec { 34, 23, 99, -100, 1, 3, 55 };


 cout << " 연습01 rbegin()   = "    << *intvec.rbegin() ;
 cout << "\n 연습02 *(rbegin()+1) = " << *(intvec.rbegin()+1) ;
 cout << "\n 연습03 *rbegin()+100 = " << *intvec.rbegin()+100 ;
 cout << "\n 연습04 rend()-1 = "      << *(intvec.rend()-1) ; // 마지막 원소는 end()-1
 cout << "\n 연습05 rend()-2 = "      << *(intvec.rend()-2) ;
 cout << "\n 연습06 rend()값자체  = " << *intvec.rend() ;

// rbegin() rned()도방향으로는  +, -를 사용해야 한다.

} // end of main()

