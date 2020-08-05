#ifndef __MESH__
#define __MESH__

#include <vector>

class NODE
{
public:
	double x;
	double y;
	double z;
};

class FACE
{
public:
	std::vector<NODE> node_vect;
	std::vector<NODE> ordered_node_vect;
	int l_cell;
	int r_cell;
};

class CELL
{
public:
	std::vector<NODE> nodelist;
	std::vector<FACE> facelist;
};


class MESH
{
public:
	int NCELL;
	std::vector<CELL> cells;
	std::vector<FACE> faces;
	std::vector<NODE> nodes;
	int READ_MSH(char* filename);
};




#endif