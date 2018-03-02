/*--------------------------------------------//
Angles definition
This is used to simplify definition of angles
//--------------------------------------------*/
#ifndef ANGLES
#define ANGLES
class angles{
	public:
		double p;
		double y;
		double r; 
		/*--------------------------------------------//
		Default constructor
		//--------------------------------------------*/
		angles(){
			p = 0;
			y = 0;
			r = 0;
		};

		/*--------------------------------------------//
		Constuctor with angles specified
		//--------------------------------------------*/
		angles(double pi, double yi, double ri):angles(){
			p = pi;
			y = yi;
			r = ri;
		};

		/*--------------------------------------------//
		Destructor
		//--------------------------------------------*/
		~angles(){};

		/*--------------------------------------------//
		Overridden operators
		//--------------------------------------------*/
		angles operator+(const angles &other) {
			this->p += other.p;
			this->y += other.y;
			this->r += other.r;
			return (*this);
		};
		bool operator==(const angles &other) const {
			return (this->p == other.p && this->y == other.y && this->r == other.r);
		};
		bool operator==(const int &other) const {
			return (this->p == other && this->y == other && this->r == other);
		};
		bool operator!=(const angles &other) const {
			return *this!=other;
		};
};
#endif