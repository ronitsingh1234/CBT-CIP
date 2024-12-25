#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Structure to hold student data
struct Student {
    string name;
    int rollNumber;
    string course;
    float grade;
};

// Function to add a new student to the file
void addStudent() {
    Student student;
    ofstream outFile("students.txt", ios::app); // Open file in append mode

    if (!outFile) {
        cout << "Error: Unable to open file!" << endl;
        return;
    }

    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, student.name);

    cout << "Enter Roll Number: ";
    cin >> student.rollNumber;

    cout << "Enter Course: ";
    cin.ignore();
    getline(cin, student.course);

    cout << "Enter Grade: ";
    cin >> student.grade;

    // Write data to file
    outFile << student.name << "," << student.rollNumber << "," << student.course << "," << student.grade << endl;

    cout << "Student added successfully!" << endl;
    outFile.close();
}

// Function to display all students from the file
void displayStudents() {
    ifstream inFile("students.txt"); // Open file in read mode

    if (!inFile) {
        cout << "Error: Unable to open file!" << endl;
        return;
    }

    string line;
    cout << "\n--- Student Records ---\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
}

// Main function
int main() {
    int choice;

    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
