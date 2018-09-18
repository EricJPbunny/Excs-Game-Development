#ifndef HEAD_H
#define HEAD_H

template <class V>
class vec3 
{
private:
	V x, y, z;
public:
	vec3(){};
	vec3(V x, V y, V z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	vec3(V x, V y, V z, V x0, V y0, V z0)
	{
		this->x = x-x0;
		this->y = y-y0;
		this->z = z-z0;
	}
	vec3 operator+(const vec3& v) 
	{
		vec3 vec;
		vec.x = this->x + v.x;
		vec.y = this->y + v.y;
		vec.z = this->z + v.z;
		return vec;
	}
	vec3 operator-(const vec3& v)
	{
		vec3 vec;
		vec.x = this->x - v.x;
		vec.y = this->y - v.y;
		vec.z = this->z - v.z;
		return vec;
	}
	void operator+=(const vec3& v)
	{
		this->x = this->x + v.x;
		this->y = this->y + v.y;
		this->z = this->z + v.z;
	}
	void operator-=(const vec3& v)
	{
		this->x = this->x - v.x;
		this->y = this->y - v.y;
		this->z = this->z - v.z;
	}
	bool operator==(const vec3& v)
	{
		if (this->x == v.x &&this->y == v.y &&this->z == v.z) 
		{
			return true;
		}
		return false;
	}
	void zero() 
	{
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}
	bool is_zero() 
	{
		if (this->x == 0 &&this->y == 0 &&this->z == 0)
		{
			return true;
		}
		return false;
	}
	void normalize() 
	{
		V aux = sqrt(pow(this->x,2)+ pow(this->y, 2)+ pow(this->z, 2));
		this->x = this->x / aux;
		this->y = this->y / aux;
		this->z = this->z / aux;
	}
	V DistanceTo(const vec3& v3) {
		V dist;
		vec3 v1;
		v1.x = -this->x + v3.x;
		v1.y = -this->y + v3.y;
		v1.z = -this->z + v3.z;
		dist = sqrt(pow(v1.x, 2) + pow(v1.y, 2) + pow(v1.z, 2));
		return dist;
	}
};


#endif
