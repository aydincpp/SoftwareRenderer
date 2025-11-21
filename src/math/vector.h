#ifndef VECTOR_H
#define VECTOR_H

/* 2D vector with float components */
typedef struct
{
  float x, y;
} Vec2f_t;

/* 2D vector with integer components */
typedef struct
{
  int x, y;
} Vec2i_t;

/* 3D vector with float components */
typedef struct
{
  float x, y, z;
} Vec3f_t;

/* 3D vector with integer components */
typedef struct
{
  int x, y, z;
} Vec3i_t;

/* 4D vector with float components */
typedef struct
{
  float x, y, z, w;
} Vec4f_t;

/* 4D vector with int components */
typedef struct
{
  int x, y, z, w;
} Vec4i_t;

/*
 * --------------------------------------------------------------------
 * Vector addition
 * Returns a vector resulting from component-wise addition of two input
 * vectors.
 * --------------------------------------------------------------------
 */

/**
 * @brief Adds two 2D float vectors component-wise.
 * @param a First vector.
 * @param b Second vector.
 * @return Resulting vector where each component is a.x + b.x, a.y + b.y.
 */
Vec2f_t vec2f_add (Vec2f_t a, Vec2f_t b);

/**
 * @brief Adds two 2D integer vectors component-wise.
 * @param a First vector.
 * @param b Second vector.
 * @return Resulting vector where each component is a.x + b.x, a.y + b.y.
 */
Vec2i_t vec2i_add (Vec2i_t a, Vec2i_t b);

/**
 * @brief Adds two 3D float vectors component-wise.
 * @param a First vector.
 * @param b Second vector.
 * @return Resulting vector where each component is a.x + b.x, a.y + b.y, a.z +
 * b.z.
 */
Vec3f_t vec3f_add (Vec3f_t a, Vec3f_t b);

/**
 * @brief Adds two 3D integer vectors component-wise.
 * @param a First vector.
 * @param b Second vector.
 * @return Resulting vector where each component is a.x + b.x, a.y + b.y, a.z +
 * b.z.
 */
Vec3i_t vec3i_add (Vec3i_t a, Vec3i_t b);

/**
 * @brief Adds two 4D float vectors component-wise.
 * @param a First vector.
 * @param b Second vector.
 * @return Resulting vector where each component is a.x + b.x, a.y + b.y, a.z +
 * b.z, a.w + b.w.
 */
Vec4f_t vec4f_add (Vec4f_t a, Vec4f_t b);

/**
 * @brief Adds two 4D integer vectors component-wise.
 * @param a First vector.
 * @param b Second vector.
 * @return Resulting vector where each component is a.x + b.x, a.y + b.y, a.z +
 * b.z, a.w + b.w.
 */
Vec4i_t vec4i_add (Vec4i_t a, Vec4i_t b);

/*
 * --------------------------------------------------------------------
 * Vector subtraction
 * Returns a vector resulting from component-wise subtraction of two input
 * vectors (a - b).
 * --------------------------------------------------------------------
 */

/**
 * @brief Subtracts two 2D float vectors component-wise (a - b).
 * @param a Minuend vector.
 * @param b Subtrahend vector.
 * @return Resulting vector where each component is a.x - b.x, a.y - b.y.
 */
Vec2f_t vec2f_sub (Vec2f_t a, Vec2f_t b);

/**
 * @brief Subtracts two 2D integer vectors component-wise (a - b).
 * @param a Minuend vector.
 * @param b Subtrahend vector.
 * @return Resulting vector where each component is a.x - b.x, a.y - b.y.
 */
Vec2i_t vec2i_sub (Vec2i_t a, Vec2i_t b);

/**
 * @brief Subtracts two 3D float vectors component-wise (a - b).
 * @param a Minuend vector.
 * @param b Subtrahend vector.
 * @return Resulting vector where each component is a.x - b.x, a.y - b.y, a.z -
 * b.z.
 */
Vec3f_t vec3f_sub (Vec3f_t a, Vec3f_t b);

/**
 * @brief Subtracts two 3D integer vectors component-wise (a - b).
 * @param a Minuend vector.
 * @param b Subtrahend vector.
 * @return Resulting vector where each component is a.x - b.x, a.y - b.y, a.z -
 * b.z.
 */
Vec3i_t vec3i_sub (Vec3i_t a, Vec3i_t b);

