/*
1.  Create a class Student which will contain
    student information. Using the inheritance mechanism,
    implement the class Aspirant (graduate student -
    student preparing for a PhD
    work) derived from Student.
*/

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Student
//{
//protected:
//    string name;
//    string surname;
//    string birthday;
//    string bilet_date;
//    string faculty;
//    string type_of_work;
//};
//
//class Aspirant : protected Student
//{
//public:
//    void set_name(string name_arg)
//    {
//        name = name_arg;
//    }
//
//    void set_surname(string surname_arg)
//    {
//        surname = surname_arg;
//    }
//
//    void set_birthday(string birthday_arg)
//    {
//        birthday = birthday_arg;
//    }
//
//    void set_bilet_date(string bilet_date_arg)
//    {
//        bilet_date = bilet_date_arg;
//    }
//
//    void set_faculty(string faculty_arg)
//    {
//        faculty = faculty_arg;
//    }
//
//    void set_type_of_work(string type_of_work_arg)
//    {
//        type_of_work = type_of_work_arg;
//    }
//
//    void show_info()
//    {
//        cout << "Bilet Information:" << endl;
//        cout << "Name: " << name << endl;
//        cout << "Surname: " << surname << endl;
//        cout << "Birthday: " << birthday << endl;
//        cout << "Bilet's Date: " << bilet_date << endl;
//        cout << "Faculty: " << faculty << endl;
//        cout << "Type of Work: " << type_of_work << endl;
//    }
//};
//
//int main()
//{
//    Aspirant Person;
//
//    Person.set_name("Orxan");
//    Person.set_surname("Axmedov");
//    Person.set_birthday("01/02/2000");
//    Person.set_bilet_date("05/01/2019");
//    Person.set_faculty("Computer Since");
//    Person.set_type_of_work("CS in Real Life");
//
//    Person.show_info();
//
//    return 0;
//}

/*
2.  Create a class Passport (passport), which will
    contain passport information about a citizen
    Ukraine. Using the inheritance mechanism, implement the class
    ForeignPassport (foreign passport) derived from Passport.
    Recall that the passport
    contains, in addition to passport data, also data
    about visas, passport number.
*/

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Passport
//{
//protected:
//	string name;
//	string surname;
//	string father_name;
//	string birthday;
//	string fin;
//	string ser;
//	string male_or_female;
//	string id;
//};
//
//class foreignPassport : protected Passport
//{
//public:
//	void set_name(string name_arg)
//	{
//		name = name_arg;
//	}
//
//	void set_surname(string surname_arg)
//	{
//		surname = surname_arg;
//	}
//
//	void set_father_name(string father_name_arg)
//	{
//		father_name = father_name_arg;
//	}
//
//	void set_birthday(string birthday_arg)
//	{
//		birthday = birthday_arg;
//	}
//
//	void set_fin(string fin_arg)
//	{
//		fin = fin_arg;
//	}
//
//	void set_ser(string ser_arg)
//	{
//		ser = ser_arg;
//	}
//
//	void set_male_or_female(string male_or_female_arg)
//	{
//		male_or_female = male_or_female_arg;
//	}
//
//	void set_id(string id_arg)
//	{
//		id = id_arg;
//	}
//
//	void set_number(int number_arg)
//	{
//		number = number_arg;
//	}
//
//	void add_viza(string val)
//	 {
//		 string* Arr = new string[size + 1];
//		 for (int i = 0; i < size; i++)
//		 {
//			 Arr[i] = viza_arr[i];
//		 }
//		 Arr[size] = val;
//		 size++;
//		 delete[] viza_arr;
//		 viza_arr = Arr;
//	 }
//
//	void show_info()
//	{
//		cout << "Passport INFO: " << endl;
//		cout << "Name: " << name << endl;
//		cout << "Surname: " << surname << endl;
//		cout << "Father Name: " << father_name << endl;
//		cout << "Birthday: " << birthday << endl;
//		cout << "FIN: " << fin << endl;
//		cout << "Seriya: " << ser << endl;
//		cout << "Male / Female: " << male_or_female << endl;
//		cout << "ID: " << id << endl;
//		cout << "Number: " << number << endl;
//		cout << "Vizas:" << endl;
//
//		for (int i = 0; i < size; i++)
//		{
//			cout << "Country: " << viza_arr[i] << endl;
//		}
//	}
//
//private:
//	int size = 0;
//	string* viza_arr = new string[size];
//	int number;
//};
//
//int main()
//{
//	foreignPassport p;
//
//	p.set_name("Orxan");
//	p.set_surname("Ahmadov");
//	p.set_father_name("Muslim");
//	p.set_birthday("10/01/2000");
//	p.set_fin("123T6H7");
//	p.set_ser("AZE");
//	p.set_male_or_female("Male");
//	p.set_id("10920148");
//	p.set_number(10238920);
//
//	p.add_viza("America");
//	p.add_viza("Turkey");
//	p.add_viza("Azerbaijan");
//
//	p.show_info();
//
//	return 0;
//}