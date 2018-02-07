#include "sculptures.hpp"

/*constructor*/
sculptures::sculptures(unsigned int Index,string Creator,unsigned int Year,string Movement,string Condition,
					   		 int Volume,string Material):masterpiece(Index,Creator,Year,Movement,Condition),
																		  volume(Volume),material(Material){

	cout<<"Creating an instance of <class> sculptures."<<endl;																	  	
}

/*destructor*/
sculptures::~sculptures(void){
	cout<<"Destroying an instance of <class> sculptures."<<endl;
}

/*getInfo*/
void sculptures::getInfo(void){
	masterpiece::getInfo();
	cout<<"The material is "<<material<<" and the volume is "<<volume<<"."<<endl;
}

/*evaluate*/
int sculptures::evaluate(string Movement,string Condition="excellent"){
	if(Movement!=getMovement()) 
		return 0;

	if(Condition==getCondition())
		return 1;
	else 
		return 0;
}