/**
 * @brief Subtracts two 4D float vectors component-wise (a - b).
 * @param a Minuend vector.
 * @param b Subtrahend vector.
 * @return Resulting vector where each component is a.x - b.x, a.y - b.y, a.z -
 * b.z, a.w - b.w.
 */
Vec4f_t vec4f_sub (Vec4f_t a, Vec4f_t b);

/**
 * @brief Subtracts two 4D integer vectors component-wise (a - b).
 * @param a Minuend vector.
 * @param b Subtrahend vector.
 * @return Resulting vector where each component is a.x - b.x, a.y - b.y, a.z -
 * b.z, a.w - b.w.
 */
Vec4i_t vec4i_sub (Vec4i_t a, Vec4i_t b);

/*
 * --------------------------------------------------------------------
 * Vector multiplication (Hadamard product)
 * Returns a vector resulting from component-wise multiplication of two input
 * vectors.
 *
 * This is not a dot product or cross product.
 * --------------------------------------------------------------------
 */

/**
 * @brief Multiplies two 2D float vectors component-wise (Hadamard product).
 * @param a First vector.
 * @param b Second vector.
 * @return Resulting vector where each component is a.x * b.x, a.y * b.y.
 */
Vec2f_t vec2f_mul (Vec2f_t a, Vec2f_t b);

/**
 * @brief Multiplies two 2D integer vectors component-wise (Hadamard product).
 * @param a First vector.
 * @param b Second vector.
 * @return Resulting vector where each component is a.x * b.x, a.y * b.y.
 */
Vec2i_t vec2i_mul (Vec2i_t a, Vec2i_t b);

/**
 * @brief Multiplies two 3D float vectors component-wise (Hadamard product).
 * @param a First vector.
 * @param b Second vector.
 * @return Resulting vector where each component is a.x * b.x, a.y * b.y, a.z *
 * b.z.
 */
Vec3f_t vec3f_mul (Vec3f_t a, Vec3f_t b);

/**
 * @brief Multiplies two 3D integer vectors component-wise (Hadamard product).
 * @param a First vector.
 * @param b Second vector.
 * @return Resulting vector where each component is a.x * b.x, a.y * b.y, a.z *
 * b.z.
 */
Vec3i_t vec3i_mul (Vec3i_t a, Vec3i_t b);

/**
 * @brief Multiplies two 4D float vectors component-wise (Hadamard product).
 * @param a First vector.
 * @param b Second vector.
 * @return Resulting vector where each component is a.x * b.x, a.y * b.y, a.z *
 * b.z, a.w * b.w.
 */
Vec4f_t vec4f_mul (Vec4f_t a, Vec4f_t b);

/**
 * @brief Multiplies two 4D integer vectors component-wise (Hadamard product).
 * @param a First vector.
 * @param b Second vector.
 * @return Resulting vector where each component is a.x * b.x, a.y * b.y, a.z *
 * b.z, a.w * b.w.
 */
Vec4i_t vec4i_mul (Vec4i_t a, Vec4i_t b);

/*
 * --------------------------------------------------------------------
 * Vector division
 * Returns a vector resulting from component-wise division of two input
 * vectors (a / b).
 *
 * This does not handle division by zero case.
 * --------------------------------------------------------------------
 */

/**
 * @brief Divides two 2D float vectors component-wise (a / b).
 * @param a Dividend vector.
 * @param b Divisor vector.
 * @return Resulting vector where each component is a.x / b.x, a.y / b.y.
 * @note Behavior is undefined if any component of b is zero.
 */
Vec2f_t vec2f_div (Vec2f_t a, Vec2f_t b);

/**
 * @brief Divides two 2D integer vectors component-wise (a / b).
 * @param a Dividend vector.
 * @param b Divisor vector.
 * @return Resulting vector where each component is a.x / b.x, a.y / b.y.
 * @note Behavior is undefined if any component of b is zero.
 */
Vec2f_t vec2i_div (Vec2i_t a, Vec2i_t b);

/**
 * @brief Divides two 3D float vectors component-wise (a / b).
 * @param a Dividend vector.
 * @param b Divisor vector.
 * @return Resulting vector where each component is a.x / b.x, a.y / b.y, a.z /
 * b.z.
 * @note Behavior is undefined if any component of b is zero.
 */
Vec3f_t vec3f_div (Vec3f_t a, Vec3f_t b);

