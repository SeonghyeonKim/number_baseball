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

    while(1) {
        v[1] = range(mt);
        
        if(duple[v[1]] == 0) {
            duple[v[1]]=1;
            break;
        }
    }

    while(1) {
        v[2] = range(mt);

        if(duple[v[2]] == 0) {
            duple[v[2]]=1;
            break;
        }
    }

    while(1) {
        v[3] = range(mt);

        if(duple[v[3]] == 0) {
            duple[v[3]]=1;
            break;
        }
    }

    return v;
}

void title(void) {
    cout << "__________                     ___.          .__  .__      ________                       \n";
    cout << "\\______   \\_____    ______ ____\\_ |__ _____  |  | |  |    /  _____/_____    _____   ____  \n";
    cout << " |    |  _/\\__  \\  /  ___// __ \\| __ \\__  \\ |  | |  |   /   \\  ___\\__  \\  /     \\_/ __ \\ \n";
    cout << " |    |   \\ / __ \\_\\___ \\  ___/| \\_\\ \\/ __ \\|  |_|  |__ \\    \\_\\  \\/ __ \\|  Y Y  \\  ___/ \n";
    cout << "|______  /(____  /____  >\\___  >___  (____  /____/____/  \\______  (____  /__|_|  /\\___  >\n";
    cout << "        \\/      \\/     \\/     \\/    \\/     \\/                    \\/     \\/      \\/     \\/ \n";
}

void menu(void) {

}

void solution(void) {

}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);




    return 0;
}
