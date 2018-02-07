#ifndef ARTIFACTS
#define ARTIFACTS

#include <string>
using namespace std;

class artifacts{
	private:
		const unsigned int index;
		const string creator;
		const unsigned int year;

	protected:
	
	public:
		/*constructors*/
		artifacts(unsigned int Index,string Creator,unsigned int Year);

		/*destructors*/	
		virtual ~artifacts(void);
		
		/*accessors*/
		virtual void getInfo(void); //print creator and year
		void getIndex(void); //print index

		/*other*/
		virtual int evaluate(string Movement,string Condition);
};

#endif