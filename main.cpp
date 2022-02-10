#include <iostream>
#include <string>


using namespace std;


int main() {
    string num;

    cin >> num;

    int sizeOfArr = num.length();
    int sizeOfHalfArr = sizeOfArr/2;

    for(int i = 0; i<sizeOfArr; i++){
        if(num[i]<'0' || num[i]>'9'){
            return 0;
        }
    }

    if(sizeOfArr % 2 != 0){
        sizeOfHalfArr++;
    }

    for(int i = 0;i < sizeOfHalfArr; i++){
        if(num[i]!=num[sizeOfArr-1-i]){
            cout << "fail\n";
            return 0;
        }
    }

    cout << "number is polindrom\n";

}
