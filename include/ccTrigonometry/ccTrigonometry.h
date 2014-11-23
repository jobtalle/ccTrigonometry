//__________________________________________________________________________________//
//                                                                                  //
//           _______   _                                        _                   //
//          |__   __| (_)                                      | |                  //
//      ___ ___| |_ __ _  __ _  ___  _ __   ___  _ __ ___   ___| |_ _ __ _   _      //
//     / __/ __| | '__| |/ _` |/ _ \| '_ \ / _ \| '_ ` _ \ / _ \ __| '__| | | |     //
//    | (_| (__| | |  | | (_| | (_) | | | | (_) | | | | | |  __/ |_| |  | |_| |     //
//     \___\___|_|_|  |_|\__, |\___/|_| |_|\___/|_| |_| |_|\___|\__|_|   \__, |     //
//                        __/ |                                           __/ |     //
//                       |___/                                           |___/  1.0 //
//             Copyright (C) 2014 \ Job Talle (job@ccore.org)                       //
//__________________________________________________________________________________//
//                                                                                  //
//      This program is free software: you can redistribute it and/or modify        //
//      it under the terms of the 3-clause BSD license.                             //
//                                                                                  //
//      You should have received a copy of the 3-clause BSD License along with      //
//      this program. If not, see <http://opensource.org/licenses/>.                //
//__________________________________________________________________________________//

#pragma once

#include <math.h>

#define CC_TRI_PI_QUARTER  0.785398
#define CC_TRI_PI_HALF     1.570796
#define CC_TRI_PI          3.141593
#define CC_TRI_PI_DOUBLE   6.283185

#define ccTriSquared(x)  ((x) * (x))
#define ccTriCubed(x)    (ccTriSquared(x) * (x))

#define ccTriDegToRad(x) ((x) * 0.017453)
#define ccTriRadToDeg(x) ((x) * 57.295780)

#define ccTriDistance(x1, y1, x2, y2) sqrt(ccTriSquared(x1 - x2) + ccTriSquared(y1 - y2))