#include <iostream>
using namespace std;

void getRandomArray(int n);
void getSortedArray(int n);

int main() {
  
    getRandomArray(50);
    cout << endl;
    getSortedArray(20);
    cout << endl;
    
    return 0;
}

void getRandomArray(int n) {
    
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = i+1;

    for (int i = 0; i < n; i++) {
      int j = rand()%n;

      int t = arr[i];
      arr[i] = arr[j];
      arr[j] = t;
    }
    
    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";
    
}

void getSortedArray(int n){
    int arr[n];
    int j = n-1;
    if (n % 2 == 0){
        for (int i = 0; i < n; i++){
            if (i != (n/2)){
                arr[i] = i;
                arr[j] = i;
            }
            else
                break;
            j--;
        }
    }
    else
        cout << "it's not even";
    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";
    
}
