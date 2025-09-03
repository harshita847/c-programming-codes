#include <iostream>
using namespace std;
int main()
{
    int a = 60;
      a > 50?
      cout<<"true":cout<<"false";
      

int age;
    cout << "enter value of age-";
    cin >> age;
    if (age >= 18)
        cout << "eligible to vote";
    else
        cout << "not eligible to vote";

    /* cout<<sizeof(char)<<endl;
     cout<<sizeof(bool)<<endl;
     cout<<sizeof(double);
     cout<<sizeof(float)<<endl;
     cout<<sizeof(bool);
     cout<<sizeof(double);

     bool issafe = true;
     cout<< issafe;

    */

// to find whether a number is prime or not
    int i, n, count = 0;
    cout << "enter a number-";
    cin >> a;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 0)
    {
        cout << "number is prime";
    }
    else
    {
        cout << "number is not prime";
    }

    return 0;
}





