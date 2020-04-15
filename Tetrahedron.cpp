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
Tetrahedron::Tetrahedron(double x1, double x2, double x3, double y1, double y2, double y3, double h_input){
	x[0] = x1;
	x[1] = x2;
	x[2] = x3;
	y[0] = y1;
	y[1] = y2;
	y[2] = y3;
	h = h_input;

}

Tetrahedron::~Tetrahedron() {
	// TODO Auto-generated destructor stub
}

