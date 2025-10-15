#include <iostream>
using namespace std;

int main()
{
    //create the array
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i<n; i++)    {
        cin >> array[i];
    }

    //bubble_sort logic to sort the elements
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    //output the sorted array
    for(int i =0; i< n; i++)
    {
        cout << array[i] << endl;
    }
}