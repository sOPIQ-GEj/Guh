#include <vector>

std::vector<int> guh(int num, std::vector<int>& vec)
{
	for (int i = 0; i < vec.size(); i++) {
		vec[i] += num;
	}
	return vec;
}