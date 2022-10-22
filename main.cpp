#include <iostream>

using namespace std;

int main()
{
    /*
        Variables : variables are containers for storing data.
        In C++, there are different types of variables,

        int - stores integers.
        double - stores floating point numbers.
        char - stores single characters.
        string - stores text
        bool - values with two states, true or false
    */
    //Declaring and initializing a variable
    int myNum = 15;
    cout << myNum << endl;
    //declaring without initializing, assigning value later
    int num;
    num = 20;
    cout << num << endl;
    //assign a new value will overwrite the previous value
    num = 100;
    cout << num << endl;

    //other types
    int num1 = 15;
    double num2 = 3.19;
    char c = 'd';
    string text = "Hello";
    bool flag = true;


    //Display text with variable
    int sum = 105;
    cout << "total sum is " << sum << " rupee";


}
