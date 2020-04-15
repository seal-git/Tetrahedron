/*
 * Tetrahedron.h
 *
 *  Created on: 2020/04/16
 *      Author: seal0
 */
#include <random>

using namespace std;

#ifndef TETRAHEDRON_H_
#define TETRAHEDRON_H_


class Tetrahedron{

	double x[3];
	double y[3];
	double h;

public:
	Tetrahedron(void);
	Tetrahedron(double x1, double x2, double x3, double y1, double y2, double y3, double h);


	virtual ~Tetrahedron();
};

#endif /* TETRAHEDRON_H_ */
