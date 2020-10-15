#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
#include <bits/stdc++.h>
using namespace std;

int main () {

    //vector<int>::size_type sz;
    int sz ;
    vector<int> foo;


    sz = foo.capacity();
    cout << "\n 처음 capacity = " << sz ;

    cout << "\n 커져라, 커져라 foo<int> :\n";
    for (int i=1; i <= 20; ++i) {
        foo.push_back(i);
        sz = foo.capacity();
        cout << "\n i= " << setw(3) << i  << ",  capacity=" << setw(3) << sz ;
    }

    vector<int> bar;
    sz = bar.capacity();
    bar.reserve(20);   // this is the only difference with foo above
    cout << "\n 또 또 커져라 bar<int> :\n";
    cout << "\n bar.reserve( 20) \n";
    for (int i=1; i <= 45; ++i) {
        bar.push_back(i);
        sz = bar.capacity();
        cout << "\n i= " << setw(3) << i  << ",  capacity=" << setw(3) << sz ;
    }

    //capacity ... 2배로 늘어난다 .. !!

    return 0;
}

