/*
 * This file is part of the UCB release of Plan 9. It is subject to the license
 * terms in the LICENSE file found in the top-level directory of this
 * distribution and at http://akaros.cs.berkeley.edu/files/Plan9License. No
 * part of the UCB release of Plan 9, including this file, may be copied,
 * modified, propagated, or distributed except according to the terms contained
 * in the LICENSE file.
 */

#include "mplot.h"
void box(double x0, double y0, double x1, double y1){
	move(x0, y0);
	vec(x0, y1);
	vec(x1, y1);
	vec(x1, y0);
	vec(x0, y0);
}
