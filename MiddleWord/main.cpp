#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    cout << "enter a word: ";
    string response;
    cin >> response;
    if(response.length() % 2 == 1){  // if string length is odd, just divide by 2
        cout << response.substr(response.length()/2,1) << endl;
    }
    else {                           // if string length is even, divide by 2 and reduce one for first middle word
        cout << response.substr(response.length()/2 - 1,2) << endl;
    }
    return 0;
}
