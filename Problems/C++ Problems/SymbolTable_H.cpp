#include<iostream>
#include<unordered_map>
//#include <stdexcept>

using namespace std;

class SymbolTable {
private:
	unordered_map<string, int>table;
public:
	void addSymbol(const string &symbol, int value) {
		table[symbol] = value;
	}

	bool exists(const string &symbol) {
		return table.find(symbol) != table.end();
	}

	int getValue(const string &symbol) {
		if (exists(symbol)) {
			return table[symbol];
		}
		throw runtime_error("Symbol not found");
	}
};



int main() {

	SymbolTable s1;
	s1.addSymbol("x", 30);
	s1.addSymbol("y", 40);

	try
	{
		cout << "Value of X: " << s1.getValue("x") << endl;
		cout << "Value of Y: " << s1.getValue("y") << endl;
		cout << "Value of Z: " << s1.getValue("z") << endl;
	}
	catch (const exception& e)
	{
		cout<<"Error: "<<e.what();
	}

	return 0;
}



