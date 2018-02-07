#include "masterpiece.hpp"
#include <iostream>
using namespace std;

/*constructor*/
masterpiece::masterpiece(unsigned int Index,string Creator,unsigned int Year,string Movement,string Condition)
									   :artifacts(Index,Creator,Year),movement(Movement),condition(Condition){
	cout<<"Creating an instance of <class> masterpiece."<<endl;									   	
}

/*destructor*/
masterpiece::~masterpiece(void){
	cout<<"Destroying an instance of <class> masterpiece."<<endl;
}

/*setCondition*/
void masterpiece::setCondition(string Condition){
	condition=Condition;
}				

/*getInfo*/
void masterpiece::getInfo(void){
	artifacts::getInfo();
	cout<<"The movement is "<<movement<<" and the condition is "<<condition<<"."<<endl;
}

/*getMovement*/
string masterpiece::getMovement(void){
	return movement;
}

/*getCondition*/
string masterpiece::getCondition(void){
	return condition;
}

/*evaluate*/
int masterpiece::evaluate(string Movement,string condition){
	return -2;
}