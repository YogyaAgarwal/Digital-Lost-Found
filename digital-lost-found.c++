#include <iostream>
using namespace std;

int main() {
    cout<<"Welcome to Lost & Found System!"<<endl;
    int choice;
    cout<<"What to you want to do?"<<endl;
    cout<<"1. Report Lost Item."<<endl;
    cout<<"2. View All Lost Itmes.(coming soon)"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    cin.ignore();

    if (choice == 1) {
       
        string name,item,lostlocation,date,description,contact;
        cout<<"lost item report form"<<endl;
          cout<<"enter your name: "<<endl;
          getline(cin,name);
          cout<<"enter the name of the lost item: "<<endl;
          getline(cin,item);
          cout<<"where did you lose it: "<<endl;
            getline(cin,lostlocation);
            cout<<"when did you lose it: "<<endl;
               getline(cin,date);
                 cout<<"description of the item(colour/brand/feature): "<<endl;
                 getline(cin,description);
                     cout<<"contact number: "<<endl;
                     getline(cin,contact);

                     
    }
    else if (choice == 2) {
        cout<<"This feature is currently not available. Please try again later."<<endl;
    }
    else if (choice == 3) {
        cout<<"Exitting the program."<<endl;
    }
    else {
        cout<<"Invalid choice! Please enter a valid choice."<<endl;
    }
}