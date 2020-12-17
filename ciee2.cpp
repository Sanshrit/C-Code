#include<iostream>
#include<cstring>
using namespace std;
static int i = 0;

class AddressBook
{
    private:
        char Name[20];
        char Address[20];
        char PhoneNo[11];
        char Email[40];
        char Relationship;
    public:
        void InsertData()
        {
            cout<<"Enter name"<<endl;
            cin>>Name;
            cout<<"Enter Address"<<endl;
            cin>>Address;
            cout<<"Enter Phone number : "<<endl;
            cin>>PhoneNo;
            cout<<"Enter Email"<<endl;
            cin>>Email;
            cout<<"Enter Relationship status(M/S)\n";
            cin>>Relationship;
        }
        void DisplayData()
        {
            cout<<"Name : "<<Name<<endl<<"Address : "<<Address<<endl<<"Phone No : "<<PhoneNo<<endl<<"Email : "<<Email<<endl<<"Relationship : "<<Relationship<<endl;
        }
        void SearchPhNo(char str[],AddressBook ad[])
        {
            cout<<ad[0].PhoneNo<<endl;
            cout<<str<<endl;
            for(int k=0;k<i;k++)
            {
                if (strcmp(ad[k].PhoneNo,str)==0)
                {
                    ad[k].DisplayData();
                }
                else 
                {
                    cout<<"Not found\n";
                }
            }
        }
}; 

 AddressBook ad[100];
int main()
{

    char ph[20];
    //int i = 0;
    char ch = 'y';
    while(ch!='n')
    {
        ad[i].InsertData();
        i++;
        cout<<"Enter another?(y/n)"<<endl;
        cin>>ch;
    }
    int j = i+1;
    cout<<"Enter phone number to search\n";
    cin>>ph;
    ad[j].SearchPhNo(ph,ad);
    return 0;
}