// Name:Leobardo arevalo
// This program calculates and displays business expenses.
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
int main() {

 int days;
 double hotel, meal;
 std::string location; // location is new york city
 double total;

std::stringstream sshotel, ssmeal, sstotal;

std::cout<< " Welcome \n";

std::cout<< " What is the business trip location? \n";
getline(std::cin, location);
location= location.substr(0, 20);

std::cout << " how many days will the trip take \n";
std::cin >> days;

 std::cout << " what is the total hotel expense? \n";
 std::cin >> hotel;

 sshotel<< std::setprecision(2) << std::fixed << '$'<< hotel;

 std::cout << "what is the total meal expense? \n";
 std::cin >> meal;

 ssmeal << std::setprecision(2) << std::fixed << '$' << meal;

 total = hotel + meal;

sstotal << std::setprecision(2) << std::fixed << '$' << total;

 std::cout << "\nlocation \t days \t hotel \t meal \t total" << std::endl;
 std::cout << location << "\t"
           << days << "\t"
           << sshotel.str() << "\t"
           << ssmeal.str()  << "\t"
           << sstotal.str() << "\t" << std::endl;
}
// This program calculates and displays business expenses.
