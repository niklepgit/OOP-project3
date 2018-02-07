#include "artifacts.hpp"
#include "paintings.hpp"
#include "sculptures.hpp"
#include <iostream>
using namespace std;

void auction(artifacts** Artifacts,int N,string Movement,string Condition);
void createArrayOfArtifacts(int N,artifacts** array);

int main(int argc,char** argv){
	int i;
	srand(time(NULL));
	int N=atoi(argv[1]); //take the number of artifacts from command line
	string Movement=argv[2]; //take the Movement from command line
	string Condition=argv[3]; //take the Condition from command line

	artifacts **array=new artifacts*[N]; //make an array of pointers to artifacts
	createArrayOfArtifacts(N,array); //create the array of artifacts
	cout<<endl;
	auction(array,N,Movement,Condition); //begin the auction

	/*free the array of pointers to artifacts*/
	for(i=0;i<N;i++){
		delete array[i];
		array[i]=nullptr;
	}
	delete[] array;

	return 0;
}

/*auction*/
void auction(artifacts** Artifacts,int N,string Movement,string Condition){
	int i;
	for(i=0;i<N;i++){ //for all of the artifacts
		Artifacts[i]->getIndex(); //print the index
		Artifacts[i]->getInfo(); //print the Info
		cout<<"Evaluate:"<<Artifacts[i]->evaluate(Movement,Condition)<<endl<<endl; 
		//print the evaluation
	}
}

/*createArrayOfArtifacts*/
void createArrayOfArtifacts(int N,artifacts** array){
	int randomArtifacts=rand()%(N)+1;
	int i;
	string Movements[]={"impressionism", "expressionism", "naturalism"};
	string Conditions[]={"bad", "good", "excellent"};
	string Techniques[]={"oil", "aquarelle", "tempera"};
	string Materials[]={"iron", "stone", "wood"};

	string num;
	for(i=0;i<randomArtifacts;i++){ //some artifacts randomly will be paintings
		num=to_string(i);
		int randCondition=rand()%(3); //select a condition randomly
		int randMovement=rand()%(3); //select a movement randomly
		int randTechnique=rand()%(3); //select a technique randomly
	
		//make a painting dynamically
		paintings *Painting=new paintings(i,"Creator"+num,rand()%(2000-1600+1)+1600,Movements[randMovement],Conditions[randCondition],rand()%(70-30+1)+30,rand()%(70-30+1)+30,Techniques[randTechnique]);
		array[i]=Painting; //artifacts *ptr=Painting;
	}
	for(i=randomArtifacts;i<N;i++){ //the other artifacts will be sculptures
		num=to_string(i); //needed to create "CreatorI"
		int randCondition=rand()%(3); //select a condition randomly
		int randMovement=rand()%(3); //select a movement randomly
		int randMaterial=rand()%(3); //select a material randomly

		//make a sculpture dynamically
		sculptures *Sculpture=new sculptures(i,"Creator"+num,rand()%(2000-1600+1)+1600,Movements[randMovement],Conditions[randCondition],rand()%(70-30+1)+30,Materials[randMaterial]);
		array[i]=Sculpture; //artifacts *ptr=Sculpture;
	}
}
