#include<iostream>
using namespace std;

int main(){
    float media;
    float total = 0;
    float arr[5] = {4.0,4.0,4.0,4.0,4.0};

    for(int i = 0; i < 5; i++){
        total += arr[i];
    }

    total = total / 5;
    cout << "the media is: " <<total << endl;

    return 0;
}
