//1. Лампа 

#include <iostream>
using namespace std;

class Lamp {
public:
	unsigned int ManufacturingDay = 1;
	unsigned int ManufacturingMonth = 1;
	int ManufacturingYear = 2024;
	double power;        
	double voltage;     
	double width;
	void SetDay(unsigned int d) {
		if (d >= 1 && d <= 31) ManufacturingDay = d;
		else throw "Вы передали неверное значение в параметре. Должно быть число от 1 до 31 включительно.\n";
	}
	unsigned int GetDay() const {
		return ManufacturingDay;
	}

	void SetMonth(unsigned int m) {
		if (m >= 1 && m <= 12) ManufacturingMonth = m;
		else throw "Вы передали неверное значение в параметре. Должно быть число от 1 до 12 включительно.\n";
	}
	unsigned int GetMonth() const {
		return ManufacturingMonth;
	}

	void SetYear(int y) {
		ManufacturingYear = y;
	}
	int GetYear() const {
		return ManufacturingYear;
	}

	void SetPower(double p) {
		if (p >= 1 && p <= 200) power = p;
		else throw "Вы передали неверное значение в параметре. Мощность должна быть от 1 до 200 ватт.\n";
	}
	double GetPower() const {
		return power;
	}

	void SetVoltage(double v) {
		if (v >= 110 && v <= 240) voltage = v;
		else throw "Вы передали неверное значение в параметре. Напряжение должно быть от 110 до 240 вольт.\n";
	}
	double GetVoltage() const {
		return voltage;
	}

	void SetWidth(double w) {
		if (w >= 1 && w <= 15) width = w;
		else throw "Вы передали неверное значение в параметре. Ширина должна быть от 1 до 15 см.\n";
	}
	double GetWidth() const {
		return width;
	}

	void SetLamp(unsigned int d, unsigned int m, int y, double p, double v, double w) {
		SetDay(d);
		SetMonth(m);
		SetYear(y);
		SetPower(p);
		SetVoltage(v);
		SetWidth(w);
	}
	void Print() const {
		cout << "Дата изготовления: " << ManufacturingDay << "/" << ManufacturingMonth << "/" << ManufacturingYear << "\n";
		cout << "Мощность лампы: " << power << " Вт\n";
		cout << "Напряжение лампы: " << voltage << " В\n";
		cout << "Ширина лампы: " << width << " см\n";
	}
};
int main() {
	setlocale(0, "");

	Lamp myLamp;
	myLamp.SetLamp(10, 7, 2021, 60, 220, 10);
	myLamp.Print();

	return 0;
}

//2. Телефон

#include <iostream>
using namespace std;
class Phone {
public:
	unsigned int ReleaseDay = 1;
	unsigned int ReleaseMonth = 1;
	int ReleaseYear = 2024;
	double weight;
	double width;
	double height;
	void SetDay(unsigned int d) {
		if (d >= 1 && d <= 31) ReleaseDay = d;
		else throw "Неверный день. Введите значение в диапазоне от 1 до 31 включительно.\n";
	}
	unsigned int GetDay() const {
		return ReleaseDay;
	}

	void SetMonth(unsigned int m) {
		if (m >= 1 && m <= 12) ReleaseMonth = m;
		else throw "Неверный месяц. Введите значение в диапазоне от 1 до 12 включительно.\n";
	}
	unsigned int GetMonth() const {
		return ReleaseMonth;
	}

	void SetYear(int y) {
		ReleaseYear = y;
	}
	int GetYear() const {
		return ReleaseYear;
	}

	void SetWeight(double w) {
		if (w >= 50 && w <= 500) weight = w;  
		else throw "Неверный вес. Введите значение в диапазоне от 50 до 500 грамм включительно.\n";
	}
	double GetWeight() const {
		return weight;
	}

	void SetWidth(double w) {
		if (w >= 5 && w <= 15) width = w;  
		else throw "Неверная ширина. Введите значение в диапазоне от 5 до 15 см включительно.\n";
	}
	double GetWidth() const {
		return width;
	}

