#include "artifacts.hpp"
#include "masterpiece.hpp"
#include "paintings.hpp"
#include "sculptures.hpp"

#include <iostream>

using namespace std;

/*constructor*/
artifacts::artifacts(unsigned int Index,string Creator,unsigned int Year)
							   :index(Index),creator(Creator),year(Year){
	cout<<"Creating an instance of <class> artifacts."<<endl;						   	
}

/*destructor*/
artifacts::~artifacts(void){
	cout<<"Destroying an instance of <class> artifacts."<<endl;
}

/*getInfo*/
void artifacts::getInfo(void){
	cout<<"The creator is "<<creator<<" and the year is "<<year<<"."<<endl;
}

/*getIndex*/
void artifacts::getIndex(void){
	cout<<"The index is "<<index<<"."<<endl;
}

/*evaluate*/
int artifacts::evaluate(string Movement,string Condition){
	return -1;
}