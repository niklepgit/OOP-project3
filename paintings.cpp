#include "paintings.hpp"
#include <iostream>

/*constructors*/
paintings::paintings(unsigned int Index,string Creator,unsigned int Year,string Movement,string Condition,
			    int Length,int Width,string Technique):masterpiece(Index,Creator,Year,Movement,Condition),
													     length(Length),width(Width),technique(Technique){
	
	cout<<"Creating an instance of <class> paintings."<<endl;			     	
}

/*destructor*/
paintings::~paintings(void){
	cout<<"Destroying an instance of <class> paintings."<<endl;
}

/*getInfo*/
void paintings::getInfo(void){
	masterpiece::getInfo();
	cout<<"The length is "<<length<<",the width is "<<width<<" and the technique is "<<technique<<"."<<endl;
	cout<<"The surface of this painting is "<<width*length<<"."<<endl;
}	

/*evaluate*/
int paintings::evaluate(string Movement,string Condition="good"){
	if(Movement!=getMovement()) 
		return 0;
	if(Condition=="good" && getCondition()=="excellent")
		return 1;
	if(Condition==getCondition())
		return 1;
	else 
		return 0;
}