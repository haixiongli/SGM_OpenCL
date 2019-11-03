/*---------------------------------------------------------------------------
   CVF.h - Cost Volume Filter Header
  ---------------------------------------------------------------------------
   Author: Haixiong Li
   Email: lihaixiong2012 [at] gmail.com
  ---------------------------------------------------------------------------*/
#include "ComFunc.h"

//
// GIF for Cost Computation
//
class CVF
{
public:

	CVF();
	~CVF();

	static void *filterCV_thread(void *thread_arg);
	int preprocess(const Mat& Img, Mat* Img_rgb, Mat* mean_Img, Mat* var_Img);
	int filterCV(const Mat* Img_rgb, const Mat* mean_Img, const Mat* var_Img, Mat& costVol);
};
Mat GuidedFilter_cv(const Mat* rgb, const Mat* mean_I, const Mat* var_I, const Mat& p);

//CVF thread data struct
struct filterCV_TD{Mat* Img_rgb; Mat* mean_Img; Mat* var_Img; Mat* costVol;};
