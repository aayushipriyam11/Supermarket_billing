#include<iostream>
#include<fstream>
using namespace std;
 class shop
 {
    private:
       int pcode;
       float price;
       float discount;
       string pname;
    public:
       void menu();
       void admin();
       void buyer();
       void add();
       void edit();
       void remove();
       void list();
       void receipt();
 };
 void shop:: menu()
 {
    m:
    int ch;
    string email;
    string password;

    cout << " Supermarket Main Menu:"<<endl<<endl;
    cout<< "\t 1) Administrator\n\t 2)Buyer\n\t 3)Exit"<<endl; 
    cout<<"Please Select"<<endl;
    cin>>ch;
    switch(ch){
    case 1:
        cout<<"\t\tPlease login\n";
        cout<<"\t\tEnter Email\n";
        cin>>email;
        cout<<"\t\tEnter password\n";
        cin>>password;
        if(email=="admin@gmail.com"&& password=="admin@123")
        {
            admin();
        }
        else
        {
            cout<<"Invalid email/password"<<endl;
        }
        break;
    case 2:
        buyer();
        break;
    case 3:
        exit(0);
        break;
    default:
        cout<<"Invalid Input";
    }
    goto m;
}