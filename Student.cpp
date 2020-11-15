#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	string name;
	int age;
	string gen;
public:
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
	int getAge() {
		return age;
	}
	void setAge(int age) {
		this->age = age;
	}
	string getGen() {
		return gen;
	}
	void setGen(string gen) {
		this->gen = gen;
	}
};

class Student :public Person
{
private:
	float math, english, physical;
	float medium;
public:
	float getMath() {
		return math;
	}
	void setMath(float math) {
		this->math = math;
	}
	float getEnglish() {
		return english;
	}
	void setEnglish(float english) {
		this->english = english;
	}
	float getPhysical() {
		return physical;
	}
	void setPhysical(float physical) {
		this->physical = physical;
	}
	double getMedium() {
		return (math+english+physical)/3;
	}
	void setMedium(float medium) {
		this->medium = medium;
	}
	string rank(){
		float result = getMedium();
		if (result < 2) {
			return "Kem";
		}
		if (result < 5) {
			return "Yeu";
		}
		if (result < 6.5) {
			return "Trung Binh";
		}
		if (result < 8) {
			return "Kha";
		}
		if (result < 9.5) {
			return "Gioi";
		}
	}
};

int main()
{
	Student h;
	h.setName("Vu Ly Hoang");
	h.setAge(24);
	h.setGen("Nam");
	h.setMath(9);
	h.setEnglish(8.8);
	h.setPhysical(8.5);
	cout << "Name : " << "-------" << h.getName() << "-------" << endl;
	cout << "Age : " << "-------" << h.getAge() << "-------" << endl;
	cout << "Gen : " << "-------" << h.getGen() << "-------" << endl;
	cout << "Score Math : " << "-------" << h.getMath() << "-------" << endl;
	cout << "Score English : " << "-------" << h.getEnglish() << "-------" << endl;
	cout << "Score Physical : " << "-------" << h.getPhysical() << "-------" << endl;
	cout << "Medium : " << "-------" << h.getMedium() << "-------" << endl;
	cout << "Rank : " << "-------" << h.rank() << "-------" << endl;
	return 0;
}