#include <iostream>
using namespace std;

int main()
{

    int book;

    double totalfine;
    cout << "enter the number of books:" << endl;

    cin >> book;

    for (int i = 1; i <= book; i++)
    {
        int fine = 5;

        int days;

        cout << "enter the days you become late for book :" << i << endl;

        cin >> days;

        if (days == 1)
        {
            fine = 5;
        }
        else if (days == 0)
        {
            fine = 0;

        }
    
        else
        {
            for (int i = 2; i <= days; i++)
            {
                if(fine==1000)
                {
                    break;
                }
                fine = fine * 2;
            }
        }
        cout << "    The book fine is:    " << fine << endl;

        totalfine = totalfine + fine;
    }
    cout << "   Total fine " << totalfine << " for books is " << endl;

    return 0;
}
  