/**
 * @brief Divides two 3D integer vectors component-wise (a / b).
 * @param a Dividend vector.
 * @param b Divisor vector.
 * @return Resulting vector where each component is a.x / b.x, a.y / b.y, a.z /
 * b.z.
 * @note Behavior is undefined if any component of b is zero.
 */
Vec3f_t vec3i_div (Vec3i_t a, Vec3i_t b);

/**
 * @brief Divides two 4D float vectors component-wise (a / b).
 * @param a Dividend vector.
 * @param b Divisor vector.
 * @return Resulting vector where each component is a.x / b.x, a.y / b.y, a.z /
 * b.z, a.w / b.w.
 * @note Behavior is undefined if any component of b is zero.
 */
Vec4f_t vec4f_div (Vec4f_t a, Vec4f_t b);

/**
 * @brief Divides two 4D integer vectors component-wise (a / b).
 * @param a Dividend vector.
 * @param b Divisor vector.
 * @return Resulting vector where each component is a.x / b.x, a.y / b.y, a.z /
 * b.z, a.w / b.w.
 * @note Behavior is undefined if any component of b is zero.
 */
Vec4f_t vec4i_div (Vec4i_t a, Vec4i_t b);

/*
 * --------------------------------------------------------------------
 * Scale vector (Multiplication)
 * Multiplies each component of the vector by a scalar value.
 * --------------------------------------------------------------------
 */

/**
 * @brief Scales a 2D float vector by a scalar value.
 * @param v Vector to be scaled.
 * @param s Scalar multiplier.
 * @return Resulting vector where each component is multiplied by s.
 */
Vec2f_t vec2f_mul_scalar (Vec2f_t v, float s);

/**
 * @brief Scales a 2D integer vector by a scalar value.
 * @param v Vector to be scaled.
 * @param s Scalar multiplier.
 * @return Resulting vector where each component is multiplied by s.
 */
Vec2i_t vec2i_mul_scalar (Vec2i_t v, int s);

/**
 * @brief Scales a 3D float vector by a scalar value.
 * @param v Vector to be scaled.
 * @param s Scalar multiplier.
 * @return Resulting vector where each component is multiplied by s.
 */
Vec3f_t vec3f_mul_scalar (Vec3f_t v, float s);

/**
 * @brief Scales a 3D integer vector by a scalar value.
 * @param v Vector to be scaled.
 * @param s Scalar multiplier.
 * @return Resulting vector where each component is multiplied by s.
 */
Vec3i_t vec3i_mul_scalar (Vec3i_t v, int s);

/**
 * @brief Scales a 4D float vector by a scalar value.
 * @param v Vector to be scaled.
 * @param s Scalar multiplier.
 * @return Resulting vector where each component is multiplied by s.
 */
Vec4f_t vec4f_mul_scalar (Vec4f_t v, float s);

/**
 * @brief Scales a 4D integer vector by a scalar value.
 * @param v Vector to be scaled.
 * @param s Scalar multiplier.
 * @return Resulting vector where each component is multiplied by s.
 */
Vec4i_t vec4i_mul_scalar (Vec4i_t v, int s);

/*
 * --------------------------------------------------------------------
 * Scale vector (Division)
 * Divides each component of the vector by a scalar value.
 * --------------------------------------------------------------------
 */

/**
 * @brief Divides a 2D float vector by a scalar value.
 * @param v Vector to be divided.
 * @param s Scalar divisor (should not be zero).
 * @return Resulting vector where each component is divided by s.
 */
Vec2f_t vec2f_div_scalar (Vec2f_t v, float s);

/**
 * @brief Divides a 2D integer vector by a scalar value.
 * @param v Vector to be divided.
 * @param s Scalar divisor (should not be zero).
 * @return Resulting vector where each component is divided by s.
 */
Vec2f_t vec2i_div_scalar (Vec2i_t v, int s);

/**
 * @brief Divides a 3D float vector by a scalar value.
 * @param v Vector to be divided.
 * @param s Scalar divisor (should not be zero).
 * @return Resulting vector where each component is divided by s.
 */
Vec3f_t vec3f_div_scalar (Vec3f_t v, float s);

/**
 * @brief Divides a 3D integer vector by a scalar value.
 * @param v Vector to be divided.
 * @param s Scalar divisor (should not be zero).
 * @return Resulting vector where each component is divided by s.
 */
