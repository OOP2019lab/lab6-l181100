#include"header.h"
int main()
{
	student s4[3];
	s4[0] = student(3,2.0);
	s4[1] = student(3,3.0);
	s4[2] = student(4,2.33);

	s4[0].addquizscore(1);
	s4[0].addquizscore(4);
	s4[0].addquizscore(10);

	s4[1].addquizscore(10);
	s4[1].addquizscore(4);
	s4[1].addquizscore(9);

	s4[2].addquizscore(9);
	s4[2].addquizscore(8);
	s4[2].addquizscore(7);

	for(int i=0;i<3;i++)
		s4[i].print();
	getch();

}