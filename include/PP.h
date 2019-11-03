/*---------------------------------------------------------------------------
   PP.h - Post Processing Header
  ---------------------------------------------------------------------------
   Author: Haixiong Li
   Email: lihaixiong2012 [at] gmail.com
   All rights reserved.
  ---------------------------------------------------------------------------*/
#include "ComFunc.h"
#include "JointWMF.h"

#define MED_SZ 19
#define SIG_CLR 0.1
#define SIG_DIS 9

//
// Weighted-Median Post-processing
//
class PP
{
public:
	PP(void);
	~PP(void);

	void processDM(Mat& lImg, Mat& rImg, Mat& lDisMap, Mat& rDisMap,
					Mat& lValid, Mat& rValid, const int maxDis, int threads);
};

struct WM_row_TD{const Mat* Img; Mat* Dis; uchar *pValid; int y; int maxDis;};

