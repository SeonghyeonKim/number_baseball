#include <iostream>
#include <vector>
#include <random>
#include <unistd.h>
using namespace std;

vector<int> generateFourDigitNumber(void) {
    vector<int> v(4), duple(10);
    
    random_device rd; 
    mt19937_64 mt(rd());
    uniform_int_distribution<int> range(0, 9);
    
    v[0] = range(mt);
    duple[v[0]]=1;




    return v;
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    


    return 0;
}