	void SetHeight(double h) {
		if (h >= 10 && h <= 20) height = h;  
		else throw "Неверная высота. Введите значение в диапазоне от 10 до 20 см включительно.\n";
	}
	double GetHeight() const {
		return height;
	}

	void SetPhone(unsigned int d, unsigned int m, int y, double w, double wd, double h) {
		SetDay(d);
		SetMonth(m);
		SetYear(y);
		SetWeight(w);
		SetWidth(wd);
		SetHeight(h);
	}

	void Print() const {
		cout << "Дата выпуска: " << ReleaseDay << "/" << ReleaseMonth << "/" << ReleaseYear << "\n";
		cout << "Вес телефона: " << weight << " грамм\n";
		cout << "Ширина телефона: " << width << " см\n";
		cout << "Высота телефона: " << height << " см\n";
	}
};
int main() {
	setlocale(0, "");

	Phone phone;
	phone.SetPhone(12, 6, 2021, 180, 7, 15.5);
	phone.Print();

	return 0;
}
//3.Собака

#include <iostream>
using namespace std;

class Dog {
public:

	unsigned int BirthDay = 1;
	unsigned int BirthMonth = 1;
	int BirthYear = 2024;
	double weight;
	double height;

	void SetDay(unsigned int d) {
		if (d >= 1 && d <= 31) BirthDay = d;
		else throw "Неправильное число в параметре. Должно быть от 1 до 31 включительно.\n";
	}
	unsigned int GetDay() const {
		return BirthDay;
	}
	void SetMonth(unsigned int m) {
		if (m >= 1 && m <= 12) BirthMonth = m;
		else throw "Неправильное число в параметре. Должно быть от 1 до 12 включительно.\n";
	}
	unsigned int GetMonth() const {
		return BirthMonth;
	}

	void SetYear(int y) {
		BirthYear = y;
	}
	int GetYear() const {
		return BirthYear;
	}
	void SetWeight(double w) {
		if (w >= 1 && w <= 100) weight = w;
		else throw "Неправильное значение веса. Должно быть от 1 до 100 кг включительно.\n";
	}
	double GetWeight() const {
		return weight;
	}

	void SetHeight(double h) {
		if (h >= 10 && h <= 100) height = h;
		else throw "Неправильное значение высоты. Должно быть от 10 до 100 см включительно.\n";
	}
	double GetHeight() const {
		return height;
	}
	void SetDog(unsigned int d, unsigned int m, int y, double w, double h) {
		SetDay(d);
		SetMonth(m);
		SetYear(y);
		SetWeight(w);
		SetHeight(h);
	}
	void Print() const {
		cout << "Дата рождения: " << BirthDay << "/" << BirthMonth << "/" << BirthYear << "\n";
		cout << "Вес: " << weight << " кг\n";
		cout << "Высота: " << height << " см\n";
	}
};
int main() {
	setlocale(0, "");

	Dog myDog;
	myDog.SetDog(15, 8, 2018, 12.5, 45);
	myDog.Print();

	return 0;
}

#include <iostream>
using namespace std;
class Bancnota {
public:
	int Day;
	int Month;
	int Value;
	int SerialNumber;
	int Year = 1;
	int Width;

	void SetYear(int a1) {
		Year = a1;
	}
	int GetYear() const {
		return Year;
	};
	void SetSerialNumber(int a2) {
		if (a2 >= 10000 && a2 <= 99999) SerialNumber = a2;
		else throw "Вы ввели не верный диапазон. Диапазон должен быть от 10000 до 99999 включительно!";
	}
	int GetSerialNumber()const {
		return SerialNumber;
	};
	void SetValue(int a3) {
		if (a3 >= 1 && a3 <= 1000) Value = a3;
		else throw"Вы ввели не верный диапазон. Диапазон должен быть от 1 до 1000 включительно!";
	}
	int GetValue()const {
		return Value;
	};
	void SetWidth(double w) {
		if (w >= 5 && w <= 25) Width = w;
		else throw "Неверная ширина. Она должна быть от 5 до 25 см включительно.\n";
	}
	double GetWidth() const {
		return Width;
	}
	void SetDay(unsigned int d) {
		if (d >= 1 && d <= 31) Day = d;
		else throw "Неверный день. Должно быть от 1 до 31 включительно.\n";
	}
	unsigned int GetDay() const {
		return Day;
	}

