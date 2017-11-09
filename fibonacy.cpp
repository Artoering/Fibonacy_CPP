#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,no, first=0, second=1, next;
    bool stop=true;
    cout<<"Input Deret Fibonacy Maksimal : ";
    cin>>no;
    cout<<"Deret Fibonacy : \n";
    while(stop)
    {
        if(first>=no) stop = false;
        else{
            cout<<"\n"<<first;
            next = first + second;
            first = second;
            second = next;
        }
    }
    getch();
}
