#include<bits/stdc++.h>


// It's generally better to include specific headers than <bits/stdc++.h>
// and to specify which parts of std you are using.
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Chai {
// Use the 'public' access specifier
public:
    string chaiName;
    int servings;
    vector<string> ingredients;

    void displayChaiDetails()
    {
        cout << "chaiName: " << chaiName << endl;
        cout << "servings: " << servings << endl;
        cout << "ingredients: " << endl;

        for (const string& ingredient : ingredients)
        {
            cout << ingredient << " ";
        }
        cout << endl;
    }
};

int main()
{
    Chai chaiOne;
    
    // Each statement must end with a semicolon ';'
    chaiOne.chaiName = "Red Label Chai";
    chaiOne.servings = 5;
    chaiOne.ingredients = {"water", "milk", "sugar", "ginger"};

    chaiOne.displayChaiDetails(); // Also needs a semicolon

    return 0; // Good practice to return 0 from main
}