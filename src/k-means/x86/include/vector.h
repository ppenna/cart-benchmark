/*
 * Copyright(C) 2013 Pedro H. Penna <pedrohenriquepenna@gmail.com>
 * 
 * <vector.h> - Vector library.
 */

#ifndef VECTOR_H_
#define VECTOR_H_

/*============================================================================*
 *                             Private Interface                              *
 *============================================================================*/
 
	/*
	 * Vector.
	 */
	struct vector
	{
		int size;         /* Size.     */
		float *elements; /* Elements. */
	};

/*============================================================================*
 *                             Public Interface                               *
 *============================================================================*/

	/*
	 * Opaque pointer to a vector.
	 */
	typedef struct vector * vector_t;
	
	/*
	 * Opaque pointer to a constant vector.
	 */
	typedef const struct vector * const_vector_t;
	
	/*
	 * Returns the size of a vector.
	 */
	#define vector_size(v) \
		(((vector_t) (v))->size)
	
	/*
	 * Creates a vector.
	 */
	extern vector_t vector_create(int n);
	
	/*
	 * Destroys a vector.
	 */
	extern void vector_destroy(vector_t v);
	
	/*
	 * Computes the euclidean distance between two points.
	 */
	extern float vector_distance(const_vector_t a, const_vector_t b);
	
	/*
	 * Tests if two vectors are equal.
	 */
	extern int vector_equal(const_vector_t a, const_vector_t b);
	
	/*
	 * Assigns a vector to another.
	 */
	extern vector_t vector_assign(vector_t v1, const_vector_t v2);
	
	/*
	 * Subtracts two vectors.
	 */
	extern vector_t vector_sub(vector_t v1, const_vector_t v2);
	
	/*
	 * Adds two vectors.
	 */
	extern vector_t vector_add(vector_t v1, const_vector_t v2);
	
	/*
	 * Multiplies a vector by a scalar.
	 */
	extern vector_t vector_mult(vector_t v, float scalar);
	
	/*
	 * Creates a random vector.
	 */
	extern struct vector *vector_random(int n);

	/*
	 * Returns the element [i] in a vector.
	 */
	#define VECTOR(v, i) \
		(((vector_t)(v))->elements[(i)])

#endif /* VECTOR_H_ */
