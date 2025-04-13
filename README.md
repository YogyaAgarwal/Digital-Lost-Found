# Digital Lost & Found System

A beginner-friendly C++ project that simulates a digital lost and found system. It allows users to report lost or found items, search for items, view records, and automatically match lost and found entries.

This project was created as part of a team coding session focused on learning file handling, menus, and basic search algorithms in C++.

---

## Features

- Search Lost & Found Items  
  - Case-insensitive keyword search  
  - Prints full matched record block
  
- Report Lost and Found Item  
  - User-friendly form for entering item details  
  - 10-digit mobile number validation  
  - Preview before submission
  - Data stored in lost_items.txt file

- View Lost Items  
  - Displays a list of found items with all details.

- View Found Items  
  - Displays a list of found items with limited details(only item name, location and date of finding) so that anybody can not claim for that item without proper proof.

- Auto-Matching Logic  
  - After reporting, system tries to find a match in the opposite category (lost/found)  

- File Handling  
  - All data stored in external .txt files  
  - Supports reading and appending

- Main Menu System  
  - Easy navigation between features  
  - Loop until user exits  
  - Waits for "Enter" key to continue after each operation

---

## How It Works

1. On running the program, user is presented with a menu:
    - Report Lost Item  
    - Report Found Item 
    - View Lost Items 
    - View Found Items  
    - Search Lost/Found Items  
    - Exit

2. After each submission or action, the system confirms the input and either stores or displays the result.

3. During lost/found entry, the system also tries to auto-match it with existing records from the other category.

---

## Team Contributions

1. Yogya Agarwal ([GitHub](https://github.com/YogyaAgarwal))  
  - Developed *Search Feature* with case-insensitive keyword matching  
  - Added *Contact Number Validation* for 10-digit check  
  - Designed *Main Menu Navigation System*  
  - Handled *file open error handling*  
  - Fixed *multiple bugs & corrections*  
  - Managed *merge conflicts*, final formatting & cleanup  
  - Contributed to *initial setup and welcome UI*

2. Yash Garg ([GitHub](https://github.com/786yashgarg))  
  - Developed *Lost Item Input Form*  
  - Implemented *View All Found Items* feature  
  - Added *File Reading/Writing Logic*  
  - Helped with *Git Conflict Resolutions & Merging*

3. Yash Pareek ([GitHub](https://github.com/Yashp0101))  
  - Implemented *Auto-Matching Logic* after item reporting  
  - Added *Display & Confirmation* before submission  
  - Designed *View Lost Items* feature  
  - Managed *file formatting and display* refinements

4. Raghav Manihar ([GitHub](https://github.com/RaghavManihar06))  
  - Built *Report Found Item* form  
  - Added *Looping Logic* to re-show menu until exit  
  - Improved *Main Menu Numbering & Reorganization*  
  - Displayed *Submission Confirmation Messages*

---

## Files Used

- lost.txt → stores lost item reports  
- found.txt → stores found item reports
