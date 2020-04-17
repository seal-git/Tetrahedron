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

	double x[4];
	double y[4];
	double h;

public:
	Tetrahedron(void);
	Tetrahedron(double x1, double x2, double x3, double x4, double y1, double y2, double y3, double y4, double h);
	double get_rate();

	virtual ~Tetrahedron();
};

#endif /* TETRAHEDRON_H_ */
