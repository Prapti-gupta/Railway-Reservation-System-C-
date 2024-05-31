#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

struct Passenger {
    string name;
    string gender;
    int age;
    bool foodPreference;
};

bool isLeapYear(int year) {
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year) {
    if (day < 1 || day > 31) return false;
    if (month < 1 || month > 12) return false;
    if (year < 1) return false;
    if (month == 2) {
        return (day <= (isLeapYear(year) ? 29 : 28));
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return (day <= 30);
    } else {
        return true;
    }
}

string generatePNR() {
    time_t now = time(0);
    tm* ltm = localtime(&now);
    srand(time(0));
    int randomNum = rand() % 10000 + 1000; // Generate a random 4-digit number
    char buffer[7];
    strftime(buffer, sizeof(buffer), "%Y%m%d%H%M%S", ltm); // Format current time as YYYYMMDDHHMMSS
    string pnr = buffer + to_string(randomNum);
    return pnr;
}

void bookTicket()
{
    int totalprice;
    cout <<"\n----------------------------------------------------------------------------------------------------------------------------------------";
    cout <<"                                                                     BOOK TICKET:                                                       "<< endl;
    cout <<"-----------------------------------------------------------------------------------------------------------------------------------------"<< endl;
    cout << endl;
        int day, month, year,numPassengers,trainNum;
        string source,destination,ticketClass;
        cout << "Enter the day you want to travel (dd mm yy): ";
        cin >> day >> month >> year;
        if (isValidDate(day, month, year))
        {
            cout << "You are booking a ticket for the date " << day << "/" << month << "/" << year <<endl;

        }
        else
        {
            cout << "Please enter a VALID date! " <<endl;
            cout << "Enter the day you want to travel (dd mm yy): ";
            cin >> day >> month >> year;
            if (isValidDate(day, month, year))
            {
                cout << "You are booking a ticket for the date " << day << "/" << month << "/" << year <<endl;
            }
            else
            {
                cout << "Please enter a VALID date: " << day << "/" << month << "/" << year <<endl;
            }
        }

        cout << "\nEnter the source station: ";
        cin >> source;
        cout << "\nEnter the destination station: ";
        cin >> destination;
        cout << "\nEnter the class of travel (SL/3E/3A/2A): ";
        cin >> ticketClass;
        cout <<"\n-----------------------------------------------------------------------------------------------------------------------------------------"<< endl;
        cout <<"                                                                 SELECT TRAIN "<< endl;
        cout <<"-----------------------------------------------------------------------------------------------------------------------------------------"<< endl;
        cout << endl;
        cout<<"You are looking for a train from "<<source<<" to "<<destination<<" on "<< day << "/" << month << "/" << year<< " in "<<ticketClass<<" for "<<numPassengers<<" people";
        cout<<" \n\n\n       5 Results found for "<<source<<" --> "<<destination<<" | Date: "<<day << "/" << month << "/" << year<< " | QUOTA: "<<ticketClass;

        cout<<"\n\n __________________________________________________________________________________________________________________________________"<<endl;
        cout<<"| ABOUT:                                                                                                                           |"<<endl;
        cout<<"|                                                                                  Runs On: MON TUE WED THU FRI SAT SUN            |"<<endl;
        cout<<"|Train Number: 12951                                                                                                               |"<<endl;
        cout<<"|Train Name: NDLS TEJAS RAJ                                                                                                        |"<<endl;
        cout<<"|From: "<<source<<"                                       Destination Station: "<<destination<<"                                    "<<endl;
        cout<<"|                                                                                                                                  |"<<endl;
        cout<<"|Departure Time: 17:00                                    Arrival Time: 08:32                                                      |"<<endl;
        cout<<"|                                                                                                                                  |"<<endl;
        cout<<"|__________________________________________________________________________________________________________________________________|"<<endl<<endl;

        cout<<" \n\n__________________________________________________________________________________________________________________________________"<<endl;
        cout<<"| ABOUT:                                                                                                                           |"<<endl;
        cout<<"|                                                                                  Runs On: MON WED THU SAT SUN                    |"<<endl;
        cout<<"|Train Number: 22221                                                                                                               |"<<endl;
        cout<<"|Train Name: NZM RAJDHANI                                                                                                          |"<<endl;
        cout<<"|From: "<<source<<"                                       Destination Station: "<<destination<<"                                    "<<endl;
        cout<<"|                                                                                                                                  |"<<endl;
        cout<<"|Departure Time: 16:00                                    Arrival Time: 09:55                                                      |"<<endl;
        cout<<"|                                                                                                                                  |"<<endl;
        cout<<"|__________________________________________________________________________________________________________________________________|"<<endl<<endl;

        cout<<" \n\n__________________________________________________________________________________________________________________________________"<<endl;
        cout<<"| ABOUT:                                                                                                                           |"<<endl;
        cout<<"|                                                                                  Runs On: MON TUE WED THU SAT SUN                |"<<endl;
        cout<<"|Train Number: 12216                                                                                                               |"<<endl;
        cout<<"|Train Name: DEE GARIBRATH                                                                                                         |"<<endl;
        cout<<"|From: "<<source<<"                                      Destination Station: "<<destination<<"                                     "<<endl;
        cout<<"|                                                                                                                                  |"<<endl;
        cout<<"|Departure Time: 12:00                                   Arrival Time: 11:00                                                       |"<<endl;
        cout<<"|                                                                                                                                  |"<<endl;
        cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;

        cout<<" \n\n__________________________________________________________________________________________________________________________________"<<endl;
        cout<<"| ABOUT:                                                                                                                           |"<<endl;
        cout<<"|                                                                                  Runs On: WED THU                                |"<<endl;
        cout<<"|Train Number: 12477                                                                                                               |"<<endl;
        cout<<"|Train Name: JAM SVDK EXP                                                                                                          |"<<endl;
        cout<<"|From: "<<source<<"                                      Destination Station: "<<destination<<"                                     "<<endl;
        cout<<"|                                                                                                                                  |"<<endl;
        cout<<"|Departure Time: 14:25                                   Arrival Time: 03:10                                                       |"<<endl;
        cout<<"|                                                                                                                                  |"<<endl;
        cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;

        cout<<" \n\n__________________________________________________________________________________________________________________________________"<<endl;
        cout<<"| ABOUT:                                                                                                                           |"<<endl;
        cout<<"|                                                                                  Runs On: WED SAT                                |"<<endl;
        cout<<"|Train Number: 18204                                                                                                               |"<<endl;
        cout<<"|Train Name: BETWA EXPRESS                                                                                                         |"<<endl;
        cout<<"|From: "<<source<<"                                      Destination Station: "<<destination<<"                                     "<<endl;
        cout<<"|                                                                                                                                  |"<<endl;
        cout<<"|                                                                                                                                  |"<<endl;
        cout<<"|Departure Time: 17:40                                   Arrival Time: 11:55                                                       |"<<endl;
        cout<<"|                                                                                                                                  |"<<endl;
        cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;

    while(true)
    {
        cout << "\n\nEnter the number of passengers: ";
        cin >> numPassengers;
        int totalprice;
        cout<<"\n\nEnter the train number of your pref Train: ";
        cin>>trainNum;

        switch (trainNum)
        {
            case 12951:
            {
                cout<<"\nYour choice --> NDLS TEJAS RAJ ";
                totalprice=700*numPassengers;
                cout<<" Price= Rs."<<totalprice<<"/- (for "<<numPassengers<<" Passengers)";
                break;
            }

            case 22221:
            {
                cout<<"\nYour choice --> NZM RAJDHANI ";
                totalprice=750*numPassengers;
                cout<<" Price= Rs."<<totalprice<<"/- (for "<<numPassengers<<" Passengers)";
                break;
            }

            case 12216:
            {
                cout << "\nYour choice --> DEE GARIBRATH   ";
                totalprice=900*numPassengers;
                cout<<" Price= Rs."<<totalprice<<"/- (for "<<numPassengers<<" Passengers)";
                break;
            }

            case 12477:
            {
                cout<< "\nYour choice --> JAM SVDK EXP       ";
                totalprice=850*numPassengers;
                cout<<" Price= Rs."<<totalprice<<"/- (for "<<numPassengers<<" Passengers)";
                break;
            }

            case 18204:
            {
                cout<<"\nYour choice --> BETWA EXPRESS           ";
                totalprice=640*numPassengers;
                cout<<" Price= Rs."<<totalprice<<"/- (for "<<numPassengers<<" Passengers)";
                break;
            }

            default:
            cout<<"\nEnter valid Train Number!\n";
        }
        break;
    }

     cout <<"\n-----------------------------------------------------------------------------------------------------------------------------------------"<< endl;
    cout <<"                                                                 PASSENGER DETAILS: "<< endl;
    cout <<"-----------------------------------------------------------------------------------------------------------------------------------------"<< endl;
    string username;

       Passenger passengers[50];
    for (int i = 0; i < numPassengers; ++i)
    {
        cout << "\n\nEnter details for Passenger #" << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> passengers[i].name;
        cout << "Gender: ";
        cin >> passengers[i].gender;
        cout << "Age: ";
        cin >> passengers[i].age;
        char foodChoice;
        cout << "Food Required? (Enter 'Y' for Yes, 'N' for No ): ";
        cin >> foodChoice;

        switch (foodChoice)
        {
            case 'Y':
            case 'y':
                cout<<"You have selected Food Option";
                break;
            case 'N':
            case 'n':
                cout<<"You have not selected Food Option";
                break;
            default:
                cout << "Invalid choice. Assuming No food preference." << endl;
                break;
        }
    }

    ofstream userFile(username + ".txt", ios::app);
    if (userFile.is_open())
    {
        for (int i = 0; i < numPassengers; ++i)
        {
            userFile << passengers[i].name << " " << passengers[i].gender << " " << passengers[i].age << " " << (passengers[i].foodPreference ? "Yes" : "No") << endl;
        }
        userFile.close();
        cout << "\n\nPassenger details saved successfully!" << endl;
    }
    else
    {
        cout << "\n\nUnable to save passenger details. Please try again later." << endl;
    }

    string pnr = generatePNR();

    ofstream ticketFile(pnr + ".txt", ios::app);
    if (ticketFile.is_open()) {
        ticketFile << "PNR Number: " << pnr << endl;
        for (int i = 0; i < numPassengers; ++i) {
            ticketFile << "Passenger #" << i + 1 << " Details:" << endl;
            ticketFile << "Name: " << passengers[i].name << endl;
            ticketFile << "Gender: " << passengers[i].gender << endl;
            ticketFile << "Age: " << passengers[i].age << endl;
            ticketFile << "Food Preference: " << (passengers[i].foodPreference ? "Yes" : "No") << endl;
        }
        ticketFile.close();
        cout<<"Your PNR number is: "<<pnr;
        cout << "\nTicket printed successfully!" << endl;
        cout<<" \n\n__________________________________________________________________________________________________________________________________"<<endl;
        cout<<"| ABOUT:                                                                                                                           |"<<endl;
        cout<<"|                                                                                                                                  |"<<endl;
        cout<<"|Date:"<<day<<"/"<<month<<"/"<<year<<"                                   Number of passengers ="<<numPassengers<<"                    |"<<endl;
        cout<<"|PNR Number:"<<pnr<<"                                                                                                                  |"<<endl;
        cout<<"|From: "<<source<<"                                      Destination Station: "<<destination<<"                                     "<<endl;
        cout<<"|                                                                                                                                  |"<<endl;
        cout<<"|                                                                                                                                  |"<<endl;
        cout<<"|Departure Time: 17:40                                   Arrival Time: 11:55                                                       |"<<endl;
        cout<<"|Total Price= "<<totalprice<<"                                                                                                                                 |"<<endl;
        cout<<"|__________________________________________________________________________________________________________________________________|"<<endl;


    } else {
        cout << "\nUnable to print ticket. Please try again later." << endl;
    }
}

