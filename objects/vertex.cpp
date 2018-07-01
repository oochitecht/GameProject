/*--------------------------------------------//
Vertex definition
This is used to simplify definition of points
on a triangular surface of a mesh
//--------------------------------------------*/
#ifndef VERTEX
#define VERTEX
	/*--------------------------------------------//
	Includes
	//--------------------------------------------*/
		#include "vertex.h"

	/*--------------------------------------------//
	Default constructor
	//--------------------------------------------*/
		vertex::vertex():vector(){};

	/*--------------------------------------------//
	Constuctor with positions specified
	//--------------------------------------------*/
		vertex::vertex(double xi, double yi, double zi):vector(xi, yi, zi){};

	/*--------------------------------------------//
	Destructor
	//--------------------------------------------*/
		vertex::~vertex(){};

	/*--------------------------------------------//
	Overridden operators
	//--------------------------------------------*/
		//Arithmetic
			//Addition
				vertex vertex::operator+(const int &other) {
					this->pos[0] += other;
					this->pos[1] += other;
					this->pos[2] += other;
					return (*this);
				};
				vertex vertex::operator+(const float &other) {
					this->pos[0] += other;
					this->pos[1] += other;
					this->pos[2] += other;
					return (*this);
				};
				vertex vertex::operator+(const double &other) {
					this->pos[0] += other;
					this->pos[1] += other;
					this->pos[2] += other;
					return (*this);
				};
				vertex vertex::operator+(const vector &other) {
					this->pos[0] += other.pos[0];
					this->pos[1] += other.pos[1];
					this->pos[2] += other.pos[2];
					return (*this);
				};
			//Subtraction
				vertex vertex::operator-(const int &other) {
					this->pos[0] -= other;
					this->pos[1] -= other;
					this->pos[2] -= other;
					return (*this);
				};
				vertex vertex::operator-(const float &other) {
					this->pos[0] -= other;
					this->pos[1] -= other;
					this->pos[2] -= other;
					return (*this);
				};
				vertex vertex::operator-(const double &other) {
					this->pos[0] -= other;
					this->pos[1] -= other;
					this->pos[2] -= other;
					return (*this);
				};
				vertex vertex::operator-(const vector &other) {
					this->pos[0] -= other.pos[0];
					this->pos[1] -= other.pos[1];
					this->pos[2] -= other.pos[2];
					return (*this);
				};
			//Divison
				vertex vertex::operator/(const int &other) {
					this->pos[0] /= other;
					this->pos[1] /= other;
					this->pos[2] /= other;
					return (*this);
				};
				vertex vertex::operator/(const float &other) {
					this->pos[0] /= other;
					this->pos[1] /= other;
					this->pos[2] /= other;
					return (*this);
				};
				vertex vertex::operator/(const double &other) {
					this->pos[0] /= other;
					this->pos[1] /= other;
					this->pos[2] /= other;
					return (*this);
				};
				vertex vertex::operator/(const vector &other) {
					this->pos[0] /= other.pos[0];
					this->pos[1] /= other.pos[1];
					this->pos[2] /= other.pos[2];
					return (*this);
				};
			//Multiplication
				vertex vertex::operator*(const int &other) {
					this->pos[0] *= other;
					this->pos[1] *= other;
					this->pos[2] *= other;
					return (*this);
				};
				vertex vertex::operator*(const float &other) {
					this->pos[0] *= other;
					this->pos[1] *= other;
					this->pos[2] *= other;
					return (*this);
				};
				vertex vertex::operator*(const double &other) {
					this->pos[0] *= other;
					this->pos[1] *= other;
					this->pos[2] *= other;
					return (*this);
				};
				vertex vertex::operator*(const vector &other) {
					this->pos[0] *= other.pos[0];
					this->pos[1] *= other.pos[1];
					this->pos[2] *= other.pos[2];
					return (*this);
				};		
		//Compairison
			//less than
				bool vertex::operator<(const vector &other) const {
					return (this->pos[0] < other.pos[0] && this->pos[1] < other.pos[1] && this->pos[2] < other.pos[2]);
				};
				bool vertex::operator<(const int &other) const {
					return (this->pos[0] < other && this->pos[1] < other && this->pos[2] < other);
				};
				bool vertex::operator<(const float &other) const {
					return (this->pos[0] < other && this->pos[1] < other && this->pos[2] < other);
				};
				bool vertex::operator<(const double &other) const {
					return (this->pos[0] < other && this->pos[1] < other && this->pos[2] < other);
				};
				bool vertex::operator<=(const vector &other) const {
					return (this->pos[0] <= other.pos[0] && this->pos[1] <= other.pos[1] && this->pos[2] <= other.pos[2]);
				};
				bool vertex::operator<=(const int &other) const {
					return (this->pos[0] <= other && this->pos[1] <= other && this->pos[2] <= other);
				};
				bool vertex::operator<=(const float &other) const {
					return (this->pos[0] <= other && this->pos[1] <= other && this->pos[2] <= other);
				};
				bool vertex::operator<=(const double &other) const {
					return (this->pos[0] <= other && this->pos[1] <= other && this->pos[2] <= other);
				};
			//greater than
				bool vertex::operator>(const vector &other) const {
					return (this->pos[0] > other.pos[0] && this->pos[1] > other.pos[1] && this->pos[2] > other.pos[2]);
				};
				bool vertex::operator>(const int &other) const {
					return (this->pos[0] > other && this->pos[1] > other && this->pos[2] > other);
				};
				bool vertex::operator>(const float &other) const {
					return (this->pos[0] > other && this->pos[1] > other && this->pos[2] > other);
				};
				bool vertex::operator>(const double &other) const {
					return (this->pos[0] > other && this->pos[1] > other && this->pos[2] > other);
				};
				bool vertex::operator>=(const vector &other) const {
					return (this->pos[0] >= other.pos[0] && this->pos[1] >= other.pos[1] && this->pos[2] >= other.pos[2]);
				};
				bool vertex::operator>=(const int &other) const {
					return (this->pos[0] >= other && this->pos[1] >= other && this->pos[2] >= other);
				};
				bool vertex::operator>=(const float &other) const {
					return (this->pos[0] >= other && this->pos[1] >= other && this->pos[2] >= other);
				};
				bool vertex::operator>=(const double &other) const {
					return (this->pos[0] >= other && this->pos[1] >= other && this->pos[2] >= other);
				};
			//equals
				bool vertex::operator==(const vector &other) const {
					return (this->pos[0] == other.pos[0] && this->pos[1] == other.pos[1] && this->pos[2] == other.pos[2]);
				};
				bool vertex::operator==(const int &other) const {
					return (this->pos[0] == other && this->pos[1] == other && this->pos[2] == other);
				};
				bool vertex::operator==(const float &other) const {
					return (this->pos[0] == other && this->pos[1] == other && this->pos[2] == other);
				};
				bool vertex::operator==(const double &other) const {
					return (this->pos[0] == other && this->pos[1] == other && this->pos[2] == other);
				};
				bool vertex::operator!=(const vector &other) const {
					return *this!=other;
				};
				bool vertex::operator!=(const int &other) const {
					return *this!=other;
				};
				bool vertex::operator!=(const float &other) const {
					return *this!=other;
				};
				bool vertex::operator!=(const double &other) const {
					return *this!=other;
				};
		//Assignment
			///=
				vertex vertex::operator/=(const vertex &other){
					this->pos[0] /= other.pos[0];
					this->pos[1] /= other.pos[1];
					this->pos[2] /= other.pos[2];
					return *this;
				}
				vertex vertex::operator/=(const vector &other){
					this->pos[0] /= other.pos[0];
					this->pos[1] /= other.pos[1];
					this->pos[2] /= other.pos[2];
					return *this;
				}
			//*=
				vertex vertex::operator*=(const vertex &other){
					this->pos[0] *= other.pos[0];
					this->pos[1] *= other.pos[1];
					this->pos[2] *= other.pos[2];
					return *this;
				}
				vertex vertex::operator*=(const vector &other){
					this->pos[0] *= other.pos[0];
					this->pos[1] *= other.pos[1];
					this->pos[2] *= other.pos[2];
					return *this;
				}
			//-=
				vertex vertex::operator-=(const vertex &other){
					this->pos[0] -= other.pos[0];
					this->pos[1] -= other.pos[1];
					this->pos[2] -= other.pos[2];
					return *this;
				}
				vertex vertex::operator-=(const vector &other){
					this->pos[0] -= other.pos[0];
					this->pos[1] -= other.pos[1];
					this->pos[2] -= other.pos[2];
					return *this;
				}
			//+=
				vertex vertex::operator+=(const vertex &other){
					this->pos[0] += other.pos[0];
					this->pos[1] += other.pos[1];
					this->pos[2] += other.pos[2];
					return *this;
				}
				vertex vertex::operator+=(const vector &other){
					this->pos[0] += other.pos[0];
					this->pos[1] += other.pos[1];
					this->pos[2] += other.pos[2];
					return *this;
				}
			//==
				vertex vertex::operator=(const vertex &other){
					this->pos[0] = other.pos[0];
					this->pos[1] = other.pos[1];
					this->pos[2] = other.pos[2];
					return *this;
				}
				vertex vertex::operator=(const vector &other){
					this->pos[0] = other.pos[0];
					this->pos[1] = other.pos[1];
					this->pos[2] = other.pos[2];
					return *this;
				}
#endif