Vec3f_t vec3i_div_scalar (Vec3i_t v, int s);

/**
 * @brief Divides a 4D float vector by a scalar value.
 * @param v Vector to be divided.
 * @param s Scalar divisor (should not be zero).
 * @return Resulting vector where each component is divided by s.
 */
Vec4f_t vec4f_div_scalar (Vec4f_t v, float s);

/**
 * @brief Divides a 4D integer vector by a scalar value.
 * @param v Vector to be divided.
 * @param s Scalar divisor (should not be zero).
 * @return Resulting vector where each component is divided by s.
 */
Vec4f_t vec4i_div_scalar (Vec4i_t v, int s);

/*
 * --------------------------------------------------------------------
 * Dot product
 * Returns the scalar dot product of two vectors, representing their
 * directional similarity.
 * --------------------------------------------------------------------
 */

/**
 * @brief Calculates the dot product of two 2D float vectors.
 * @param a First vector.
 * @param b Second vector.
 * @return Scalar dot product: a.x * b.x + a.y * b.y.
 */
float vec2f_dot (Vec2f_t a, Vec2f_t b);

/**
 * @brief Calculates the dot product of two 2D integer vectors.
 * @param a First vector.
 * @param b Second vector.
 * @return Scalar dot product: a.x * b.x + a.y * b.y.
 */
int vec2i_dot (Vec2i_t a, Vec2i_t b);

/**
 * @brief Calculates the dot product of two 3D float vectors.
 * @param a First vector.
 * @param b Second vector.
 * @return Scalar dot product: a.x * b.x + a.y * b.y + a.z * b.z.
 */
float vec3f_dot (Vec3f_t a, Vec3f_t b);

/**
 * @brief Calculates the dot product of two 3D integer vectors.
 * @param a First vector.
 * @param b Second vector.
 * @return Scalar dot product: a.x * b.x + a.y * b.y + a.z * b.z.
 */
int vec3i_dot (Vec3i_t a, Vec3i_t b);

/**
 * @brief Calculates the dot product of two 4D float vectors.
 * @param a First vector.
 * @param b Second vector.
 * @return Scalar dot product: a.x * b.x + a.y * b.y + a.z * b.z.
 * @note w is ignored because it's the homogeneous coordinate.
 */
float vec4f_dot (Vec4f_t a, Vec4f_t b);

/**
 * @brief Calculates the dot product of two 4D integer vectors.
 * @param a First vector.
 * @param b Second vector.
 * @return Scalar dot product: a.x * b.x + a.y * b.y + a.z * b.z.
 * @note w is ignored because it's the homogeneous coordinate.
 */
int vec4i_dot (Vec4i_t a, Vec4i_t b);

/**
 * @brief Calculates the dot product of two 4D float vectors.
 * @param a First vector.
 * @param b Second vector.
 * @return Scalar dot product: a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w.
 */
float vec4f_dot_full (Vec4f_t a, Vec4f_t b);

/**
 * @brief Calculates the dot product of two 4D integer vectors.
 * @param a First vector.
 * @param b Second vector.
 * @return Scalar dot product: a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w.
 */
int vec4i_dot_full (Vec4i_t a, Vec4i_t b);

/*
 * --------------------------------------------------------------------
 * Cross product
 * For 2D vectors: returns a scalar representing the magnitude of the
 * perpendicular vector.
 * For 3D vectors: returns a vector perpendicular to both input vectors.
 * --------------------------------------------------------------------
 */

/**
 * @brief Calculates the 2D cross product (scalar) of two float vectors.
 * @param a First vector.
 * @param b Second vector.
 * @return Scalar value equal to a.x * b.y - a.y * b.x.
 */
float vec2f_cross (Vec2f_t a, Vec2f_t b);

/**
 * @brief Calculates the 2D cross product (scalar) of two integer vectors.
 * @param a First vector.
 * @param b Second vector.
 * @return Scalar value equal to a.x * b.y - a.y * b.x.
 */
int vec2i_cross (Vec2i_t a, Vec2i_t b);

/**
 * @brief Calculates the 3D cross product (vector) of two float vectors.
 * @param a First vector.
 * @param b Second vector.
 * @return Vector perpendicular to both a and b.
 */
Vec3f_t vec3f_cross (Vec3f_t a, Vec3f_t b);

