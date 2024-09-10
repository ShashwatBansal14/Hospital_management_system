// HOSPITAL MANGMENT SYSTEM BY SHASHWAT BANSAL//
#include <iostream> // INPUT OUTPUT LIBRARY
#include <fstream>	// FOR FILE HANDLING
#include <conio.h>	// FOR CONSOLE(changing color,clear screen)
#include <stdlib.h> // FOR MEMORY ALLOCATION(Malloc,free)
#include <cstdlib>	// CORE SET OF FUNCTIONS USED FOR CONVERSION
using namespace std;

class hospital
{
private:
	int pid, pno, page, preg, nreg, dreg, uid, eage, esalary, eno, nuid, duid, idate, iquan, iprice;
	string pname, pgender, padd, pbg, fname, sname, ename, efname, ebg, egender, eadd, edesg, sename, iname, nname, ditem;

public:
	void menu();
	void admin();
	void patient();
	void staff();
	void inventory();
	void pdata();
	void sdata();
	void idata();
	void plist();
	void slist();
	void ilist();
	void mpatient();
	void mstaff();
	void minventory();
	void spatient();
	void sstaff();
	void sinventory();
	void dpatient();
	void dstaff();
	void dinventory();
};

void hospital::menu() // FUNCTION FOR MAIN MENU
{
menustart:			// GOTO LABEL
	int choice;
	string email, pass;
	system("cls");
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t HOSPITAL MAIN MENU ";
	cout << "\n";
	cout << "\n";
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER YOUR CHOICE: ";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 1.ADMINSTRATOR\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 2.PATIENT\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 3.STAFF\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 4.INVENTORY\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 5.EXIT\n ";
	cout << "\n";
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> choice;
	switch (choice)
	{
	case 1:
		system("cls");
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
		cout << "\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER ADMIN ID:\n ";
		cout << "\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
		cin >> email;
		cout << "\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER ADMIN PASSWORD:\n ";
		cout << "\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
		cin >> pass;
		cout << "\n";
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		if (email == "admin@123" && pass == "admin123") // ADMIN LOGIN
		{
			admin();
		}
		else
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\tINVALID ID OR PASSWORD ";
		}

		break;
	case 2:
		patient();
		break;
	case 3:
		staff();
		break;
	case 4:
		inventory();
		break;
	case 5:
		cout << "\t\t\t\t\t\t\t\t\t\t\t PROGRAM EXITED";
		exit(0);
		break;
	default:
		cout << "\t\t\t\t\t\t\t\t\t\t\tINVALID CHOICE";
	}
	getch();
	goto menustart;
}

void hospital::admin() // ADMIN LIST
{
	int choice;
	system("cls");
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER YOUR CHOICE: ";
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 1.LIST OF PATIENTS\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 2.LIST OF STAFFS\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 3.LIST OF ITEMS IN INVENTORY\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 4.MAIN MENU\n ";
	cout << "\n";
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> choice;
	switch (choice)
	{
	case 1:
		plist(); // PATIENT LIST
		break;

	case 2:
		slist(); // STAFF LIST
		break;
	case 3:
		ilist(); // INVENTORY LIST
		break;
	case 4:
		menu();
		break;
	default:
		cout << "\t\t\t\t\t\t\t\t\t\t\tINVALID CHOICE";
		menu();
	}
}

void hospital::patient() // PATIENT ALL FUNCTIONS
{
	int choice;
	char x;
	system("cls");
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER YOUR CHOICE: ";
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 1.ENTER NEW ENTRY\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 2.MODIFY EXISTING\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 3.SEARCH AN ENTRY\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 4.DELETE AN ENTRY\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 5.MAIN MENU\n ";
	cout << "\n";
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> choice;
	switch (choice)
	{
	case 1:
		do
		{
			pdata();
			cout << "\t\t\t\t\t\t\t\t\t\t\tADD ANOTHER PATIENT RECORD (Y, N) :";
			cin >> x;
		} while (x == 'y' || x == 'Y');
		break;

	case 2:
		mpatient();
		break;

	case 3:
		spatient();
		break;

	case 4:
		dpatient();
		break;

	case 5:
		system("cls");
		menu();
		break;

	default:
		cout << "\t\t\t\t\t\t\t\t\t\t\tINVALID CHOICE";
		menu();
	}
}

