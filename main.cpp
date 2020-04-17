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
#define epsilon 0.1
#define radius 1.0
#define N 10

using namespace std;

double make_random_number(){
//	ランダムに範囲内の数(double型)を生成する
	random_device seed_gen;
	default_random_engine engine(seed_gen());
	uniform_int_distribution<> rand100(0, 2*(int)radius);
	double x  = double(rand100(engine)) / radius - 1.0;
	return x;
}

int main(){
	printf("hello, world!\n");
/*	A(x0, y0, z0)=(-0.5, 0, 0)
 * B(x1, y1, z1)=(0.5, 0, 0)
 * C(x2, y2, z2)=(x2, y2, 0)
 * O(x3, y3, z3)=(x3, y3, h)
 *
 * 乱数の範囲はy2, h(0.0:1.0]、x2, x3, y4は[-1.0:1.0]
 * 刻む細かさを変えていく(0.1~0.01)
 * 乱数で指定するか総当たりで求めるかは未定
*/
	for(int i=0; i<N; i++){
		double x[4];
		double y[4];
		double h;
		x[0] = -0.5;
		x[1] = 0.5;
		x[2] = (make_random_number());
		x[3] = (make_random_number());
		y[0] = 0;
		y[1] = 0;
		y[2] = abs((make_random_number()));
		y[3] = (make_random_number());
		h = abs(make_random_number());
		if(y[2] == 0.0){y[2]=0.01;}
		if(h == 0.0){h=0.01;}

		Tetrahedron th(x[0], x[1], x[2], x[3], y[0], y[1], y[2], y[3], h);

		double rate = th.get_rate();
		printf("%f\n", rate);

	}


	return 0;
}

