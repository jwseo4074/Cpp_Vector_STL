#include <iostream>
#include <vector>

using namespace std;

void PrintVector( vector <int> &vi )
{
    for(auto w : vi) cout << "Elenemt is " << " " << w << "\n" ;
}

int main() {
    vector <int> vi;

    vi.push_back( 1 );
    vi.push_back( 2 );
    vi.push_back( 3 );
    vi.push_back( 4 );

    //vi.reserve( 10 );
    //vi.resize(10);
    PrintVector( vi );

/*
    [resize] result
    Elenemt is  1
    Elenemt is  2
    Elenemt is  3
    Elenemt is  4
*/

/*
    [reserve] result
    Elenemt is  1
    Elenemt is  2
    Elenemt is  3
    Elenemt is  4
    Elenemt is  0
    Elenemt is  0
    Elenemt is  0
    Elenemt is  0
    Elenemt is  0
    Elenemt is  0
*/
}

