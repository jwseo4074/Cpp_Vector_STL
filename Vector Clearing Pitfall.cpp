#include <bits/stdc++.h>
using namespace std;



int main() {

    vector<int> vec { 1, 4, 5, 22, 33, 2, 11, 89, 49 };

    cout <<  "vec[4]= " << vec[4] << endl ;
    cout <<  "Before clear *vec.end()-1 = " << *(vec.end()-1) << endl ;
    vec.clear() ;
    cout <<  "After clear *vec.end()-1 = " << *(vec.end()-1) << endl ;
    cout <<  "After clear vec[4]= " << vec[4] << endl ;

} // end of main( )
