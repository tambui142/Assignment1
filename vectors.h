//enter the necessary includes - hint 3 different includes needed - google for which includes need to be added for the C functions used
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct {
 //enter definition for float fields for x,y,z,length
	float x;
	float y;
	float z;
	float length;
} vector;

//header for vector_init fucniton
vector vector_init(float x, float y, float z);

//header for vector_add function, vector_dot function, vector_normalize function and vector_print function
vector vector_add(vector v1, vector v2);
float vector_dot(vector v1, vector v2);
int vector_normalize(vector *v);
void vector_print(vector v);
