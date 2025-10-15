#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>> N;
    int sum= 0;
    int array[N];
    for(int i = 0; i< N ; i++)
    {
        cin >> array[i];

    }
    for(int i = 0; i < N; i++)
    {
        sum += array[i];
        
        
    }
    cout << sum;

  


}