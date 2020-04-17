/*
 * Tetrahedron.cpp
 *
 *  Created on: 2020/04/16
 *      Author: seal0
 */

#include "Tetrahedron.h"

Tetrahedron::Tetrahedron() {
	// TODO 自動生成されたコンストラクター・スタブ

}
Tetrahedron::Tetrahedron(double x1, double x2, double x3, double x4, double y1, double y2, double y3, double y4, double h_input){
	x[0] = x1;
	x[1] = x2;
	x[2] = x3;
	x[3] = x4;
	y[0] = y1;
	y[1] = y2;
	y[2] = y3;
	y[3] = y4;
	h = h_input;
}
double Tetrahedron::get_rate(){
	double A2 = pow((x[0]-x[1]), 2.0)+pow((y[0]-y[1]), 2.0);
	double B2 = pow((x[1]-x[2]), 2.0)+pow((y[1]-y[2]), 2.0);
	double C2 = pow((x[2]-x[0]), 2.0)+pow((y[2]-y[0]), 2.0);
	double D2 = pow((x[3] - x[0]), 2.0)+pow((y[3] - y[0]), 2.0) + pow(h, 2.0);
	double E2 = pow((x[3] - x[1]), 2.0)+pow((y[3] - y[1]), 2.0) + pow(h, 2.0);
	double F2 = pow((x[3] - x[2]), 2.0)+pow((y[3] - y[2]), 2.0) + pow(h, 2.0);
	double S = 1.0 * y[2] * 0.5; //底面積
	double V4 = pow(S * h / 3, 4.0);
	double L2 = A2*B2*C2*D2*E2*F2;

	return L2/V4;
}


Tetrahedron::~Tetrahedron() {
	// TODO Auto-generated destructor stub
}

