 // #include <conio.h>
 #include <ncurses.h>
#include <iostream>
using namespace std;

// #define KEY_UP 72
// #define KEY_DOWN 80
// #define KEY_LEFT 75
// #define KEY_RIGHT 77

void arrowDetect()
{
    int c = 0;
    while(1)
    {
        c = 0;
        c=getchar();
        cout<<" hi   "<<c<<endl;

        switch((c)) {
        case KEY_UP:
            cout << endl << "Up" << endl;//key up
            break;
        case KEY_DOWN:
            cout << endl << "Down" << endl;   // key down
            break;
        case KEY_LEFT:
            cout << endl << "Left" << endl;  // key left
            break;
        case KEY_RIGHT:
            cout << endl << "Right" << endl;  // key right
            break;
        default:
            cout << endl << "null" << endl;  // not arrow
            break;
        }

    }
}
int main()
{
    arrowDetect();
    return 1;
}