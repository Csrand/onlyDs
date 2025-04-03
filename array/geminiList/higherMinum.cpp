#include <iostream>
using namespace std;

int main(){
    
    int arr[5] = {11,22,13,44,15};
    int higher = arr[0];
    int minum = arr[0];
    
    for(int i = 0; i < 5; i++ ){
        
        if(arr[i] > higher){
            higher = arr[i];
        }
        if(arr[i] < minum){
            minum = arr[i];
        }
    }
    
    cout << "the higher number is: " << higher << " and the minum is: " << minum << endl;

    return 0;
}