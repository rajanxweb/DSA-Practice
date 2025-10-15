#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int array[n];
    for(int i=0; i < n; i++)
    {
        cin >> array[i];
    }
    int key;
    cin >> key;

    int fi= -1;
    int li= -1;
    for(int i = 0; i <n; i++){
        if(array[i] == key)
        {
            if(fi == -1)
            {
                fi = i;

            }
            li = i; 

        }
    
    }
    cout << "First Occurence: "<< fi << endl;
    cout << "Lat Occurence : " << li << endl;

}