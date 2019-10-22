// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct City {
	std::string name;
	long population;
	double cost;
};

// Assume each country has at least 1 city
struct Country {
	std::string name;
	std::vector<City> cities;
};

struct Tours {
	std::string title;
	std::vector<Country> countries;
};

int main()
{
	Tours tours
	{ "Tour Ticket Prices from Miami",
		{
			{
				"Colombia", {
					{ "Bogota", 8778000, 400.98 },
					{ "Cali", 2401000, 424.12 },
					{ "Medellin", 2464000, 350.98 },
					{ "Cartagena", 972000, 345.34 }
				},
			},
			{
				"Brazil", {
					{ "Rio De Janiero", 13500000, 567.45 },
					{ "Sao Paulo", 11310000, 975.45 },
					{ "Salvador", 18234000, 855.99 }
				},
			},
			{
				"Chile", {
					{ "Valdivia", 260000, 569.12 },
					{ "Santiago", 7040000, 520.00 }
			},
		},
			{ "Argentina", {
				{ "Buenos Aires", 3010000, 723.77 }
			}
		},
	}
	};

	// Unformatted display so you can see how to access the vector elements
	//std::cout << tours.title << std::endl;
	cout << setw(35.5) <<right << tours.title << endl;
	cout << setw(25) <<left << "Country" << setw(25) << "City" << setw(25) << "Population" << setw(25) << "Cost" << endl;
	for (auto country : tours.countries) {   // loop through the countries
		std::cout << left << country.name << std::endl;
		
		for (auto city : country.cities) {       // loop through the cities for each country
			//std::cout << "\t" << city.name
			//std::cout << "\t\t\t" <<left << setw(14) << left << city.name << setw(22) << right << city.population
				std::cout << setw(20) << left << setfill(' ')
					<< setw(14) << left <<setfill('*') <<"" << setw(12) << city.name << setw(37) << right << city.population
				//<< "\t" << city.population

				//<< "\t" << city.cost
				<< setw(37) << right << city.cost
				<< std::endl;
		}
		
	}

	std::cout << std::endl << std::endl;
	system("pause");
	return 0;
}