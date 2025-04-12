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
    cout<<"2. Report Found Item."<<endl;
    cout<<"3. View All Lost Itmes."<<endl;
    cout<<"4. View All Found Items."<<endl;
    cout<<"5. Search Lost/Found Items."<<endl;
    cout<<"6. Exit"<<endl;
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
                      ifstream file("found_items.txt");
    if (file.is_open()) {
        string line, block = "";
        bool found = false;
       
        string keyword1 = item;
        string keyword2 = description;
       
        for (int i=0; i<keyword1.length(); i++)
  {
    if (keyword1[i]>='A' && keyword1[i]<='Z') {
      keyword1[i] += 32;
    }
  }
  for (int i=0; i<keyword2.length(); i++)
  {
    if (keyword2[i]>='A' && keyword2[i]<='Z') {
      keyword2[i] += 32;
    }
  }
 
  while (getline(file, line)) {
      block += line + "\n";
     
      if (line == "-------------------------") {
          string temp = block;
          for (int i=0; i<temp.length(); i++)
          {
            if (temp[i]>='A' && temp[i]<='Z') {
              temp[i] += 32;
            }
          }
         
          if (temp.find(keyword1) != string::npos || temp.find(keyword2) != string::npos) {
              cout<<"\nThis seems to match with a Found Item in our records: "<<endl;
              cout<<block<<endl;
              found = true;
          }
          block = "";
  }
    }
    file.close();
    } else {
        cout<<"Error opening file!"<<endl;
    }


    }

    else if (choice == 2) {
        ifstream file("lost_items.txt");
        if (file.is_open()) {
            string line;
            cout<<"\nLost Items Report: \n\n";
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        } else {
            cout<<"Error opening file!"<<endl;
        }
    }     
               else if (choice == 3) {
       
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
                              ifstream file("lost_items.txt");
                              if (file.is_open()) {
                                  string line, block = "";
                                  bool found = false;
                                 
                                  string keyword1 = founditem;
                                  string keyword2 = fdescription;
                                 
                                  for (int i=0; i<keyword1.length(); i++)
                            {
                              if (keyword1[i]>='A' && keyword1[i]<='Z') {
                                keyword1[i] += 32;
                              }
                            }
                            for (int i=0; i<keyword2.length(); i++)
                            {
                              if (keyword2[i]>='A' && keyword2[i]<='Z') {
                                keyword2[i] += 32;
                              }
                            }
                           
                            while (getline(file, line)) {
                                block += line + "\n";
                               
                                if (line == "-------------------------") {
                                    string temp = block;
                                    for (int i=0; i<temp.length(); i++)
                                    {
                                      if (temp[i]>='A' && temp[i]<='Z') {
                                        temp[i] += 32;
                                      }
                                    }
                                   
                                    if (temp.find(keyword1) != string::npos || temp.find(keyword2) != string::npos) {
                                        cout<<"\nThis seems to match with a Lost Item in our records: "<<endl;
                                        cout<<block<<endl;
                                        found = true;
                                    }
                                    block = "";
                            }
                              }
                              file.close();
                              } else {
                                  cout<<"Error opening file!"<<endl;
                              }
                                  
        
            }
           
        
  else if (choice==4) {
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

else if (choice==5) {
  int searchchoice;
  cout<<"\nSearch Menu: "<<endl;
  cout<<"1. Search in Lost Items"<<endl;
  cout<<"2. Search in Found Items"<<endl;
  cout<<"Enter your choice: ";
  cin>>searchchoice;


  if (searchchoice == 1) {
    string keyword;
  cout<<"Enter a keyword to search: ";
  cin.ignore();
  getline(cin, keyword);
  for (int i=0; i<keyword.length(); i++)
  {
    if (keyword[i]>='A' && keyword[i]<='Z') {
      keyword[i] += 32;
    }
  }

    cout<<"\n---- Matching Lost Items ----"<<endl;
    ifstream file("lost_items.txt");
    if (file.is_open()) {
      string line, block = "";
      bool found = false;
      while (getline(file, line)) {
        block += line + "\n";

        if (line == "-------------------------") {
          string temp = block;
          for (int i=0; i<temp.length(); i++)
          {
            if (temp[i]>='A' && temp[i]<='Z') {
              temp[i] += 32;
            }
          }
        

        if (temp.find(keyword) != string::npos) {
          cout<<block<<endl;
          found = true;
        }
        block = "";
      }
      }
      if (!found) {
        cout<<"No matching lost items found."<<endl;
      }
      file.close();
    } else {
      cout<<"Error opening file!"<<endl;
    }
  } 
  
  else if (searchchoice == 2) {
    string keyword;
  cout<<"Enter a keyword to search: ";
  cin.ignore();
  getline(cin, keyword);
  for (int i=0; i<keyword.length(); i++)
  {
    if (keyword[i]>='A' && keyword[i]<='Z') {
      keyword[i] += 32;
    }
  }

    cout<<"\n---- Matching Found Items ----"<<endl;
    ifstream file("found_items.txt");
    if (file.is_open()) {
      string line, block = "";
      bool found = false;
      while (getline(file, line)) {
        block += line + "\n";

        if (line == "-------------------------") {
          string temp = block;
          for (int i=0; i<temp.length(); i++)
          {
            if (temp[i]>='A' && temp[i]<='Z') {
              temp[i] += 32;
            }
          }
        

        if (temp.find(keyword) != string::npos) {
          cout<<block<<endl;
          found = true;
        }
        block = "";
      }
      }
      if (!found) {
        cout<<"No matching found items found."<<endl;
      }
      file.close();
    } else {
      cout<<"Error opening file!"<<endl;
    }
  } else {
    cout<<"Invalid Choice! Returning to main menu...."<<endl;
  }
}

else if (choice == 6) {
  cout<<"Exiting the program."<<endl;
} 
       
else {
  cout<<"Invalid choice! Please enter a valid choice."<<endl;
} 
         cout << "\nPress Enter to continue..."<<endl;
         cin.get();
         

  
 } while (choice!=6);

    return 0;
  }