void hospital::staff() // STAFF ALL FUNCTIONS
{
	int choice;
	char x;
	system("cls");
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER YOUR CHOICE: ";
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 1.ENTER NEW ENTRY\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 2.MODIFY EXISTING ENTRY\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 3.SEARCH AN ENTRY\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 4.DELETE AN ENTRY\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 5.MAIN MENU\n ";
	cout << "\n";
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> choice;
	switch (choice)
	{
	case 1:
		do
		{
			sdata();
			cout << "\t\t\t\t\t\t\t\t\t\t\tADD ANOTHER STAFF RECORD (Y, N) :";
			cin >> x;
		} while (x == 'y' || x == 'Y');
		break;

	case 2:
		mstaff();
		break;

	case 3:
		sstaff();
		break;

	case 4:
		dstaff();
		break;

	case 5:
		system("cls");
		menu();
		break;

	default:
		cout << "\t\t\t\t\t\t\t\t\t\t\tINVALID CHOICE";
		menu();
	}
}

void hospital::inventory() // INVENTORY ALL FUNCTIONS
{

	int choice;
	char x;
	system("cls");
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER YOUR CHOICE: ";
	cout << "\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 1.ADD NEW ENTRY FOR ITEM\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 2.MODIFY EXISTING\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 3.SEARCH AN ITEM\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 4.DELETE AN ITEM\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t 5.MAIN MENU\n ";
	cout << "\n";
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> choice;
	switch (choice)
	{
	case 1:
		do
		{
			idata();
			cout << "\t\t\t\t\t\t\t\t\t\t\tADD ANOTHER INVENTORY RECORD (Y, N) :";
			cin >> x;
		} while (x == 'y' || x == 'Y');
		break;

	case 2:
		minventory();
		break;

	case 3:
		sinventory();
		break;

	case 4:
		dinventory();
		break;

	case 5:
		system("cls");
		menu();
		break;

	default:
		cout << "\t\t\t\t\t\t\t\t\t\t\tINVALID CHOICE";
		menu();
	}
}

void hospital::pdata() // PATIENT DATA
{
	system("cls");
	fstream file;
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER REGESTRATION NUMBER:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> preg;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER PATIENT NAME:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> pname;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER NAME OF GUARDIAN:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> fname;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER GENDER OF PATIENT:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> pgender;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER BLOOD GROUP:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> pbg;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER AGE:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> page;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER ADDRESS:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> padd;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER CONTACT NO:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> pno;
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	file.open("patient.txt", ios::app | ios::out);
	file << " " << preg << " " << pname << " " << fname << " " << pgender << " " << pbg << " " << page << " " << padd << " " << pno << "\n";
	file.close();
}

void hospital::sdata() // STAFF DATA
{
	system("cls");
	fstream file;
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER THE UID OF THE EMPLOYEE:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> uid;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER EMPLOYEE NAME:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> ename;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER NAME OF GUARDIAN:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> efname;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER GENDER OF EMPLOYEE:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> egender;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER BLOOD GROUP:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> ebg;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER AGE:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> eage;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER SALARY:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> esalary;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER ADDRESS:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> eadd;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER CONTACT NO:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> eno;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER DESIGNATION:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> edesg;
	cout << "\n";
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	file.open("staff.txt", ios::app | ios::out);
	file << " " << uid << " " << ename << " " << efname << " " << egender << " " << ebg << " " << eage << " " << esalary << " " << eadd << " " << eno << " " << edesg << "\n";
	file.close();
}

void hospital::idata() // INVENTORY DATA
{
	system("cls");
	fstream file;
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER NAME OF ITEM\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> iname;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER DATE OF PURCHASE:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> idate;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER QUANTITY OF ITEM:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> iquan;
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER PRICE OF ITEM:\n ";
	cout << "\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
	cin >> iprice;
	cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	file.open("inventory.txt", ios::app | ios::out);
	file << " " << iname << " " << idate << " " << iquan << " " << iprice << "\n";
	file.close();
}

void hospital::plist() // PATIENT LIST
{
	fstream file;
	int count = 1;
	file.open("patient.txt", ios::in);
	if (!file)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t NO DATA PRESENT\n ";
		file.close();
	}
	else
	{
		file >> preg >> pname >> fname >> pgender >> pbg >> page >> padd >> pno;
		while (!file.eof())
		{
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t PATIENT  NO: " << count++ << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t PATIENT REG NO: " << preg << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t PATIENT NAME: " << pname << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t PATIENT GUARDIAN NAME: " << fname << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t PATIENT GENDER: " << pgender << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t PATIENT BLODD GROUP: " << pbg << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t PATIENT AGE: " << page << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t PATIENT ADDRESS: " << padd << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t PATIENT CONTACT NO: " << pno << endl;
			file >> preg >> pname >> fname >> pgender >> pbg >> page >> padd >> pno;
		}
		if (count == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t NO DATA PRESENT\n ";
		}
	}
	file.close();
}

