#include <iostream>
using namespace std;

int main() {
    cout<<"Welcome to Lost & Found System!"<<endl;
    int choice;
    cout<<"1. Report Lost Item."<<endl;
    cout<<"2. View All Lost Itmes.(coming soon)"<<endl;
    cout<<"3. Exit"<<endl;
    cin>>choice;

    if (choice == 1) {

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