#ifndef PAINTINGS 
#define PAINTINGS

#include "masterpiece.hpp"

class paintings:public masterpiece{
	private:
		const int length;
		const int width;
		const string technique;

	protected:
	
	public:
		/*constructors*/
		paintings(unsigned int Index,string Creator,unsigned int Year,string Movement,string Condition,
			 	  int Length,int Width,string Technique);

		/*destructors*/	
		~paintings(void);

		/*accessors*/
		void getInfo(void);

		/*other*/
		int evaluate(string Movement,string Condition);  //attention default value should not be here!!!
	
};



#endif