void hospital::slist() // STAFF LIST
{
	fstream file;
	int count = 1;
	file.open("staff.txt", ios::in);
	if (!file)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t NO DATA PRESENT\n ";
		file.close();
	}
	else
	{
		file >> uid >> ename >> efname >> egender >> ebg >> eage >> esalary >> eadd >> eno >> edesg;
		while (!file.eof())
		{
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t STAFF  NO: " << count++ << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF REG NO: " << uid << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF NAME: " << ename << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF GUARDIAN NAME: " << efname << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF GENDER: " << egender << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF BLODD GROUP: " << ebg << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF AGE: " << eage << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF SALARY: " << esalary << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF ADDRESS: " << eadd << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF CONTACT NO: " << eno << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF DESIGNATION: " << edesg << endl;
			file >> uid >> ename >> efname >> egender >> ebg >> eage >> esalary >> eadd >> eno >> edesg;
		}
		if (count == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t NO DATA PRESENT\n ";
		}
	}
	file.close();
}

void hospital::ilist() // ITEM LIST
{
	fstream file;
	int count = 1;
	file.open("inventory.txt", ios::in);
	if (!file)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t NO DATA PRESENT\n ";
		file.close();
	}
	else
	{
		file >> iname >> idate >> iquan >> iprice;
		while (!file.eof())
		{
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t ITEM  NO: " << count++ << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t ITEM  NAME: " << iname << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t ITEM PURCHASE DATE : " << idate << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t ITEM QUANTITY: " << iquan << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t ITEM PRICE: " << iprice << endl;
			file >> iname >> idate >> iquan >> iprice;
		}
		if (count == 1)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t NO DATA PRESENT\n ";
		}
	}
	file.close();
}

void hospital::mpatient() // MODIFY PATIENT
{
	system("cls");
	fstream file, file1;
	int found = 0;
	file.open("patient.txt", ios::in);
	if (!file)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t NO DATA PRESENT\n ";
		file.close();
	}
	else
	{
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER REGESTRAION NUMBER YOU WANT TO MODIFY:\n ";
		cout << "\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
		cin >> nreg;
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		file1.open("modifypatient.txt", ios::app | ios::out);
		file >> preg >> pname >> fname >> pgender >> pbg >> page >> padd >> pno;
		while (!file.eof())
		{
			if (preg != nreg)
			{
				file1 << " " << preg << " " << pname << " " << fname << " " << pgender << " " << pbg << " " << page << " " << padd << " " << pno << "\n";
			}
			else
			{
				cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER REGESTRATION NUMBER:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> preg;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER PATIENT NAME:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> pname;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER NAME OF GUARDIAN:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> fname;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER GENDER OF PATIENT:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> pgender;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER BLOOD GROUP:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> pbg;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER AGE:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> page;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER ADDRESS:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> padd;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER CONTACT NO:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> pno;
				cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				file1 << " " << preg << " " << pname << " " << fname << " " << pgender << " " << pbg << " " << page << " " << padd << " " << pno << "\n";
				found++;
			}
			file >> preg >> pname >> fname >> pgender >> pbg >> page >> padd >> pno;
		}
		if (found == 0)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t REGESTRATION NUMBER NOT FOUND\n ";
		}
		file1.close();
		file.close();
		remove("patient.txt");
		rename("modifypatient.txt", "patient.txt");
	}
}

