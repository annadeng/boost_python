#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

// struct Contacts
// {
// 	string fname;
// 	string lname;
// 	string cellnum;
// 	string email;
// };

class address{
private:
	//list<Contacts> contact_list;
	int contact_count;
	string fname;
	string lname;
	string cellnum;
	string email;
public:
	address(){
		contact_count = 1;
	}

	void add_address(string fname, string lname, string cellnum, string email){
		// Contacts c;
		// c.fname = fname;
		// c.lname = lname;
		// c.cellnum = cellnum;
		// c.email = email;

		// contact_list.push_back(c);

		this->fname = fname;
		this->lname = lname;
		this->cellnum = cellnum;
		this->email = email;
	}

	string getCell(){
		return this->cellnum;
	}

	void updateCell(string cell){
		cellnum = cell;
	}

	int print_count(){
		return contact_count;
	}

};


#include <boost/python.hpp>
using namespace boost::python;

BOOST_PYTHON_MODULE(libaddress)
{
    class_<address>("address")
    	.def(init<>())
        .def("add_address", &address::add_address)
        .def("getCell", &address::getCell)
        .def("updateCell",&address::updateCell)
        .def("print_count",&address::print_count)
    ;
}
