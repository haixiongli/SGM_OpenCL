/*---------------------------------------------------------------------------
   DispSel.h - Disparity Selection Header
  ---------------------------------------------------------------------------
   Author: Haixiong Li
   Email: lihaixiong2012 [at] gmail.com
  ---------------------------------------------------------------------------*/
#include "ComFunc.h"

class DispSel
{
public:
	DispSel();
	~DispSel();

	int CVSelect(cv::Mat* costVol, const unsigned int maxDis, cv::Mat& dispMap);
	int CVSelect_thread(cv::Mat* costVol, const unsigned int maxDis, cv::Mat& dispMap, int threads);
};

struct DS_X_TD{Mat* costVol; cv::Mat* dispMap; int y; unsigned int maxDis;};
