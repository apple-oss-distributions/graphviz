/*   Copyright (c) AT&T Corp.  All rights reserved.
   
This software may only be used by you under license from 
AT&T Corp. ("AT&T").  A copy of AT&T's Source Code Agreement 
is available at AT&T's Internet website having the URL 

http://www.research.att.com/sw/tools/graphviz/license/

If you received this software without first entering into a license 
with AT&T, you have an infringing copy of this software and cannot 
use it without violating AT&T's intellectual property rights. */

#ifndef DGXEP_H
#define DGXEP_H
// a base for all exceptions so we can report the basics
struct DGException {
  char *exceptype;
  DGException(char *exceptype) : exceptype(exceptype) {}
};
#endif