	void SetMonth(unsigned int m) {
		if (m >= 1 && m <= 12) Month = m;
		else throw "Неверный месяц. Должно быть от 1 до 12 включительно.\n";
	}
	unsigned int GetMonth() const {
		return Month;
	}
	void SetBanknote(unsigned int a1, unsigned int a2, int a3, int d, int w, int m) {
		SetDay(d);
		SetMonth(m);
		SetYear(a1);
		SetValue(a3);
		SetSerialNumber(a2);
		SetWidth(w);
	}
	void Print() const {
		cout << "Дата выпуска купюры: " << Day << "/" << Month << "/" << Year << "\n";
		cout << "Серийный номер: " << SerialNumber << "\n";
		cout << "Ценность: " << Value << "\n";
		cout << "Ширина купюры: " << Width << " cm\n";
	}
	int main() {
		setlocale(0, "");

		Bancnota note;
		note.SetBanknote(15, 3, 2015, 100, 15152, 12);
		note.Print();

		return 0;
	}

};

#include <iostream>
using namespace std;

class Kettle {
public:
	unsigned int Manufacturingday=1;
	unsigned int ManufacturingMonth = 1;
	int ManufacturingYear = 2024;
	double weight;
	double Width;

	void SetDay(unsigned int d) {
		if (d >= 1 && d <= 31) Manufacturingday = d;
		else throw "Вы передали не правильное число в парамертре. Вы должны ввести число в диапазоне от 1 до 31 включительно.\n";
	}
	unsigned int GetDay() const {
		return Manufacturingday;
	}
	void SetMonth(unsigned int a) {
		if (a >= 1 && a <= 12) ManufacturingMonth = a;
		else throw "Вы передали не правильное число в парамертре. Вы должны ввести число в диапазоне от 1 до 12 включительно.\n";
	}
	unsigned int GetMoth() const {
		return ManufacturingMonth;
	}
	void SetYear(int y) {
		ManufacturingYear = y;
	}
	int GetYear() const {
		return ManufacturingYear;
	}
	void SetWeight(int r) {
		if (r >= 1 && r <= 1000) weight = r;
		else throw "Вы передали не правильное число в параметр. Вы должны ввести число в диапазоне от 1 до 1000 грам включительно.\n";
	}
	unsigned int Getweight() const {
		return weight;
	}
	void SetWidth(int s){
		if (s >= 1 && s <= 25)Width = s;
		else throw "Вы передали не правильное число в параметр. Вы должны ввести число в диапазоне от 1 до 25 cv включительно.\n";

	}
	unsigned int GetWidth() const {
		return Width;
	}
	void SetKettle(unsigned int d, unsigned int a, int y, int r, int s) {
		SetDay(d);
		SetMonth(a);
		SetYear(y);
		SetWeight(r);
		SetWidth(s);
	}
	void Print() const {
		cout <<"Дата изготовления: "<< Manufacturingday << "/" << ManufacturingMonth << "/" << ManufacturingYear << "\n"<< "Вес чайника: "<< weight<< "грам"<< "\n";
		cout << "Ширина чайника: " << Width<< "cm" << "\n";
	}
	};
int main() {
	setlocale(0, "");

	Kettle qwerty;
	qwerty.SetKettle(29, 5, 2014,1,1);
	qwerty.SetWeight(438);
	qwerty.SetWidth(24);
	qwerty.Print();
}