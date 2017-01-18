#include "vectors.h"

//vector init function
vector vector_init(float x, float y, float z){
 vector v;
 v.x = x;
 v.y = y;
 v.z = z;
 v.length = sqrt(x*x+y*y+z*z);
	return v;
}

//write vector_add function that takes two vectors as parameters and returns a vector that is the sum of the two vectors
//code goes here
vector vector_add(vector a, vector b) {
	vector c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	c.z = a.z + b.z;
	c.length = sqrt(c.x*c.x + c.y*c.y + c.z*c.z);
	return c;
}

//write vector_dot function that takes two vectors as parameters and returns a float which is the dot product (look it up if you don't know what a dot product is)
//code goes here
float vector_dot(vector a, vector b) {
	float c;
	c = a.x*b.x + a.y*b.y + a.z*b.z;
	
	return c;
}

//write vector_normalize function that takes a pointer to a vector as a parameter and modify the vector by dividing each of the x,y,z components by its length. Check if the length is zero and return 1 if it is zero (unsuccessful normalization) , otherwise return 0 (successful normalization)
int vector_normalize(vector *v){
	if(v->length == 0) {
		return 1;
	} else {
		v->x = v->x/v->length;
		v->y = v->y/v->length;
		v->z = v->z/v->length;
		v->length = 1;
		return 0;
	}
}

//write vector_print function that prints out the x,y,z and length of a vector on separate lines
//code goes here
void vector_print(vector v) {
	printf("x of vector is = %f ", v.x);
	printf("y of vector is = %f ", v.y);
	printf("z of vector is = %f ", v.z);
	printf("length of vector is = %f ", v.length);
}
