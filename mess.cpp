#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string name;
    int scholar_id;
    string dept;

    void studentDetails()
    {

        cout << "Enter Name : ";
        fflush(stdin);
        getline(cin, name);
        cout << "Enter Scholar ID : ";
        cin >> scholar_id;
        fflush(stdin);
        cout << "Enter department : ";

        fflush(stdin);
        getline(cin, dept);
      
    }
};

class Balance_details
{

public:
    int amountPaid;
    int duration;
    int balanceAmount;

    int credit_update()
    {
        fflush(stdin);
        cout << "Enter Amount Paid : ";
        cin >> amountPaid;
        cout << "Duration of Stay (in months) : ";
        cin >> duration;
        cout << "Average rent per day = Rs. 250" << endl;
        balanceAmount = amountPaid - 120 * duration;
        return balanceAmount;
    }
};

class MMC_details
{
public:
    string prefect,ass_prefect;
    void set_MMC()
    {
        cout<<"Set Prefect:"<<endl;
        fflush(stdin);
        getline(cin,prefect);
        cout<<"Set ass_Prefect"<<endl;
        getline(cin,ass_prefect);
        
    }

    void view_MMC()
    {
        cout << "Prefect:"<<" "+prefect<<endl;
        cout << "Ass. Prefect"
             << ": " << ass_prefect << endl;

    }
};

class Time
{
public:
    string breakfast;
    string lunch;
    string snacks;
    string dinner;
};

class Menu : public Time
{
public:
    Time Sunday;
    Time Monday;
    Time Tuesday;
    Time Wednesday;
    Time Thursday;
    Time Friday;
    Time Saturday;
    void input()
    {
        cout << "Sunday :-" << endl;
        cout << "Enter Food Items For the day: ";
        cin >> Sunday.breakfast >> Sunday.lunch >> Sunday.snacks >> Sunday.dinner;
        cout << "Monday :-" << endl;
        cout << "Enter Food Items For the day: ";
        cin >> Monday.breakfast >> Monday.lunch >> Monday.snacks >> Monday.dinner;
        cout << "Tuesday :-" << endl;
        cout << "Enter Food Items For the day: ";
        cin >> Tuesday.breakfast >> Tuesday.lunch >> Tuesday.snacks >> Tuesday.dinner;
        cout << "Wednesday :-" << endl;
        cout << "Enter Food Items For the day: ";
        cin >> Wednesday.breakfast >> Wednesday.lunch >> Wednesday.snacks >> Wednesday.dinner;
        cout << "Thursday :-" << endl;
        cout << "Enter Food Items For the day: ";
        cin >> Thursday.breakfast >> Thursday.lunch >> Thursday.snacks >> Thursday.dinner;
        cout << "Friday :-" << endl;
        cout << "Enter Food Items For the day: ";
        cin >> Friday.breakfast >> Friday.lunch >> Friday.snacks >> Friday.dinner;
        cout << "Saturday :-" << endl;
        cout << "Enter Food Items For the day: ";
        cin >> Saturday.breakfast >> Saturday.lunch >> Saturday.snacks >> Saturday.dinner;
    }
    void print()
    {
        cout << "Sunday :-" << endl;
        cout << "Food Items For the day : ";
        cout << Sunday.breakfast << "," << Sunday.lunch << "," << Sunday.snacks << "," << Sunday.dinner << endl;
        cout << "Monday :-" << endl;
        cout << "Enter Food Items For the day : ";
        cout << Monday.breakfast << "," << Monday.lunch << "," << Monday.snacks << "," << Monday.dinner << endl;
        cout << "Tuesday :-" << endl;
        cout << "Enter Food Items For the day : ";
        cout << Tuesday.breakfast << "," << Tuesday.lunch << "," << Tuesday.snacks << "," << Tuesday.dinner << endl;
        cout << "Wednesday :-" << endl;
        cout << "Enter Food Items For the day : ";
        cout << Wednesday.breakfast << " ," << Wednesday.lunch << " ," << Wednesday.snacks << " ," << Wednesday.dinner << endl;
        cout << "Thursday :-" << endl;
        cout << "Enter Food Items For the day : ";
        cout << Thursday.breakfast << " ," << Thursday.lunch << " ," << Thursday.snacks << " ," << Thursday.dinner << endl;
        cout << "Friday :-" << endl;
        cout << "Enter Food Items For the day : ";
        cout << Friday.breakfast << " ," << Friday.lunch << " ," << Friday.snacks << " ," << Friday.dinner << endl;
        cout << "Saturday :-" << endl;
        cout << "Enter Food Items For the day : ";
        cout << Saturday.breakfast << " ," << Saturday.lunch << " ," << Saturday.snacks << " ," << Saturday.dinner << endl;
    }
    void change()
    {
        int ok = 1;
        while (ok)
        {
            vector<string> v = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
            int n;
            for (int i = 1; i <= v.size(); i++)
            {
                cout << i << ". " << v[i - 1] << endl;
            }
            cout << "Choose Day :-" << endl;
            cin >> n;
            vector<string> m = {"Breakfast", "Lunch", "Snacks", "Dinner"};
            int p;
            for (int i = 1; i <= m.size(); i++)
            {
                cout << i << ". " << m[i - 1] << endl;
            }
            cout << "Choose Meal :-" << endl;
            cin >> p;
            cout << "Enter food : ";
            string s;
            cin >> s;
            if (n == 1)
            {
                if (p == 1)
                {
                    Sunday.breakfast = s;
                }
                else if (p == 2)
                {
                    Sunday.lunch = s;
                }
                else if (p == 3)
                {
                    Sunday.snacks = s;
                }
                else if (p == 4)
                {
                    Sunday.dinner = s;
                }
                else
                {
                    cout << "Invalid Input !!" << endl;
                }
            }
            else if (n == 2)
            {
                if (p == 1)
                {
                    Monday.breakfast = s;
                }
                else if (p == 2)
                {
                    Monday.lunch = s;
                }
                else if (p == 3)
                {
                    Monday.snacks = s;
                }
                else if (p == 4)
                {
                    Monday.dinner = s;
                }
                else
                {
                    cout << "Invalid Input !!" << endl;
                }
            }
            else if (n == 3)
            {
                if (p == 1)
                {
                    Tuesday.breakfast = s;
                }
                else if (p == 2)
                {
                    Tuesday.lunch = s;
                }
                else if (p == 3)
                {
                    Tuesday.snacks = s;
                }
                else if (p == 4)
                {
                    Tuesday.dinner = s;
                }
                else
                {
                    cout << "Invalid Input !!" << endl;
                }
            }
            else if (n == 4)
            {
                if (p == 1)
                {
                    Wednesday.breakfast = s;
                }
                else if (p == 2)
                {
                    Wednesday.lunch = s;
                }
                else if (p == 3)
                {
                    Wednesday.snacks = s;
                }
                else if (p == 4)
                {
                    Wednesday.dinner = s;
                }
                else
                {
                    cout << "Invalid Input !!" << endl;
                }
            }
            else if (n == 5)
            {
                if (p == 1)
                {
                    Thursday.breakfast = s;
                }
                else if (p == 2)
                {
                    Thursday.lunch = s;
                }
                else if (p == 3)
                {
                    Thursday.snacks = s;
                }
                else if (p == 4)
                {
                    Thursday.dinner = s;
                }
                else
                {
                    cout << "Invalid Input !!" << endl;
                }
            }
            else if (n == 6)
            {
                if (p == 1)
                {
                    Friday.breakfast = s;
                }
                else if (p == 2)
                {
                    Friday.lunch = s;
                }
                else if (p == 3)
                {
                    Friday.snacks = s;
                }
                else if (p == 4)
                {
                    Friday.dinner = s;
                }
                else
                {
                    cout << "Invalid Input !!" << endl;
                }
            }
            else if (n == 7)
            {
                if (p == 1)
                {
                    Saturday.breakfast = s;
                }
                else if (p == 2)
                {
                    Saturday.lunch = s;
                }
                else if (p == 3)
                {
                    Saturday.snacks = s;
                }
                else if (p == 4)
                {
                    Saturday.dinner = s;
                }
                else
                {
                    cout << "Invalid Input !!" << endl;
                }
            }
            else
            {
                cout << "invalid input !!" << endl;
            }
            cout << "Want to change more : Y / N ?" << endl;
            char ch;
            cin >> ch;
            if (ch == 'Y')
            {
                ok = 1;
            }
            else
                ok = 0;
        }
    }
};

