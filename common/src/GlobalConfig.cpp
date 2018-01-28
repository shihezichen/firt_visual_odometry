/**
* This file is part of FVO.
* GlobalConfig: store the global configuration items for all class
 *
 * Author: Arhtur.Chen
 * Email: shihezichen@live.cn
 * Created: 27th Jan, 2018
*/


#include "fvo/GlobalConfig.h"

namespace fvo {
    namespace G {

        // Original image size
        int imageWidth = 752;
        int imageHeight = 480;

        // ORB Extractor 阈值
        int initTHFAST = 20;     // 初始门限
        int minTHFAST = 5;       // 纹理较差时使用的门限
        int nFeatures = 100;     // 特征点数量

        // camera parameters
        float fx = 0;
        float fy = 0;
        float cx = 0;
        float cy = 0;
        float bf = 0;

        // viewer parameters
        int viewerHeight = 0;
        int viewerWidth  = 0;
        int UI_WIDTH = 0;

    } // end of namespace
} // end of namespace