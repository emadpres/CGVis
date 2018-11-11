#ifndef __POINTER_HELPER_H__
#define __POINTER_HELPER_H__
#include "Point.h"
#include <vector>

namespace CG {
	class PointHelper
	{
		PointHelper() = delete;
	public:
		static std::vector<CG::Point> Generate(int n, int x_range_start, int x_range_end, int y_range_start, int y_range_end);

	};
}
#endif __POINTER_HELPER_H__

