/*
 * masin.cpp
 *
 *  Created on: 2020/04/16
 *      Author: seal0
 */

#include <stdio.h>
#include <math.h>
#include <random>

#include "Tetrahedron.h"

#define max 1.0
#define min -1.0
#define epsilon 0.01
#define radius 100
#define N 10

using namespace std;

double make_random_number(){
	random_device seed_gen;
	default_random_engine engine(seed_gen());
	uniform_int_distribution<> rand100(0, 2*radius);
	double x  = double(rand100(engine)) / (double)radius - 1.0;
	return x;
}

int main(){
	printf("hello, world");

	for(int i=0; i<N; i++){
		double x[3];
		double y[3];
		double h;
		for (int j=0; j<3; j++){
			x[j] = make_random_number();
			y[j] = make_random_number();
		}
		h = abs(make_random_number());

		Tetrahedron th(x[0], x[1], x[2], y[0], y[1], y[2], h);


	}


	return 0;
}