/**
 * @brief Calculates the 3D cross product (vector) of two integer vectors.
 * @param a First vector.
 * @param b Second vector.
 * @return Vector perpendicular to both a and b.
 */
Vec3i_t vec3i_cross (Vec3i_t a, Vec3i_t b);

/*
 * --------------------------------------------------------------------
 * Vector length (magnitude)
 * Returns the Euclidean length of the vector.
 * --------------------------------------------------------------------
 */

/**
 * @brief Calculates the Euclidean length (magnitude) of a 2D float vector.
 * @param v Vector to measure.
 * @return Length computed as sqrt(v.x * v.x + v.y * v.y).
 */
float vec2f_length (Vec2f_t v);

/**
 * @brief Calculates the Euclidean length (magnitude) of a 2D integer vector.
 * @param v Vector to measure.
 * @return Length computed as sqrt(v.x * v.x + v.y * v.y).
 */
float vec2i_length (Vec2i_t v);

/**
 * @brief Calculates the Euclidean length (magnitude) of a 3D float vector.
 * @param v Vector to measure.
 * @return Length computed as sqrt(v.x * v.x + v.y * v.y + v.z * v.z).
 */
float vec3f_length (Vec3f_t v);

/**
 * @brief Calculates the Euclidean length (magnitude) of a 3D integer vector.
 * @param v Vector to measure.
 * @return Length computed as sqrt(v.x * v.x + v.y * v.y + v.z * v.z).
 */
float vec3i_length (Vec3i_t v);

/**
 * @brief Calculates the Euclidean length (magnitude) of a 4D float vector.
 * @param v Vector to measure.
 * @return Length computed as sqrt(v.x * v.x + v.y * v.y + v.z * v.z).
 * @note w is ignored because it's the homogeneous coordinate.
 */
float vec4f_length (Vec4f_t v);

/**
 * @brief Calculates the Euclidean length (magnitude) of a 4D integer vector.
 * @param v Vector to measure.
 * @return Length computed as sqrt(v.x * v.x + v.y * v.y + v.z * v.z).
 * @note w is ignored because it's the homogeneous coordinate.
 */
float vec4i_length (Vec4i_t v);

/**
 * @brief Calculates the Euclidean length (magnitude) of a 4D float vector.
 * @param v Vector to measure.
 * @return Length computed as sqrt(v.x * v.x + v.y * v.y + v.z * v.z + v.w *
 * v.w).
 */
float vec4f_length_full (Vec4f_t v);

/**
 * @brief Calculates the Euclidean length (magnitude) of a 4D integer vector.
 * @param v Vector to measure.
 * @return Length computed as sqrt(v.x * v.x + v.y * v.y + v.z * v.z + v.w *
 * v.w).
 */
float vec4i_length_full (Vec4i_t v);

/*
 * --------------------------------------------------------------------
 * Vector length squared
 * Returns the squared Euclidean length (avoids costly sqrt).
 * Useful for comparisons where exact length is not required.
 * --------------------------------------------------------------------
 */

/**
 * @brief Calculates the squared Euclidean length of a 2D float vector.
 * Useful for performance optimization when exact length is not required.
 * @param v Vector to measure.
 * @return Length squared: v.x * v.x + v.y * v.y.
 */
float vec2f_length_squared (Vec2f_t v);

/**
 * @brief Calculates the squared Euclidean length of a 2D integer vector.
 * Useful for performance optimization when exact length is not required.
 * @param v Vector to measure.
 * @return Length squared: v.x * v.x + v.y * v.y.
 */
int vec2i_length_squared (Vec2i_t v);

/**
 * @brief Calculates the squared Euclidean length of a 3D float vector.
 * Useful for performance optimization when exact length is not required.
 * @param v Vector to measure.
 * @return Length squared: v.x * v.x + v.y * v.y + v.z * v.z.
 */
float vec3f_length_squared (Vec3f_t v);

/**
 * @brief Calculates the squared Euclidean length of a 3D integer vector.
 * Useful for performance optimization when exact length is not required.
 * @param v Vector to measure.
 * @return Length squared: v.x * v.x + v.y * v.y + v.z * v.z.
 */
int vec3i_length_squared (Vec3i_t v);

/**
 * @brief Calculates the squared Euclidean length of a 4D float vector.
 * Useful for performance optimization when exact length is not required.
 * @param v Vector to measure.
 * @return Length squared: v.x * v.x + v.y * v.y + v.z * v.z.
 * @note w is ignored because it's the homogeneous coordinate.
 */
