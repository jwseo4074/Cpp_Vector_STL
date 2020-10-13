#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

vector<int> vec1{ 1, 4, 5, 22, 33, 2, 11, 89, 49 };
vector<int> vec2{ 1, 4, 5, 22, 33, 2, 11, 89, 49 };
vector<int> vec3{       5, 22, 33                };
vector<int> vec4{       5, 0,  22, 33            };

cout << "\n vector 전체가 같은지 검사 : " ;
(vec1 == vec2) ? cout << "matched" : cout << " unmatched"  ;


cout << "\n vec3가 vec1( )일부와 같은지 검사. " ;
equal(vec3.begin(), vec3.end(), vec1.begin() + 2) ? cout <<  "vec3 일치" : cout << " vec3 불일치"  ;
  //첫번째 구간과 두번째 구간을 비교하는데
  //첫번째 구간의 길이가 나왔으므로
  //두번째 구간은 자동으로 길이 지정.
  // 5 22 33 이랑 (길이 3) , 5부터 시작 ( 길이 3 ) 이랑

cout << "\n vec4가 vec1( )일부와 같은지 검사. " ;
equal(vec4.begin(), vec4.end(), vec1.begin() + 2) ? cout << " vec4  일치" : cout << " vec4  불일치"  ;

} // end of main( )
