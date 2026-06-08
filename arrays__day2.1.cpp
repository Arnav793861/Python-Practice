#include<iostream>
using namespace std;
int evennumbers(int arr[], int size){
    int count = 0;
    for(int i=0; i<size; i++){
        if((arr[i]%2 == 0)){
            count++;
        }
    }
    return count;
    
}
int main(){
    int arr[] = {132, 24, 34, 45, 54, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int evenCount = evennumbers(arr, size);
    cout << "Count of even numbers in the array: " << evenCount << endl;
    cin.get(); // wait for Enter so output remains visible in VS Code
    return 0;
}