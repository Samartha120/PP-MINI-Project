    // #include <iostream>
    // #include <vector>
    // #include <iomanip> // For controlling output formatting
    // #include <string>

    // using namespace std;

    // // ANSI color codes for terminal output
    // #define RESET   "\033[0m"
    // #define RED     "\033[31m"
    // #define GREEN   "\033[32m"
    // #define YELLOW  "\033[33m"
    // #define BLUE    "\033[34m"
    // #define CYAN    "\033[36m"
    // #define MAGENTA "\033[35m"
    // #define BOLD    "\033[1m"
    // #define UNDERLINE "\033[4m"

    // class Student {
    // public:
    //     string name;      // Student Name
    //     int prn;          // PRN (Permanent Registration Number)
    //     float marksCO, marksPP, marksDMGT, marksDS, marksSAM;  // Marks for each subject
    //     float overallPercentage;
    //     string grade;

    //     // Constructor to initialize student details
    //     Student(string name, int prn, float marksCO, float marksPP, float marksDMGT, float marksDS, float marksSAM) {
    //         this->name = name;
    //         this->prn = prn;
    //         this->marksCO = marksCO;
    //         this->marksPP = marksPP;
    //         this->marksDMGT = marksDMGT;
    //         this->marksDS = marksDS;
    //         this->marksSAM = marksSAM;
    //         this->overallPercentage = calculateOverallPercentage();
    //         this->grade = assignGrade();
    //     }

    //     // Calculate overall percentage
    //     float calculateOverallPercentage() {
    //         return (marksCO + marksPP + marksDMGT + marksDS + marksSAM) / 5.0;
    //     }

    //     // Assign grade based on overall percentage
    //     string assignGrade() {
    //         if (overallPercentage >= 90) return "A";
    //         else if (overallPercentage >= 80) return "B";
    //         else if (overallPercentage >= 70) return "C";
    //         else if (overallPercentage >= 60) return "D";
    //         else return "F";
    //     }

    //     // Display the student's result with proper formatting and spacing
    //     void displayResult() {
    //         cout << BOLD << left << setw(15) << "Name"
    //              << left << setw(10) << "PRN"
    //              << left << setw(10) << "CO"
    //              << left << setw(10) << "PP"
    //              << left << setw(10) << "DMGT"
    //              << left << setw(10) << "DS"
    //              << left << setw(10) << "SAM"
    //              << left << setw(15) << "Overall(%)"
    //              << left << setw(10) << "Grade" << RESET << endl;

    //         // Setting up colors for marks based on grade
    //         string color = (grade == "A" || grade == "B") ? GREEN : (grade == "C") ? YELLOW : RED;

    //         cout << left << setw(15) << name
    //              << left << setw(10) << prn
    //              << left << setw(10) << marksCO
    //              << left << setw(10) << marksPP
    //              << left << setw(10) << marksDMGT
    //              << left << setw(10) << marksDS
    //              << left << setw(10) << marksSAM
    //              << color << left << setw(15) << overallPercentage
    //              << left << setw(10) << grade << RESET << endl;
    //     }
    // };

    // class SchoolManagementSystem {
    // private:
    //     vector<Student> students;

    // public:
    //     // Add a new student to the system
    //     void addStudent() {
    //         string name;
    //         int prn;
    //         float marksCO, marksPP, marksDMGT, marksDS, marksSAM;

    //         cout << "Enter Student Name: ";
    //         cin.ignore();
    //         getline(cin, name);
    //         cout << "Enter Student PRN: ";
    //         cin >> prn;
    //         cout << "Enter marks for CO (%): ";
    //         cin >> marksCO;
    //         cout << "Enter marks for PP (%): ";
    //         cin >> marksPP;
    //         cout << "Enter marks for DMGT (%): ";
    //         cin >> marksDMGT;
    //         cout << "Enter marks for DS (%): ";
    //         cin >> marksDS;
    //         cout << "Enter marks for SAM (%): ";
    //         cin >> marksSAM;

    //         Student newStudent(name, prn, marksCO, marksPP, marksDMGT, marksDS, marksSAM);
    //         students.push_back(newStudent);

    //         cout << GREEN << "Student added successfully!" << RESET << endl;
    //     }

    //     // Display the list of all students
    //     void displayStudents() {
    //         if (students.empty()) {
    //             cout << RED << "No students available." << RESET << endl;
    //             return;
    //         }

    //         cout << BOLD << UNDERLINE << "Student Results:" << RESET << endl;
    //         cout << BOLD << left << setw(15) << "Name"
    //              << left << setw(10) << "PRN"
    //              << left << setw(10) << "CO"
    //              << left << setw(10) << "PP"
    //              << left << setw(10) << "DMGT"
    //              << left << setw(10) << "DS"
    //              << left << setw(10) << "SAM"
    //              << left << setw(15) << "Overall(%)"
    //              << left << setw(10) << "Grade" << RESET << endl;

    //         for (Student& student : students) {
    //             student.displayResult();
    //         }
    //     }

    //     // View the result of a student by their PRN
    //     void viewResult() {
    //         int prn;
    //         cout << "Enter Student PRN to view result: ";
    //         cin >> prn;

    //         bool found = false;
    //         for (Student& student : students) {
    //             if (student.prn == prn) {
    //                 student.displayResult();
    //                 found = true;
    //                 break;
    //             }
    //         }

    //         if (!found) {
    //             cout << RED << "Student with PRN " << prn << " not found." << RESET << endl;
    //         }
    //     }
    // };

    // void displayTitle() {
    //     cout << BOLD << CYAN << UNDERLINE;
    //     cout << "=========================================" << endl;
    //     cout << "    SYMBIOSIS STUDENT MANAGEMENT SYSTEM   " << endl;
    //     cout << "=========================================" << RESET << endl;
    // }

    // int main() {
    //     SchoolManagementSystem system;
    //     int choice;

    //     // Display the title
    //     displayTitle();

    //     while (true) {
    //         cout << BOLD << BLUE << "\nSelect Option for Student Data:\n";
    //         cout << "1. Add Student\n";
    //         cout << "2. Display All Students\n";
    //         cout << "3. View Student Result by PRN\n";
    //         cout << "4. Exit\n";
    //         cout << "Enter your choice: " << RESET;
    //         cin >> choice;

    //         switch (choice) {
    //             case 1:
    //                 system.addStudent();
    //                 break;
    //             case 2:
    //                 system.displayStudents();
    //                 break;
    //             case 3:
    //                 system.viewResult();
    //                 break;
    //             case 4:
    //                 cout << GREEN << "Exiting the system." << RESET << endl;
    //                 return 0;
    //             default:
    //                 cout << RED << "Invalid choice. Please try again." << RESET << endl;
    //         }
    //     }

    //     return 0;
    // }
    // #include <iostream>
    // #include <vector>
    // #include <iomanip> // For controlling output formatting
    // #include <string>

    // using namespace std;

    // // ANSI escape codes for text colors
    // #define RESET   "\033[0m"
    // #define RED     "\033[31m"      /* Red */
    // #define GREEN   "\033[32m"      /* Green */
    // #define YELLOW  "\033[33m"      /* Yellow */
    // #define BLUE    "\033[34m"      /* Blue */
    // #define MAGENTA "\033[35m"      /* Magenta */
    // #define CYAN    "\033[36m"      /* Cyan */
    // #define BOLD    "\033[1m"
    // #define UNDERLINE "\033[4m"

    // // Function to display a header with colors
    // void displayHeader() {
    //     cout << BOLD << CYAN << "=============================" << RESET << endl;
    //     cout << BOLD << YELLOW << " SYMBIOSIS STUDENT MANAGEMENT SYSTEM " << RESET << endl;
    //     cout << BOLD << CYAN << "=============================" << RESET << endl << endl;
    // }

    // // Base class (Person)
    // class Person {
    // public:
    //     string name;

    //     // Constructor for Person
    //     Person(string name) : name(name) {}

    //     // Virtual function for displaying details (demonstrates polymorphism)
    //     virtual void displayDetails() {
    //         cout << "Name: " << name << endl;
    //     }

    //     virtual ~Person() {} // Virtual destructor for polymorphic behavior
    // };

    // // Derived class (Student) inherits from Person
    // class Student : public Person {
    // public:
    //     int prn;
    //     float marksCO, marksPP, marksDMGT, marksDS, marksSAM;
    //     float overallPercentage;
    //     string grade;

    //     // Constructor to initialize student details, inheriting name from Person
    //     Student(string name, int prn, float marksCO, float marksPP, float marksDMGT, float marksDS, float marksSAM)
    //         : Person(name), prn(prn), marksCO(marksCO), marksPP(marksPP), marksDMGT(marksDMGT), marksDS(marksDS), marksSAM(marksSAM) {
    //         overallPercentage = calculateOverallPercentage();
    //         grade = assignGrade();
    //     }

    //     // Calculate overall percentage
    //     float calculateOverallPercentage() {
    //         return (marksCO + marksPP + marksDMGT + marksDS + marksSAM) / 5.0;
    //     }

    //     // Assign grade based on overall percentage
    //     string assignGrade() {
    //         if (overallPercentage >= 90) return "A";
    //         else if (overallPercentage >= 80) return "B";
    //         else if (overallPercentage >= 70) return "C";
    //         else if (overallPercentage >= 60) return "D";
    //         else return "F";
    //     }

    //     // Overridden function to display student details (polymorphism)
    //     void displayDetails() override {
    //         // Display header with colored output
    //         cout << BOLD << YELLOW << left << setw(15) << "Name" 
    //              << left << setw(10) << "PRN"
    //              << left << setw(10) << "CO"
    //              << left << setw(10) << "PP"
    //              << left << setw(10) << "DMGT"
    //              << left << setw(10) << "DS"
    //              << left << setw(10) << "SAM"
    //              << left << setw(15) << "Overall(%)"
    //              << left << setw(10) << "Grade" << RESET << endl;

    //         // Display student details with different colors
    //         cout << left << setw(15) << name
    //              << left << setw(10) << prn
    //              << left << setw(10) << marksCO
    //              << left << setw(10) << marksPP
    //              << left << setw(10) << marksDMGT
    //              << left << setw(10) << marksDS
    //              << left << setw(10) << marksSAM
    //              << GREEN << left << setw(15) << overallPercentage
    //              << (grade == "F" ? RED : GREEN) << left << setw(10) << grade << RESET << endl;
    //     }
    // };

    // // School Management System class
    // class SchoolManagementSystem {
    // private:
    //     vector<Person*> people; // Stores both students and other types of people if needed

    // public:
    //     // Add a new student to the system
    //     void addStudent() {
    //         string name;
    //         int prn;
    //         float marksCO, marksPP, marksDMGT, marksDS, marksSAM;

    //         cout << "Enter Student Name: ";
    //         cin.ignore();
    //         getline(cin, name);
    //         cout << "Enter Student PRN: ";
    //         cin >> prn;
    //         cout << "Enter marks for CO (%): ";
    //         cin >> marksCO;
    //         cout << "Enter marks for PP (%): ";
    //         cin >> marksPP;
    //         cout << "Enter marks for DMGT (%): ";
    //         cin >> marksDMGT;
    //         cout << "Enter marks for DS (%): ";
    //         cin >> marksDS;
    //         cout << "Enter marks for SAM (%): ";
    //         cin >> marksSAM;

    //         // Create a new Student object and add it to the system
    //         people.push_back(new Student(name, prn, marksCO, marksPP, marksDMGT, marksDS, marksSAM));

    //         cout << GREEN << "Student added successfully!" << RESET << endl;
    //     }

    //     // Display all people in the system (demonstrates polymorphism)
    //     void displayPeople() {
    //         if (people.empty()) {
    //             cout << RED << "No students available." << RESET << endl;
    //             return;
    //         }

    //         cout << BOLD << "Student Results:" << RESET << endl;
    //         for (Person* person : people) {
    //             person->displayDetails(); // Polymorphic call to displayDetails
    //         }
    //     }

    //     ~SchoolManagementSystem() {
    //         // Free memory allocated for people
    //         for (Person* person : people) {
    //             delete person;
    //         }
    //     }
    // };

    // int main() {
    //     SchoolManagementSystem system;
    //     int choice;

    //     displayHeader(); // Display header with colored title

    //     while (true) {
    //         cout << BOLD << "\nSelect Option for Student Data:\n" << RESET;
    //         cout << GREEN << "1. Add Student\n" << RESET;
    //         cout << BLUE << "2. Display All Students\n" << RESET;
    //         cout << RED << "3. Exit\n" << RESET;
    //         cout << "Enter your choice: ";
    //         cin >> choice;

    //         switch (choice) {
    //             case 1:
    //                 system.addStudent();
    //                 break;
    //             case 2:
    //                 system.displayPeople();
    //                 break;
    //             case 3:
    //                 cout << BOLD << RED << "Exiting the system." << RESET << endl;
    //                 return 0;
    //             default:
    //                 cout << RED << "Invalid choice. Please try again." << RESET << endl;
    //         }
    //     }

    //     return 0;
    // }
    // #include <iostream>
    // #include <vector>
    // #include <iomanip> // For controlling output formatting
    // #include <string>

    // using namespace std;

    // // ANSI escape codes for text colors
    // #define RESET   "\033[0m"
    // #define RED     "\033[31m"      /* Red */
    // #define GREEN   "\033[32m"      /* Green */
    // #define YELLOW  "\033[33m"      /* Yellow */
    // #define BLUE    "\033[34m"      /* Blue */
    // #define MAGENTA "\033[35m"      /* Magenta */
    // #define CYAN    "\033[36m"      /* Cyan */
    // #define BOLD    "\033[1m"
    // #define UNDERLINE "\033[4m"

    // // Function to display a header with colors
    // void displayHeader() {
    //     cout << BOLD << CYAN << "=============================" << RESET << endl;
    //     cout << BOLD << YELLOW << " SYMBIOSIS STUDENT MANAGEMENT SYSTEM " << RESET << endl;
    //     cout << BOLD << CYAN << "=============================" << RESET << endl << endl;
    // }

    // // Base class (Person)
    // class Person {
    // public:
    //     string name;

    //     // Constructor for Person
    //     Person(string name) : name(name) {}

    //     // Virtual function for displaying details (demonstrates polymorphism)
    //     virtual void displayDetails() {
    //         cout << "Name: " << name << endl;
    //     }

    //     virtual ~Person() {} // Virtual destructor for polymorphic behavior
    // };

    // // Derived class (Student) inherits from Person
    // class Student : public Person {
    // public:
    //     int prn;
    //     float marksCO, marksPP, marksDMGT, marksDS, marksSAM;
    //     float overallPercentage;
    //     string grade;

    //     // Constructor to initialize student details, inheriting name from Person
    //     Student(string name, int prn, float marksCO, float marksPP, float marksDMGT, float marksDS, float marksSAM)
    //         : Person(name), prn(prn), marksCO(marksCO), marksPP(marksPP), marksDMGT(marksDMGT), marksDS(marksDS), marksSAM(marksSAM) {
    //         overallPercentage = calculateOverallPercentage();
    //         grade = assignGrade();
    //     }

    //     // Calculate overall percentage
    //     float calculateOverallPercentage() {
    //         return (marksCO + marksPP + marksDMGT + marksDS + marksSAM) / 5.0;
    //     }

    //     // Assign grade based on overall percentage
    //     string assignGrade() {
    //         if (overallPercentage >= 90) return "A";
    //         else if (overallPercentage >= 80) return "B";
    //         else if (overallPercentage >= 70) return "C";
    //         else if (overallPercentage >= 60) return "D";
    //         else return "F";
    //     }

    //     // Overridden function to display student details (polymorphism)
    //     void displayDetails() override {
    //         // Display header with colored output
    //         cout << BOLD << YELLOW << left << setw(15) << "Name" 
    //              << left << setw(10) << "PRN"
    //              << left << setw(10) << "CO"
    //              << left << setw(10) << "PP"
    //              << left << setw(10) << "DMGT"
    //              << left << setw(10) << "DS"
    //              << left << setw(10) << "SAM"
    //              << left << setw(15) << "Overall(%)"
    //              << left << setw(10) << "Grade" << RESET << endl;

    //         // Display student details with different colors
    //         cout << left << setw(15) << name
    //              << left << setw(10) << prn
    //              << left << setw(10) << marksCO
    //              << left << setw(10) << marksPP
    //              << left << setw(10) << marksDMGT
    //              << left << setw(10) << marksDS
    //              << left << setw(10) << marksSAM
    //              << GREEN << left << setw(15) << overallPercentage
    //              << (grade == "F" ? RED : GREEN) << left << setw(10) << grade << RESET << endl;
    //     }
    // };

    // // School Management System class
    // class SchoolManagementSystem {
    // private:
    //     vector<Person*> people; // Stores both students and other types of people if needed

    // public:
    //     // Add a new student to the system
    //     void addStudent() {
    //         string name;
    //         int prn;
    //         float marksCO, marksPP, marksDMGT, marksDS, marksSAM;

    //         cout << "Enter Student Name: ";
    //         cin.ignore();
    //         getline(cin, name);
    //         cout << "Enter Student PRN: ";
    //         cin >> prn;
    //         cout << "Enter marks for CO (%): ";
    //         cin >> marksCO;
    //         cout << "Enter marks for PP (%): ";
    //         cin >> marksPP;
    //         cout << "Enter marks for DMGT (%): ";
    //         cin >> marksDMGT;
    //         cout << "Enter marks for DS (%): ";
    //         cin >> marksDS;
    //         cout << "Enter marks for SAM (%): ";
    //         cin >> marksSAM;

    //         // Create a new Student object and add it to the system
    //         people.push_back(new Student(name, prn, marksCO, marksPP, marksDMGT, marksDS, marksSAM));

    //         cout << GREEN << "Student added successfully!" << RESET << endl;
    //     }

    //     // Display all people in the system (demonstrates polymorphism)
    //     void displayPeople() {
    //         if (people.empty()) {
    //             cout << RED << "No students available." << RESET << endl;
    //             return;
    //         }

    //         cout << BOLD << "Student Results:" << RESET << endl;
    //         for (Person* person : people) {
    //             person->displayDetails(); // Polymorphic call to displayDetails
    //         }
    //     }

    //     ~SchoolManagementSystem() {
    //         // Free memory allocated for people
    //         for (Person* person : people) {
    //             delete person;
    //         }
    //     }
    // };

    // int main() {
    //     SchoolManagementSystem system;
    //     int choice;

    //     displayHeader(); // Display header with colored title

    //     while (true) {
    //         cout << BOLD << "\nSelect Option for Student Data:\n" << RESET;
    //         cout << GREEN << "1. Add Student\n" << RESET;
    //         cout << BLUE << "2. Display All Students\n" << RESET;
    //         cout << RED << "3. Exit\n" << RESET;
    //         cout << "Enter your choice: ";
    //         cin >> choice;

    //         switch (choice) {
    //             case 1:
    //                 system.addStudent();
    //                 break;
    //             case 2:
    //                 system.displayPeople();
    //                 break;
    //             case 3:
    //                 cout << BOLD << RED << "Exiting the system." << RESET << endl;
    //                 return 0;
    //             default:
    //                 cout << RED << "Invalid choice. Please try again." << RESET << endl;
    //         }
    //     }

    //     return 0;
    // }
    #include <iostream>
    #include <vector>
    #include <iomanip> // For controlling output formatting
    #include <string>

    using namespace std;

    // ANSI escape codes for text colors
    #define RESET   "\033[0m"
    #define RED     "\033[31m"      /* Red */
    #define GREEN   "\033[32m"      /* Green */
    #define YELLOW  "\033[33m"      /* Yellow */
    #define BLUE    "\033[34m"      /* Blue */
    #define MAGENTA "\033[35m"      /* Magenta */
    #define CYAN    "\033[36m"      /* Cyan */
    #define BOLD    "\033[1m"
    #define UNDERLINE "\033[4m"

    // Function to display a header with colors
    void displayHeader() {
        cout << BOLD << CYAN << "=============================" << RESET << endl;
        cout << BOLD << YELLOW << " SYMBIOSIS STUDENT MANAGEMENT SYSTEM " << RESET << endl;
        cout << BOLD << CYAN << "=============================" << RESET << endl << endl;
    }

    // Base class (Person)
    class Person {
    public:
        string name;

        // Constructor for Person
        Person(string name) : name(name) {}

        // Virtual function for displaying details (demonstrates polymorphism)
        virtual void displayDetails() {
            cout << "Name: " << name << endl;
        }

        virtual ~Person() {} // Virtual destructor for polymorphic behavior
    };

    // Derived class (Student) inherits from Person
    class Student : public Person {
    public:
        int prn;
        float marksCO, marksPP, marksDMGT, marksDS, marksSAM;
        float overallPercentage;
        string grade;

        // Constructor to initialize student details, inheriting name from Person
        Student(string name, int prn, float marksCO, float marksPP, float marksDMGT, float marksDS, float marksSAM)
            : Person(name), prn(prn), marksCO(marksCO), marksPP(marksPP), marksDMGT(marksDMGT), marksDS(marksDS), marksSAM(marksSAM) {
            overallPercentage = calculateOverallPercentage();
            grade = assignGrade();
        }

        // Calculate overall percentage
        float calculateOverallPercentage() {
            return (marksCO + marksPP + marksDMGT + marksDS + marksSAM) / 5.0;
        }

        // Assign grade based on overall percentage
        string assignGrade() {
            if (overallPercentage >= 90) return "A";
            else if (overallPercentage >= 80) return "B";
            else if (overallPercentage >= 70) return "C";
            else if (overallPercentage >= 60) return "D";
            else return "F";
        }

        // Overridden function to display student details (polymorphism)
        void displayDetails() override {
            // Display header with colored output
            cout << BOLD << YELLOW << left << setw(15) << "Name" 
                << left << setw(10) << "PRN"
                << left << setw(10) << "CO"
                << left << setw(10) << "PP"
                << left << setw(10) << "DMGT"
                << left << setw(10) << "DS"
                << left << setw(10) << "SAM"
                << left << setw(15) << "Overall(%)"
                << left << setw(10) << "Grade" << RESET << endl;

            // Display student details with different colors
            cout << left << setw(15) << name
                << left << setw(10) << prn
                << left << setw(10) << marksCO
                << left << setw(10) << marksPP
                << left << setw(10) << marksDMGT
                << left << setw(10) << marksDS
                << left << setw(10) << marksSAM
                << GREEN << left << setw(15) << overallPercentage
                << (grade == "F" ? RED : GREEN) << left << setw(10) << grade << RESET << endl;
        }
    };

    // School Management System class
    class SchoolManagementSystem {
    private:
        vector<Person*> people; // Stores both students and other types of people if needed

    public:
        // Add a new student to the system
        void addStudent() {
            string name;
            int prn;
            float marksCO, marksPP, marksDMGT, marksDS, marksSAM;

            cout << "Enter Student Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter Student PRN: ";
            cin >> prn;
            cout << "Enter marks for CO (%): ";
            cin >> marksCO;
            cout << "Enter marks for PP (%): ";
            cin >> marksPP;
            cout << "Enter marks for DMGT (%): ";
            cin >> marksDMGT;
            cout << "Enter marks for DS (%): ";
            cin >> marksDS;
            cout << "Enter marks for SAM (%): ";
            cin >> marksSAM;

            // Create a new Student object and add it to the system
            people.push_back(new Student(name, prn, marksCO, marksPP, marksDMGT, marksDS, marksSAM));

            cout << GREEN << "Student added successfully!" << RESET << endl;
        }

        // Display all people in the system (demonstrates polymorphism)
        void displayPeople() {
            if (people.empty()) {
                cout << RED << "No students available." << RESET << endl;
                return;
            }

            cout << BOLD << "Student Results:" << RESET << endl;
            for (Person* person : people) {
                person->displayDetails(); // Polymorphic call to displayDetails
            }
        }

        // View student result by PRN
        void viewResultByPRN() {
            if (people.empty()) {
                cout << RED << "No students available." << RESET << endl;
                return;
            }

            int prn;
            cout << "Enter the PRN of the student: ";
            cin >> prn;

            bool found = false;
            for (Person* person : people) {
                Student* student = dynamic_cast<Student*>(person);
                if (student && student->prn == prn) {
                    student->displayDetails(); // Display student's result
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << RED << "No student found with PRN " << prn << "." << RESET << endl;
            }
        }

        ~SchoolManagementSystem() {
            // Free memory allocated for people
            for (Person* person : people) {
                delete person;
            }
        }
    };

    int main() {
        SchoolManagementSystem system;
        int choice;

        displayHeader(); // Display header with colored title

        while (true) {
            cout << BOLD << "\nSelect Option for Student Data:\n" << RESET;
            cout << GREEN << "1. Add Student\n" << RESET;
            cout << BLUE << "2. Display All Students\n" << RESET;
            cout << MAGENTA << "3. View Student Result by PRN\n" << RESET;
            cout << RED << "4. Exit\n" << RESET;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    system.addStudent();
                    break;
                case 2:
                    system.displayPeople();
                    break;
                case 3:
                    system.viewResultByPRN();
                    break;
                case 4:
                    cout << BOLD << RED << "Exiting the system." << RESET << endl;
                    return 0;
                default:
                    cout << RED << "Invalid choice. Please try again." << RESET << endl;
            }
        }

        return 0;
    }
