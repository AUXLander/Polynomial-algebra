#pragma once
typedef unsigned int uint;
#define __throwif__(expression, notification) if(expression){throw notification;}
#define repeat(count) for(uint rep_i = 0, rep_c = count; rep_i < rep_c; ++rep_i)
//#define __abs(value) ((value) < 0 ? (-value) : (value))