void hospital::mstaff() // MODIFY STAFF
{
	system("cls");
	fstream file, file1;
	int found = 0;
	file.open("staff.txt", ios::in);
	if (!file)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t NO DATA PRESENT\n ";
		file.close();
	}
	else
	{
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER  UID YOU WANT TO MODIFY :\n ";
		cout << "\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
		cin >> nuid;
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		file1.open("modifystaff.txt", ios::app | ios::out);
		file >> uid >> ename >> efname >> egender >> ebg >> eage >> esalary >> eadd >> eno >> edesg;
		while (!file.eof())
		{
			if (uid != nuid)
			{
				file1 << " " << uid << " " << ename << " " << efname << " " << egender << " " << ebg << " " << eage << " " << esalary << " " << eadd << " " << eno << " " << edesg << "\n";
			}
			else
			{
				cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER THE UID OF THE EMPLOYEE:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> uid;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER EMPLOYEE NAME:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> ename;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER NAME OF GUARDIAN:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> efname;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER GENDER OF EMPLOYEE:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> egender;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER BLOOD GROUP:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> ebg;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER AGE:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> eage;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER SALARY:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> esalary;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER ADDRESS:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> eadd;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER CONTACT NO:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> eno;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER DESIGNATION:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> edesg;
				cout << "\n";
				cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				file1 << " " << uid << " " << ename << " " << efname << " " << egender << " " << ebg << " " << eage << " " << esalary << " " << eadd << " " << eno << " " << edesg << "\n";
				found++;
			}
			file >> uid >> ename >> efname >> egender >> ebg >> eage >> esalary >> eadd >> eno >> edesg;
		}
		if (found == 0)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t REGESTRATION NUMBER NOT FOUND\n ";
		}
		file1.close();
		file.close();
		remove("staff.txt");
		rename("modifystaff.txt", "staff.txt");
	}
}

void hospital::minventory() // MODIFY INVENTORY
{
	system("cls");
	fstream file, file1;
	int found = 0;
	file.open("inventory.txt", ios::in);
	if (!file)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t NO DATA PRESENT\n ";
		file.close();
	}
	else
	{
		system("cls");
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER NAME YOU WANT TO MODIFY:\n ";
		cout << "\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
		cin >> nname;
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		file1.open("modifyinventory.txt", ios::app | ios::out);
		file >> iname >> idate >> iquan >> iprice;
		while (!file.eof())
		{
			if (iname != nname)
			{
				file1 << " " << iname << " " << idate << " " << iquan << " " << iprice << "\n";
			}
			else
			{
				cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER NAME OF ITEM\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> iname;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER DATE OF PURCHASE:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> idate;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER QUANTITY OF ITEM:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> iquan;
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER PRICE OF ITEM:\n ";
				cout << "\n";
				cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
				cin >> iprice;
				cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
				file1 << " " << iname << " " << idate << " " << iquan << " " << iprice << "\n";
				found++;
			}
			file >> iname >> idate >> iquan >> iprice;
		}
		if (found == 0)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t ITEM NOT FOUND\n ";
		}
		file1.close();
		file.close();
		remove("inventory.txt");
		rename("modifyinventory.txt", "inventory.txt");
	}
}
void hospital::spatient() // SEARCH PATIENT
{
	system("cls");
	fstream file;
	int found = 0;
	file.open("patient.txt", ios::in);
	if (!file)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t NO DATA PRESENT\n ";
	}
	else
	{
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER NAME TO SEARCH:\n ";
		cout << "\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
		cin >> sname;
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		file >> preg >> pname >> fname >> pgender >> pbg >> page >> padd >> pno;
		while (!file.eof())
		{
			if (sname == pname)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t PATIENT REG NO: " << preg << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t PATIENT NAME: " << pname << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t PATIENT GUARDIAN NAME: " << fname << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t PATIENT GENDER: " << pgender << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t PATIENT BLODD GROUP: " << pbg << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t PATIENT AGE: " << page << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t PATIENT ADDRESS: " << padd << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t PATIENT CONTACT NO: " << pno << endl;
				found++;
			}
			file >> preg >> pname >> fname >> pgender >> pbg >> page >> padd >> pno;
		}
		if (found == 0)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t PATIENT NAME NOT FOUND\n ";
		}
		file.close();
	}
}

void hospital::sstaff() // SEARCH PATIENT
{
	system("cls");
	fstream file;
	int found = 0;
	file.open("staff.txt", ios::in);
	if (!file)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t NO DATA PRESENT\n ";
	}
	else
	{
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER NAME TO SEARCH:\n ";
		cout << "\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
		cin >> sename;
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		file >> uid >> ename >> efname >> egender >> ebg >> eage >> esalary >> eadd >> eno >> edesg;
		while (!file.eof())
		{
			if (sename == ename)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF REG NO: " << uid << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF NAME: " << ename << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF GUARDIAN NAME: " << efname << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF GENDER: " << egender << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF BLODD GROUP: " << ebg << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF AGE: " << eage << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF SALARY: " << esalary << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF ADDRESS: " << eadd << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF CONTACT NO: " << eno << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF DESIGNATION: " << edesg << endl;
				found++;
			}
			file >> uid >> ename >> efname >> egender >> ebg >> eage >> esalary >> eadd >> eno >> edesg;
		}
		if (found == 0)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t STAFF NAME NOT FOUND\n ";
		}
		file.close();
	}
}