float vec4f_length_squared (Vec4f_t v);

/**
 * @brief Calculates the squared Euclidean length of a 4D integer vector.
 * Useful for performance optimization when exact length is not required.
 * @param v Vector to measure.
 * @return Length squared: v.x * v.x + v.y * v.y + v.z * v.z.
 * @note w is ignored because it's the homogeneous coordinate.
 */
int vec4i_length_squared (Vec4i_t v);

/**
 * @brief Calculates the squared Euclidean length of a 4D float vector.
 * Useful for performance optimization when exact length is not required.
 * @param v Vector to measure.
 * @return Length squared: v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w.
 */
float vec4f_length_squared_full (Vec4f_t v);

/**
 * @brief Calculates the squared Euclidean length of a 4D integer vector.
 * Useful for performance optimization when exact length is not required.
 * @param v Vector to measure.
 * @return Length squared: v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w.
 */
int vec4i_length_squared_full (Vec4i_t v);

/*
 * --------------------------------------------------------------------
 * Vector normalization
 * Returns a vector with the same direction but unit length (length = 1).
 * Beware of zero-length vectors to avoid division by zero.
 * --------------------------------------------------------------------
 */

/**
 * @brief Normalizes a 2D integer vector to a unit vector as a 2D float vector.
 * @param v Integer vector to normalize.
 * @return Normalized vector with length 1. Returns zero vector if input length
 * is zero.
 */
Vec2f_t vec2i_normalize (Vec2i_t v);

/**
 * @brief Normalizes a 2D float vector to a unit vector.
 * @param v Float vector to normalize.
 * @return Normalized vector with length 1. Returns zero vector if input length
 * is zero.
 */
Vec2f_t vec2f_normalize (Vec2f_t v);

/**
 * @brief Normalizes a 3D float vector to a unit vector.
 * @param v Float vector to normalize.
 * @return Normalized vector with length 1. Returns zero vector if input length
 * is zero.
 */
Vec3f_t vec3f_normalize (Vec3f_t v);

/**
 * @brief Normalizes a 3D integer vector to a unit vector as a 3D float vector.
 * @param v Integer vector to normalize.
 * @return Normalized vector with length 1. Returns zero vector if input length
 * is zero.
 */
Vec3f_t vec3i_normalize (Vec3i_t v);

/**
 * @brief Normalizes a 4D float vector to a unit vector.
 * @param v Float vector to normalize.
 * @return Normalized vector with length 1. Returns zero vector if input length
 * is zero.
 * @note w is ignored because it's the homogeneous coordinate.
 */
Vec4f_t vec4f_normalize (Vec4f_t v);

/**
 * @brief Normalizes a 4D integer vector to a unit vector as a 4D float vector.
 * @param v Integer vector to normalize.
 * @return Normalized vector with length 1. Returns zero vector if input length
 * is zero.
 * @note w is ignored because it's the homogeneous coordinate.
 */
Vec4f_t vec4i_normalize (Vec4i_t v);

/**
 * @brief Normalizes a 4D float vector to a unit vector.
 * @param v Integer vector to normalize.
 * @return Normalized vector with length 1. Returns zero vector if input length
 * is zero.
 */
Vec4f_t vec4f_normalize_full (Vec4f_t v);

/**
 * @brief Normalizes a 4D integer vector to a unit vector as a 4D float vector.
 * @param v Integer vector to normalize.
 * @return Normalized vector with length 1. Returns zero vector if input length
 * is zero.
 */
Vec4f_t vec4i_normalize_full (Vec4i_t v);

/*
 * --------------------------------------------------------------------
 * Vector delta
 * Returns the difference between two vectors (b - a).
 * Can be used to find the vector pointing from a to b.
 * --------------------------------------------------------------------
 */

/**
 * @brief Difference (delta) between two 2D float vectors (b - a).
 * @param a First vector (starting point).
 * @param b Second vector (ending point).
 * @return Vector representing the displacement from a to b.
 */
Vec2f_t vec2f_delta (Vec2f_t a, Vec2f_t b);

/**
 * @brief Difference (delta) between two 2D integer vectors (b - a).
 * @param a First vector (starting point).
 * @param b Second vector (ending point).
 * @return Vector representing the displacement from a to b.
 */
Vec2i_t vec2i_delta (Vec2i_t a, Vec2i_t b);

