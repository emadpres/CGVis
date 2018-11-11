#include "PointHelper.h"
using namespace CG;

#include <random>

std::vector<Point> PointHelper::Generate(int n, int x_range_start, int x_range_end, int y_range_start, int y_range_end)
{
	std::vector<CG::Point> generatedPoints;
	std::random_device rd;
	std::mt19937 mt(1370); //1370: deterministic or rd(): non-determinstic 32-bit seed
	std::uniform_int_distribution<int> dist_x(x_range_start, x_range_end);
	std::uniform_int_distribution<int> dist_y(y_range_start, y_range_end);
	for (int i = 0; i < n; ++i) {
		int x = dist_x(mt), y = dist_y(mt);
		generatedPoints.push_back(CG::Point(x, y));
	}
	return generatedPoints;
}