class Hostel : public Student, public Balance_details, public MMC_details, public Menu
{
public:
    void choices()
    {
        int ok = 1;
        while (ok)
        {
            int choice;
            cout << "Which operation would like to perform ?" << endl;
            cout << "Press:" << endl;
            cout << "1. For Registration" << endl;
            cout << "2. Menu Operations" << endl;
            cout << "3. View MMC members" << endl;
            cout << "4. To exit" << endl;
            cin >> choice;
            int flag;
            switch (choice)
            {
            case 1:
                studentDetails();
                cout << "Present amount to be refunded : " << credit_update() << endl;
                break;

            case 2:
                flag = 1;
                while (flag)
                {
                    cout << "What mess Operation would you like to perform?" << endl;
                    cout << "a. For set menu" << endl;
                    cout << "b. For view menu" << endl;
                    cout << "c. For change menu" << endl;
                    cout << "d. To exit" << endl;
                    char c;
                    cin >> c;
                    switch (c)
                    {
                    case 'a':
                        input();
                        break;
                    case 'b':
                        print();
                        break;
                    case 'c':
                        change();
                    case 'd':
                        flag = 0;
                    default:
                        cout << "wrong choice" << endl
                             << endl;
                    }
                }
                break;

            case 3:
                set_MMC();
                view_MMC();
            case 4:
                ok = 0;
                break;

            default:
                cout << "Wrong choice" << endl;
                cout << "Enter another choice" << endl
                     << endl;
            }
        }
    }
};

int main()
{
   cout<<"                 _________________                  "<<endl;                
   cout<<"                |                 |                 "<<endl;
   cout<<"                | MESS MANAGEMENT |                 "<<endl;
   cout<<"                |     System      |                 "<<endl;
   cout<<"                |   -Md Yaqoob-   |                 "<<endl;
   cout<<"                |_________________|                 "<<endl; 
   cout<<endl<<endl;
    Hostel BH4;
    BH4.choices();
    return 0;
}