#ifndef SCULPTURE
#define SCULPTURE

#include "masterpiece.hpp"
#include <iostream>
using namespace std;

class sculptures:public masterpiece{
	private:
		int volume;
		string  material;

	protected:
	
	public:
		/*constructors*/
		sculptures(unsigned int Index,string Creator,unsigned int Year,string Movement,
				   string Condition,int Volume,string Material);

		/*destructors*/	
		~sculptures(void);

		/*accessors*/
		void getInfo(void);

		/*other*/
		int evaluate(string Movement,string Condition); //attention default value should not be here!!!
};



#endif