#include<iostream>
using namespace std;


void SpiralMatrix(int [][4]);

int main()
{
	int Array[4][4]={
		{8,5,3,2},
		{4,6,7,0},
		{1,3,5,6},
		{6,3,5,2}
	};	
	SpiralMatrix(Array);

	return 0;
}

void SpiralMatrix(int Array[][4])
{
	int tr = 0, rc = 3, br = 3, lc = 0, var;
	while (tr <= br && rc >= lc)
	{
		for (var = lc; var <= rc; var++)
			cout << Array[tr][var] << " ";
		++tr;
		for (var = tr; var <= br; ++var)
			cout << Array[var][rc] << " ";
		--rc;
		for (var = rc; var >= lc; --var)
			cout << Array[br][var] << " ";
		--br;
		for (var = br; var >= tr; --var)
			cout << Array[var][lc] << " ";
		lc++;

	}
}