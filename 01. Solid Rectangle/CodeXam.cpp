#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int rows,columns,i,j;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    //Takes input from user for rows
    cout<<"Enter the number of columns: ";
    cin>>columns;
     //Takes input from user for columns
     i=1;
     while( i<=rows){//outer while loop
            j=1;
    while(j<=columns){//inner while loop
        cout<<"*";//print star
        j++;
    }
    cout<<"\n";//move to next line
     i++;
}
getch();
    return 0;
}