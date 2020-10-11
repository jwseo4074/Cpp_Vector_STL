#include <bits/stdc++.h>
using namespace std;



int main() {

    vector<int> vec { 1, 4, 5, 22, 33, 2, 11, 89, 49 };

    cout <<  "vec[4]= " << vec[4] << endl ;
    cout <<  "Before clear *vec.end()-1 = " << *(vec.end()-1) << endl ;
    vec.clear() ;
    cout <<  "After clear *vec.end()-1 = " << *(vec.end()-1) << endl ;
    cout <<  "After clear vec[4]= " << vec[4] << endl ;

    // clear : 다 0으로 채우는 즉 , 값을 다 지우는게 아니라
    // end()를 즉 , 마지막의 포인터를 젤 앞에꺼로 옮겨주는.
    // clear 하고 pushback 하면 그게 begin()이 됨.
} // end of main( )
