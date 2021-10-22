#include<iostream>
using namespace std;
int main()
{
    class Bank
    {
        private:
        int acno,bal;
        char name[30];
        public:
        {
            cout<<"enter the a/c number:";
            cin>>acno;
            cout<<"enter the name:";
            cin>>name;
            cout<<"enter the balance:";
            cin>>bal;
        }
        void disp()
        {
            cout<<acno<<"\t"<<"\t"<<bal<<endl;

        }
        int get_ac()
        {
            return acno;
        }
        void deposit(int d)
        {
            bal=bal+d;
            cout<<"Amount deposited successfully"<<bal<<endl;
        }
        void withdraw(int w)
        {
            if(bal>=w)
            {
                bal=bal-w;
                cout<<"Amount withdrawn successfully "<<bal<<endl;
            }
            else
            {
                cout<<"low balance";
            }
            
        }
        
    };
    int main()
    {
        Bank ob[100];
        int ch,i=0;j,ac,c,dep,wth;
        do
        {
            count<<"\npress 1 for new a/c:";
            cout<<"\npress 2 for display all";
            cout<<"\npress 3 for SEARCH";
            cout<<"\npress 4 for  DEPOSIT";
            cout<<"\npress 5 for  WITHDRAW";
            cout<<"\npress 6 for exit";
            cout<<"\npress 2 for display all";
            cout<<"\nenter your choice";
            cin>>ch;
            switch(ch)
            {
                case 1:
                ob[i].read();
                i++;
                break;

                case 2:
                for(j=0;j<i;j++)
                {
                    obj[j].disp()
                }
                break;

                case 3:
                c=0;
                cout<<"enter the a/c number to be search";
                cin>>ac;
                for(j=0;j<i;j++)
                {
                    if(ob[j.get_ac()==ac)
                    {
                        obj[j].disp();
                        c++;
                        break;
                    }
                }
                if(c==0)
                cout<<"no such a/c number found";
                break;

                case 4:
                c=0;
                cout<<"enter the a/c number to be deposited";
                cin>>ac;
                for(j=0;j<i;j++)
                {
                    if(ob[j].get_ac()==ac)
                    {
                        cout<<"enter the amount to be deposited";
                        cin>>dep;
                        if(ob[j].get_ac()==ac)
                        {
                            cout<<"enter the amount to be deposited";
                            cin>>dep;
                            ob[j].deposit(dep);
                            c++;
                            break;
                        } 
                    }

                case 5:
                c=0;
                cout<<"enter the a/c no. to be withdrawn amount";
                cin>>ac;
                for(j=0;j<i;j++)
                {
                    if[ob].get_ac()==ac)
                    {
                        cout<<"enter the amount to be withdrawn";
                        cin>>with;
                        obj[j].withdraw(wth);
                        c++;
                        break;

                    }
                }
                    if (c==0)
                    cout<<"no such acc no.exist";
                    break;

                } 
            }
            while(ch<=5);
            return 0;
        }


    }
    return 0;
}