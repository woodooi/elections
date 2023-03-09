#include <iostream>
#include "classCandidates.h"

void main()

{
	int n = 0;
	Candidate candidates[6];
	candidates[1].enterDat(0, &n);
	candidates[2].enterDat(0, &n);
	candidates[3].enterDat(0, &n);
	candidates[4].enterDat(0, &n);
	candidates[5].enterDat(0, &n);
	candidates[1].outData(n);
	candidates[2].outData(n);
	candidates[3].outData(n);
	candidates[4].outData(n);
	candidates[5].outData(n);
	Elections result;
	result.sorted(candidates);
}