void hospital::sinventory() // MODIFY INVENTORY
{
	system("cls");
	fstream file;
	int found = 0;
	file.open("inventory.txt", ios::in);
	if (!file)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t NO DATA PRESENT\n ";
	}
	else
	{
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER NAME TO SEARCH:\n ";
		cout << "\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
		cin >> sname;
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		file >> iname >> idate >> iquan >> iprice;
		while (!file.eof())
		{
			if (sname == iname)
			{
				cout << "\t\t\t\t\t\t\t\t\t\t\t ITEM  NAME: " << iname << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t ITEM PURCHASE DATE : " << idate << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t ITEM QUANTITY: " << iquan << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t\t ITEM PRICE: " << iprice << endl;
				found++;
			}
			file >> iname >> idate >> iquan >> iprice;
		}
		if (found == 0)
		{
			cout << "\t\t\t\t\t\t\t\t\t\t\t INVENTORY ITEM NOT FOUND\n ";
		}
		file.close();
	}
}

void hospital::dpatient() // DELETE PATIENT
{
	system("cls");
	fstream file, file1;
	int found = 0;
	file.open("patient.txt", ios::in);
	if (!file)
	{
		cout << "\n\t\t\tNo Data is Present..";
		file.close();
	}
	else
	{
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER  REGESTRAION NUMBER TO BE DELETED:\n ";
		cout << "\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
		cin >> dreg;
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		file1.open("modifypatient.txt", ios::app | ios::out);
		file >> preg >> pname >> fname >> pgender >> pbg >> page >> padd >> pno;
		while (!file.eof())
		{
			if (dreg != preg)
			{
				file1 << " " << preg << " " << pname << " " << fname << " " << pgender << " " << pbg << " " << page << " " << padd << " " << pno << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tSuccessfully Delete Data";
			}
			file >> preg >> pname >> fname >> pgender >> pbg >> page >> padd >> pno;
		}
		if (found == 0)
		{
			cout << "\n\t\t\t Regestration No. Not Found....";
		}
		file1.close();
		file.close();
		remove("patient.txt");
		rename("modifypatient.txt", "patient.txt");
	}
}

void hospital::dstaff() // DELETE STAFF
{
	system("cls");
	fstream file, file1;
	int found = 0;
	file.open("staff.txt", ios::in);
	if (!file)
	{
		cout << "\n\t\t\tNo Data is Present..";
		file.close();
	}
	else
	{
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER  UID TO BE DELETED:\n ";
		cout << "\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
		cin >> duid;
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		file1.open("modifystaff.txt", ios::app | ios::out);
		file >> uid >> ename >> efname >> egender >> ebg >> eage >> esalary >> eadd >> eno >> edesg;
		while (!file.eof())
		{
			if (duid != uid)
			{
				file1 << " " << uid << " " << ename << " " << efname << " " << egender << " " << ebg << " " << eage << " " << esalary << " " << eadd << " " << eno << " " << edesg << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tSuccessfully Delete Data";
			}
			file >> uid >> ename >> efname >> egender >> ebg >> eage >> esalary >> eadd >> eno >> edesg;
		}
		if (found == 0)
		{
			cout << "\n\t\t\t UID Not Found....";
		}
		file1.close();
		file.close();
		remove("staff.txt");
		rename("modifystaff.txt", "staff.txt");
	}
}

void hospital::dinventory() // DELETE INVENTORY
{
	system("cls");
	fstream file, file1;
	int found = 0;
	file.open("inventory.txt", ios::in);
	if (!file)
	{
		cout << "\n\t\t\tNo Data is Present..";
		file.close();
	}
	else
	{
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ENTER  NAME OF ITEM TO BE DELETED:\n ";
		cout << "\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t ->";
		cin >> ditem;
		cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		file1.open("modifyinventory.txt", ios::app | ios::out);
		file >> iname >> idate >> iquan >> iprice;
		while (!file.eof())
		{
			if (ditem != iname)
			{
				file1 << " " << iname << " " << idate << " " << iquan << " " << iprice << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tSuccessfully Delete Data";
			}
			file >> iname >> idate >> iquan >> iprice;
		}
		if (found == 0)
		{
			cout << "\n\t\t\t Inventory Item Not Found....";
		}
		file1.close();
		file.close();
		remove("inventory.txt");
		rename("modifyinventory.txt", "inventory.txt");
	}
}
int main()
{
	hospital a; // OBJECT CREATION
	a.menu();	// CALLED
}