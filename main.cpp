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
    cout << "total sum is " << sum << " rupee" << endl;

    //Add variables togather
    int x = 5;
    int y = 6;
    int total = x + y;
    cout << total << endl;


    //exercise
    //create a variable and assign a value

    string str = "brian";
    cout << str << endl;

    //declare multiple variables
    //int i = 5, j = 10, k = 50;
    //cout << i + j + k << endl;

    //one value to multiple variables
    int p, q, r;
    p = q = r = 5;
    cout << p + q + r << endl;

    /*
        C++ identifiers:
        All C++ variables must be identified with unique names.
        These unique names are called identifiers.
        It is recommended to use descriptive names for understandable code
    */
    int minutesPerHour = 60;


    //C++ constants
    const int myVar = 15;
    //myVar = 20; // error -> assignment of readonly variable


    /*
        C++ User Input:
        cin is a prdefined variable that reads data from keyboard with extraction operator.

        cout uses insertion operator (<<)
        cin uses extraction operator(>>)
    */

    int n;
    cout << "Type a number and press enter: ";
    cin >> n; //get input from keyboard
    cout << "you have entered " << n << endl;

    //Creating a simple calculator

    int a, b;
    int add;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number";
    cin >> b;
    add = a + b;
    cout << "Sum of " << a << " and " << b << " is " << add << endl;

    /*
        C++ basic data types

        Data type       size            Description
        boolean         1 byte          stores true or false
        char            1 byte          stores single character/letter/number, or ASCII values
        int             2 or 4 bytes    stores whole numbers.
        float           4 bytes         stores fractional numbers. 7 decimal digits
        double          8 bytes         stores fractional numbers. 15 decimal digits
    */

    int sizeOfInt = sizeof(int);
    int sizeOfFloat = sizeof(float);
    int sizeOfDouble = sizeof(double);
    int sizeOfBoolean = sizeof(bool);
    int sizeOfChar = sizeof(char);
    int sizeOfStrings = sizeof(string);

    cout << "size of int = " << sizeOfInt << endl;
    cout << "size of float = " << sizeOfFloat << endl;
    cout << "size of double = " << sizeOfDouble << endl;
    cout << "size of boolean = " << sizeOfBoolean << endl;
    cout << "size of char = " << sizeOfChar << endl;
    cout << "size of string = " << sizeOfStrings << endl;



    /*
        Arrays and loops
    */

    //array of strings
    string cars[] = {"volvo", "bmw", "ford", "mazda", "tesla"};
    int i;
    for(i=0; i<5; i++)
    {
        cout << cars[i] << endl;
    }

    //array of integers
    int nums[] = {2,3,7,8,5};
    int u;
    for(u=0; u<5; u++)
    {
        cout << nums[u] << endl;
    }


    /*
        Array Size using sizeOf()
        Note: sizeOf() returns size in bytes;
        To find out how many elements the array has divide the size by the size of the type.
    */

    string hillStations[5] = {"ooty", "shillong", "matheran", "kalimpong", "darjeeling"};
    cout << sizeof(hillStations) << endl;
    int sizeOfString = sizeof(string);
    cout << "size of string type =" << sizeOfString << endl;
    int arraySize = sizeof(hillStations) / sizeof(string);
    cout << arraySize << endl;

    //loop an array using sizeof()
    int numsArr[] = {10,31,14,21,15,61};
    int iter;
    for(iter = 0; iter < sizeof(numsArr) / sizeof(int); iter++)
    {
        cout << numsArr[iter] << endl;
    }
}
