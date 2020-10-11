#include <bits/stdc++.h>
using namespace std;


int main() {
 int i, num ;

 vector <int>   intvec { 34, 23, 99, -100, 1, 3, 55 };
 int    arr[]  { 1,2,3,4,5 };
 set    <string> myset { "빵", "떡", "꽁", "밥", "술", "짱", "쩝" };
 map    <int,string> mymap { {0,"zero"}, {1,"one"}, {2,"two"} };


 cout << "\n 연습01 begin()   = " << *intvec.begin() ;
 cout << "\n 연습02 *(begin()+2) = " << *(intvec.begin()+2) ;
 cout << "\n 연습03 *begin()+2  =  " << *intvec.begin()+2 ;
 cout << "\n 연습04 end()-1 = "   << *(intvec.end()-1) ; // 마지막 원소는 end()-1
 cout << "\n 연습05 end()-2 = "   << *(intvec.end()-2) ;
 cout << "\n 연습06 end() 값 자체  = "   << *intvec.end() ;


 // cout << "\n 집합에선 iterator가 동작하지 않음 = " << *myset.begin() ;

} // end of main()

