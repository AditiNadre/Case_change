//CPP program to interchange case of letters in string
/* logic- the ASCII value of a-z are 97-122 
        the ASCII value of A-Z are 65-90
        to convert a to A you need to sustract 32 {a(97)-32=A(65)}
        to convert A to a you need to add 32 {A(65)+32=a(97)}  */

#include <iostream>
using namespace std;

// function to swap the case of letters in string

void swap_case(string &str)
{
    int length, i;
    length = str.length();

    for (i = 0; i < length; i++)
    {
        // if string is in between a to z
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        // if string is in A between  to Z
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {

            str[i] = str[i] + 32;
        }
    }
}

// driver function

int main()
{
    // declaration of string
    string str;

    // accept string from user
    cout << "enter the string";
    cin >> str;

    // call the function to interchange the string's case
    swap_case(str);

    //print output string
    cout << str;

    return 0;
}