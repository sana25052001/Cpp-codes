/*C++ program to read time in HH:MM:SS format and convert into total seconds.*/
 
#include <iostream>
#include <iomanip>
 
using namespace std;
 
class Time
{
    private:
        int seconds;
        int hh=1,mm=1,ss=6;
    public:
        void get_Time(void);
        void convert_Into_Seconds(void);
        void display_Time(void);
};
 
void Time::get_Time(void)
{
    cout << "Entered time is:" << endl;
    cout << "Hours?   "<<hh<<endl;          
    cout << "Minutes? "<<mm<<endl;          
    cout << "Seconds? "<<ss<<endl;          
}
 
void Time::convert_Into_Seconds(void)
{
    seconds = hh*3600 + mm*60 + ss;
}
 
void Time::display_Time(void)
{
    cout << "The time is = " << setw(2) << setfill('0') << hh << ":"
                             << setw(2) << setfill('0') << mm << ":"
                             << setw(2) << setfill('0') << ss << endl;
    cout << "Time in total seconds: " << seconds;
}
 
int main()
{
    Time T; //creating objects
     
    T.get_Time();
    T.convert_Into_Seconds();
    T.display_Time();
     
    return 0;
}
