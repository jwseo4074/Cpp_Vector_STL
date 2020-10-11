#include <iostream>
#include <vector>

using namespace std;

#define dump(msg,X) cout<<msg;for(auto w:X) cout << w << " "


int main() {
    vector <int> vox ;
    vector <int> wox { 2020 } ;

    cout << "\n wox[0] = " << wox[0]   ;        // A
    cout << "\n wox.at(0) = " << wox.at(0) ;    // B

    //cout << "\n vox.at(0) = " << vox.at(0) ;
    // out of range error를 정식으로 발생
    // exception 으로 try !!!

    //cout << "\n vox[0] = " << vox[0]   ;
    // 무책임함. 원소가 없을 때에는 심각한 오류,


    // at을 주로 활용하라.

} // end of main ( )

