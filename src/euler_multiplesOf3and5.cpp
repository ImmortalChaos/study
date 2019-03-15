#include <stdio.h>
#include "euler_multiplesOf3and5.h"

int getSumByDivide(int toNum) {
	int sum = 0;
	for(int i=1; i<toNum; i++) {
		if(i%3==0 || i%5==0) {
			sum+=i;
		}
	}
	return sum;
}

int getSumByNum(int toNum) {
	int v3 = 3;
	int v5 = 5;
	int sum = 0;
	for(int i=1; i<toNum; i++) {
		bool bSum = false;
		if(i==v3) {
			bSum = true;
			v3+=3;
		}
		if(i==v5) {
			bSum = true;
			v5+=5;
		}
		if(bSum) {
		   sum += i;
		}
	}
	return sum;
}

int getSumByN(int t, int n) {
	int v = (t-1) / n;
	return n*(v*(v+1)) / 2;
}

int getSumByEqu(int toNum) {
	return getSumByN(toNum, 3) + getSumByN(toNum, 5) - getSumByN(toNum, 15);
}

