#include <iostream>
#include <vector>
#include <algorithm>
#define newline  cout <<"\n"<<"\n"
using namespace std;

int main(){
        int a[] = {1, 4, 5, 6, 8};
        int b[] = {2, 3, 4, 7, 9};

        vector<int> result(10);

        cout << "a:";
        for(int i=0; i<5; i++)  cout << ' ' << a[i];
        newline;
        cout << "b:";
        for(int i=0; i<5; i++)  cout << ' ' << b[i];
        newline;
        merge(a, a+5, b, b+5, result.begin());
        
        //2개의 파일 , 정렬이 되어 있을때만 가능 !! 
        
        cout << "결과:";
        for(int i=0; i<10; i++)    cout << ' ' << result[i];
        newline;

        return 0;

}
