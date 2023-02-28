
#include <iostream>
using namespace std;

class Wine {
private:
	size_t weight;
	string type;
public:
	Wine() {
		weight = 0;
	    type = " ";
	}
	Wine(size_t fweight, string ftype) {
		weight = fweight;
		type = ftype;
	}
	size_t getWeight() { return weight; }
	string getType() { return type; }
	float getVolume1() { return 150 * 0.7; }
	float getVolume2() { return 300 * 0.7; }
	float getVolume3() { return 280 * 0.7; }
	void setWeight(size_t fweight) { weight = fweight; }
	void setType(string ftype) { type = ftype; }
};


/*int main() {
	cout << "Wine Cabernet Sauvignon " << endl;
	Wine a1(150, "white");
	cout << a1.getType() << "  " << a1.getWeight() << endl;
	
	cout  << "Wine Merlot " << endl;
    Wine a2(300, "red");
	cout << a2.getType() << " " << a2.getWeight() << endl;
	
	cout << "Wine Chardonnay " << endl;
	Wine a3(200, "pink");
	cout << a3.getType() << " " << a3.getWeight() << endl;
	
	return 0;
}*/


int main() {
	Wine a1, a2, a3;
	cout << "Wine Cabernet Sauvignon";
	cout << a1.getType() << endl;
	a1.setType("150, white");
	cout << a1.getType() << endl;

	
	a1.setWeight(0);
	cout << " " << endl;

	cout << "Wine Merlot";
	cout << a2.getType() << endl;
	a2.setType("300, red");
	cout << a2.getType() << endl;

	
	a2.setWeight(0);
	cout << " " << endl;

	cout << "Wine Chardonnay ";
	cout << a3.getType() << endl;
	a3.setType("200, pink");
	cout << a3.getType() << endl;
	
	cout << a1.getVolume1() << endl;
	cout << a2.getVolume2() << endl;
	cout << a3.getVolume3() << endl;
	

	
};

