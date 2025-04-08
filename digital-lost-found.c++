#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {


  int choice;
    do{
    cout<<"Welcome to Lost & Found System!"<<endl;
    cout<<"What do you want to do?"<<endl;
    cout<<"1. Report Lost Item."<<endl;
    cout<<"2. View All Lost Itmes.(coming soon)"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    cin.ignore();

    if (choice == 1) {
       
        string name,item,lostlocation,date,description,contact;
        cout<<"Lost Item Report Form"<<endl;
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

                     cout<<"Lost Item Details"<<endl;
                     cout<<"Name: "<<name<<endl;
                     cout<<"Item: "<<item<<endl;
                     cout<<"Lost Location: "<<lostlocation<<endl;
                     cout<<"Date: "<<date<<endl;
                     cout<<"Description: "<<description<<endl;
                     cout<<"Contact Number: "<<contact<<endl;

                     char confirm;
                     cout<<"Do you want to summit this report?(Y/N): "<<endl;
                     cin>>confirm;
                     cin.ignore();
                      if(confirm=='Y'||confirm=='y'){
                        ofstream file("lost_items.txt", ios::app);
                        if (file.is_open()) {
                            file<<"Name: "<<name<<endl;
                            file<<"Item: "<<item<<endl;
                            file<<"Location: "<<lostlocation<<endl;
                            file<<"Date: "<<date<<endl;
                            file<<"Description: "<<description<<endl;
                            file<<"Contact: "<<contact<<endl;
                            file << "-------------------------\n";
                            file.close();      
                        cout<<"Thank you! your lost item has been recorded "<<endl;
                      } else {
                        cout<<"Error opening file!"<<endl;
                      }
                    }
                    else{
                        cout<<"Submission Cancelled!"<<endl;
                      }

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
    
  }while (choice!=3);

    return 0;
  }