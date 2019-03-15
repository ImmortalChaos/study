#include "euler_multiplesOf3and5.h"

/**
 * Multiples of 3 or 5.
 * Performance is slow when using divide operator.
 */
int getSumByDivide(int toNum) {
	int sum = 0;
	for(int i=1; i<toNum; i++) {
		if(i%3==0 || i%5==0) {
			sum+=i;
		}
	}
	return sum;
}

/**
 * Add 3 or 5 to get the value without using the divide.
 * Performance is faster than using the division operator.
 */
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

/**
 * Multiples Of n.
 */
int getSumByN(int t, int n) {
	int v = (t-1) / n;
	return n*(v*(v+1)) / 2;
}

/**
 * Calculate multiples of number.
 * ex) 1000 : 3*(1+2+3+...+333) + 5*(1+2+3+...199) - 15*(1+2+3+..66)
 *   multiples of 3 : 3*(1+2+3+...+333)
 *   multiples of 5 : 5*(1+2+3+...+199)
 *   duplicated multiples of 3 and 5 : 15*(1+2+3+...+66) 
 * It has the fastest performance than using iterations.
 */
int getSumByEqu(int toNum) {
	return getSumByN(toNum, 3) + getSumByN(toNum, 5) - getSumByN(toNum, 15);
}

