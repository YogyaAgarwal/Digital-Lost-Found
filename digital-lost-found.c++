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
    cout<<"2. View All Lost Itmes."<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"4. Report found item."<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    cin.ignore();

    if (choice == 1) {
       
        string name,item,lostlocation,date,description,contact;
        cout<<"Lost Item Report Form"<<endl;
          cout<<"Enter your name: "<<endl;
          getline(cin,name);
          cout<<"Enter the name of the lost item: "<<endl;
          getline(cin,item);
          cout<<"Where did you lose it: "<<endl;
            getline(cin,lostlocation);
            cout<<"When did you lose it: "<<endl;
               getline(cin,date);
                 cout<<"Description of the lost item(colour/brand/feature): "<<endl;
                 getline(cin,description);
                     cout<<"Contact Number: "<<endl;
                     getline(cin,contact);

                     cout<<"Lost Item Details"<<endl;
                     cout<<"Name: "<<name<<endl;
                     cout<<"Lost Item: "<<item<<endl;
                     cout<<"Lost Location: "<<lostlocation<<endl;
                     cout<<"Date of losing: "<<date<<endl;
                     cout<<"Description of the lost item: "<<description<<endl;
                     cout<<"Contact Number: "<<contact<<endl;

                     char confirm;
                     cout<<"Do you want to submit this report?(Y/N): "<<endl;
                     cin>>confirm;
                     cin.ignore();
                      if(confirm=='Y'||confirm=='y'){
                        ofstream file("lost_items.txt", ios::app);
                        if (file.is_open()) {
                            file<<"Name: "<<name<<endl;
                            file<<"Lost Item: "<<item<<endl;
                            file<<"Lost Location: "<<lostlocation<<endl;
                            file<<"Date of losing: "<<date<<endl;
                            file<<"Description of the lost item: "<<description<<endl;
                            file<<"Contact Number: "<<contact<<endl;
                            file << "-------------------------\n";
                            file.close();      
                        cout<<"Thank you! Your lost item has been recorded."<<endl;
                      } else {
                        cout<<"Error opening file!"<<endl;
                      }
                    }
                    else{
                        cout<<"Submission Cancelled!"<<endl;
                      }

    }

    else if (choice == 2) {
        ifstream file("lost_items.txt");
        if (file.is_open()) {
            string line;
            cout << "Lost Items Report:" << endl;
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        } else {
            cout << "Error opening file!" << endl;
        }
    }
    else if (choice == 3) {
        cout<<"Exiting the program."<<endl;
    }      
               else if (choice == 4) {
       
                string findername,founditem,foundlocation,founddate,fdescription,fcontact;
                cout<<"Lost Item Report Form"<<endl;
                  cout<<"Enter your name: "<<endl;
                  getline(cin,findername);
                  cout<<"Enter the name of the found item: "<<endl;
                  getline(cin,founditem);
                  cout<<"Where did you found it: "<<endl;
                    getline(cin,foundlocation);
                    cout<<"When did you find it: "<<endl;
                       getline(cin,founddate);
                         cout<<"Description of the found item(colour/brand/feature): "<<endl;
                         getline(cin,fdescription);
                             cout<<"Contact Number: "<<endl;
                             getline(cin,fcontact);
        
                             cout<<"Found Item Details"<<endl;
                             cout<<"Finder's Name: "<<findername<<endl;
                             cout<<"Found Item: "<<founditem<<endl;
                             cout<<"Found Location: "<<foundlocation<<endl;
                             cout<<"Date of finding: "<<founddate<<endl;
                             cout<<"Description of the found item: "<<fdescription<<endl;
                             cout<<"Finder's Contact Number: "<<fcontact<<endl;
        
                             char confirm;
                             cout<<"Do you want to submit this report?(Y/N): "<<endl;
                             cin>>confirm;
                             cin.ignore();
                              if(confirm=='Y'||confirm=='y'){
                                ofstream file("found_items.txt", ios::app);
                                if (file.is_open()) {
                                    file<<"Finder's Name: "<<findername<<endl;
                                    file<<"Found Item: "<<founditem<<endl;
                                    file<<"Found Location: "<<foundlocation<<endl;
                                    file<<"Date of finding: "<<founddate<<endl;
                                    file<<"Description of the found item: "<<fdescription<<endl;
                                    file<<"Finder's Contact Number: "<<fcontact<<endl;
                                    file << "-------------------------\n";
                                    file.close();      
                                cout<<"Thank you! Your found item has been recorded."<<endl;
                              } else {
                                cout<<"Error opening file!"<<endl;
                              }
                            }
                            else{
                                cout<<"Submission Cancelled!"<<endl;
                              }
        
            }
           
        
  else if (choice==5) {
    ifstream file("found_items.txt");
    
    if (file.is_open()) {
        string line;
        
        cout<<"\nFound Items Report: \n\n";
        
        while (getline(file, line)) {
            if (line.find("Found Item: ") != string::npos)
            {
                cout<<line<<endl;
            } else if (line.find("Found Location: ") != string::npos) {
                cout<<line<<endl;
            } else if (line.find("Date of finding: ") != string::npos) {
                cout<<line<<endl;
                cout<<"-----------------------------------------------"<<endl;
            }
        }
        cout<<"\nNote: To enquire/claim an item, please contact Lost & Found desk with proper proof."<<endl;
        file.close();
    } else {
        cout<<"Error opening file!"<<endl;
    }
}                                    

       
else {
  cout<<"Invalid choice! Please enter a valid choice."<<endl;
} 
         cout << "\nPress Enter to continue...";
         cin.get();
         

  
 } while (choice!=3);

    return 0;
  }