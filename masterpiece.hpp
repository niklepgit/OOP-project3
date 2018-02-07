#ifndef MASTERPIECE
#define MASTERPIECE

#include "artifacts.hpp"

class masterpiece:public artifacts{
	private:
		string movement;
		string condition;

	protected:
	
	public:
		/*constructors*/
		masterpiece(unsigned int Index,string Creator,unsigned int Year,string Movement,string Condition);

		/*destructors*/	
		virtual ~masterpiece(void);

		/*mutators*/	
		void setCondition(string Condition);

		/*accessors*/
		virtual void getInfo(void);	
		string getMovement(void);
		string getCondition(void);

		/*other*/
		virtual int evaluate(string Movement,string Condition);
};


#endif