void cancelTicket() {
    string pnr;
    cout << "\nEnter your PNR number: ";
    cin >> pnr;
    if (remove((pnr + ".txt").c_str()) == 0) {
        cout << "\nTicket with PNR Number " << pnr << " has been canceled successfully!" << endl;
    } else {
        cout << "\nTicket with PNR Number " << pnr << " does not exist!" << endl;
    }
}

int main()
    {
        int totalprice;
  cout << endl;
  cout << endl;
  cout <<"                                       ____________________________________________________________"<< endl;
  cout <<"                                      |                                                            |"<< endl;
  cout <<"                                      |                                                            |"<< endl;
  cout <<"                                      |                RAILWAY RESERVATION SYSTEM                  |"<< endl;
  cout <<"                                      |                                                            |"<< endl;
  cout <<"                                      |                                                            |"<< endl;
  cout <<"                                      |                                       BY:-                 |"<< endl;
  cout <<"                                      |                                       PRAPTI GUPTA         |"<< endl;
  cout <<"                                      |                                                            |"<< endl;
  cout <<"                                      |____________________________________________________________|"<< endl;
  cout << endl<<endl;

  int choice;
  cout <<"-----------------------------------------------------------------------------------------------------------------------------------------"<< endl;
  cout <<"                                                                 Main Menu: "<< endl;
  cout <<"-----------------------------------------------------------------------------------------------------------------------------------------"<< endl;
  cout << endl;
  cout << "                                       1. Register" << endl;
  cout << "                                       2. Login" << endl;
  cout << "                                       3. Exit" << endl;
  cout << endl;
  cout << "                                       Your choice: ";
  cin >> choice;

  if (choice == 1)
    {
      string username, password;
      cout << endl;
      cout << "                                   Registration: " << endl;
      cout << endl;
      cout << "                                   Select a username: ";
      cin >> username;
      cout << "                                   Select a password: ";
      cin >> password;
      ifstream file (username + ".txt");	// ifstream opens a file

      if (file.is_open ())
      {
          cout << endl;
          cout << "                                   User already exists!" <<endl;
          main ();
          return 0;
      }

      else
      {
          ofstream file;	// ofstream creates a file
          file.open (username + ".txt");
          file << username << endl << password;
          file.close ();
          cout << endl;
          cout << "                                   Welcome " << username <<"!" << endl;

      }
    }
    else if (choice == 2)
    {
      string username, password;
      cout << endl;
      cout << "                                   Login: " << endl;
      cout << endl;
      cout << "                                   Enter your username: ";
      cin >> username;
      cout << "                                   Enter your password: ";
      cin >> password;
      ifstream file (username + ".txt");	// ifstream opens a file
      if (file.is_open ())
      {
          string storedUsername, storedPassword;
          file >> storedUsername >> storedPassword;
          if (username == storedUsername && password == storedPassword)
          {
              cout << "                                   Login successful!"<< endl;

          }
          else
          {
              cout << "                                   Invalid login!" <<endl;
              main ();
              return 0;

          }

      }
      else
      {
          cout << endl;
          cout << "                                   User does not exist!" <<endl;
          main ();
          return 0;

      }
    }

  else if (choice == 3)
    {
      return 0;
    }

task:
  cout << "\n";
  cout <<"-----------------------------------------------------------------------------------------------------------------------------------------"<< endl;
  cout <<"                                                          SELECT YOUR CHOICE: "<< endl;
  cout <<"-----------------------------------------------------------------------------------------------------------------------------------------"<< endl;
  int option;
  cout << "\n\n";
  cout << "1. Book ticket" << endl;
  cout << "2. Cancel ticket" << endl;
  cout << "3. Exit" << endl;
  cout << "\nEnter your choice: ";
  cin >> option;
  string task;


    switch (option) {
        case 1:
            bookTicket();
            break;
        case 2:
            cancelTicket();
            break;
        case 3:
            cout << "Thank You For Visiting!";
            break;
        default:
            cout << "Invalid choice!";
    }

    return 0;
}
