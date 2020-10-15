#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define allout(MSG,X)   cout<<"\n"<<MSG <<" : ";for(auto w:X)cout<<w<<",

int main () {
    vector<int> myvector (100);

    cout << "1. capacity of myvector: " << myvector.capacity() << '\n';
    cout << "1. size of  of myvector: " << sizeof(myvector)    << '\n';

    myvector.resize(20);
    cout << "2. capacity of myvector: " << myvector.capacity() << '\n';
    cout << "2. size of  of myvector: " << sizeof(myvector)    << '\n';
    myvector[22] = 1000 ;

    myvector.shrink_to_fit();
    cout << "\n shrink_to_fit()을 수행함 \n " ;
    cout << "3. capacity of myvector: " << myvector.capacity() << '\n';
    cout << "2. size of  of myvector: " << sizeof(myvector)    << '\n';
    cout <<  myvector[22]  ;
    return 0;
}
