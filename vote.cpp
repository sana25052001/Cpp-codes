#include<iostream>
using namespace std;
int main()
{
    int age, adhar_phno,phn; char adhar_name[100];
    cout<<"enter age of the user:";
    cin>>age;
    if(age>=18)
    {
        cout<<"\nyou are eligible to vote";
        cout<<"\nenter your adhar phone no."<<endl;
    cin>>adhar_phno;
    cout<<"\nenter your phn no."<<endl;
    cin>>phn;
    if(adhar_phno==phn)
    {
        cout<<"continue further "<<endl;
    cout<<"\nEnter your adhar name"<<endl;
    cin>>adhar_name;
    }
    else
    cout<<"different number!! please enter the correct number";
    }
    else
    cout<<"\nyou are not eligible to vote"<<endl;
    cout<<"select the party you want to vote";
    return 0;
}
