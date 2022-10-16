/* There are total 45 pupils in the class,25 of whom are boys.write 
    a program to find how many girls receivedgrades "A" if 17 boys made up
    80% of the students that receivedgrades "A".*/

#include<iostream>
using namespace std;
int main()
{
    int total,boys,girls;
    boys=17;
    total=(80*45)/100;      //total students getting grade A
    girls=total-boys;       //total number of girls getting grade A
    cout<<"Number of girls getting grade 'A' :"<<girls<<endl;
    return 0;
}