/**
 * @brief Difference (delta) between two 3D float vectors (b - a).
 * @param a First vector (starting point).
 * @param b Second vector (ending point).
 * @return Vector representing the displacement from a to b.
 */
Vec3f_t vec3f_delta (Vec3f_t a, Vec3f_t b);

/**
 * @brief Difference (delta) between two 3D integer vectors (b - a).
 * @param a First vector (starting point).
 * @param b Second vector (ending point).
 * @return Vector representing the displacement from a to b.
 */
Vec3i_t vec3i_delta (Vec3i_t a, Vec3i_t b);

/**
 * @brief Difference (delta) between two 4D float vectors (b - a).
 * @param a First vector (starting point).
 * @param b Second vector (ending point).
 * @return Vector representing the displacement from a to b.
 * @note w is ignored because it's the homogeneous coordinate.
 */
Vec4f_t vec4f_delta (Vec4f_t a, Vec4f_t b);

/**
 * @brief Difference (delta) between two 4D integer vectors (b - a).
 * @param a First vector (starting point).
 * @param b Second vector (ending point).
 * @return Vector representing the displacement from a to b.
 * @note w is ignored because it's the homogeneous coordinate.
 */
Vec4i_t vec4i_delta (Vec4i_t a, Vec4i_t b);

/**
 * @brief Difference (delta) between two 4D float vectors (b - a).
 * @param a First vector (starting point).
 * @param b Second vector (ending point).
 * @return Vector representing the displacement from a to b.
 */
Vec4f_t vec4f_delta_full (Vec4f_t a, Vec4f_t b);

/**
 * @brief Full difference (delta) between two 4D integer vectors (b - a),
 * including w.
 * @param a First vector (starting point).
 * @param b Second vector (ending point).
 */
Vec4i_t vec4i_delta_full (Vec4i_t a, Vec4i_t b);

/*
 * --------------------------------------------------------------------
 * Vector distance
 * Returns the Euclidean distance between two points/vectors.
 * --------------------------------------------------------------------
 */

/**
 * @brief Calculates the Euclidean distance between two 2D float vectors.
 * @param a First point/vector.
 * @param b Second point/vector.
 * @return Distance computed as the length of (b - a).
 */
float vec2f_distance (Vec2f_t a, Vec2f_t b);

/**
 * @brief Calculates the Euclidean distance between two 2D integer vectors.
 * @param a First point/vector.
 * @param b Second point/vector.
 * @return Distance computed as the length of (b - a).
 */
float vec2i_distance (Vec2i_t a, Vec2i_t b);

/**
 * @brief Calculates the Euclidean distance between two 3D float vectors.
 * @param a First point/vector.
 * @param b Second point/vector.
 * @return Distance computed as the length of (b - a).
 */
float vec3f_distance (Vec3f_t a, Vec3f_t b);

/**
 * @brief Calculates the Euclidean distance between two 3D integer vectors.
 * @param a First point/vector.
 * @param b Second point/vector.
 * @return Distance computed as the length of (b - a).
 */
float vec3i_distance (Vec3i_t a, Vec3i_t b);

/**
 * @brief Calculates the Euclidean distance between two 4D float vectors.
 * @param a First point/vector.
 * @param b Second point/vector.
 * @return Distance computed as the length of (b - a).
 * @note w is ignored because it's the homogeneous coordinate.
 */
float vec4f_distance (Vec4f_t a, Vec4f_t b);

/**
 * @brief Calculates the Euclidean distance between two 4D integer vectors.
 * @param a First point/vector.
 * @param b Second point/vector.
 * @return Distance computed as the length of (b - a).
 * @note w is ignored because it's the homogeneous coordinate.
 */
float vec4i_distance (Vec4i_t a, Vec4i_t b);

/**
 * @brief Calculates the Euclidean distance between two 4D float vectors.
 * @param a First point/vector.
 * @param b Second point/vector.
 * @return Distance computed as the length of (b - a).
 */
float vec4f_distance_full (Vec4f_t a, Vec4f_t b);

/**
 * @brief Calculates the Euclidean distance between two 4D integer vectors.
 * @param a First point/vector.
 * @param b Second point/vector.
 * @return Distance computed as the length of (b - a).
 */
float vec4i_distance_full (Vec4i_t a, Vec4i_t b);

#endif /* VECTOR_H */
