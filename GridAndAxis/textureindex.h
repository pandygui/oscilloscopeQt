#ifndef TEXTUREINDEX_H
#define TEXTUREINDEX_H
//保存网格数字，小数点，负号，xyz的texture索引信息
//数字Index
const float digitsIndex[80] =
{
    //0
    0.734375, 0.265625,
    0.734375, 0.015625,
    0.921875, 0.015625,
    0.921875, 0.265625,
    //1
    0.1875, 0.984375,
    0.1875, 0.734375,
    0.375, 0.734375,
    0.375, 0.984375,
    //2
    0.421875, 0.984375,
    0.421875, 0.734375,
    0.609375, 0.734375,
    0.609375, 0.984375,
    //3
    0.640625, 0.984375,
    0.640625, 0.734375,
    0.828125, 0.734375,
    0.828125, 0.984375,
    //4
    0.1875, 0.625,
    0.1875, 0.375,
    0.375, 0.375,
    0.375, 0.625,
    //5
    0.421875, 0.625,
    0.421875, 0.375,
    0.609375, 0.375,
    0.609375, 0.625,
    //6
    0.640625, 0.625,
    0.640625, 0.3755,
    0.828125, 0.375,
    0.828125, 0.625,
    //7
    0.078125, 0.265625,
    0.078125, 0.015625,
    0.265625, 0.015625,
    0.265625, 0.265625,
    //8
    0.296875, 0.265625,
    0.296875, 0.015625,
    0.484375, 0.015625,
    0.484375, 0.265625,
    //9
    0.515625, 0.265625,
    0.515625, 0.015625,
    0.703125, 0.015625,
    0.703125, 0.265625
};
//小数点, 负号索引
const float pointIndex[8] = {
    0, 1,
    0, 0,
    1, 0,
    1, 1
};
//xyz的texture索引信息
const float labelIndex[32] = {
    //x
    0.0, 1.0,
    0.0, 0.5,
    0.33, 0.5,
    0.33, 1.0,
    //y
    0.33, 1.0,
    0.33, 0.5,
    0.66, 0.5,
    0.66, 1.0,
    //z
    0.66, 1.0,
    0.66, 0.5,
    1.0, 0.5,
    1.0, 1.0,
    //"/"
    0.0, 0.5,
    0.0, 0.0,
    0.35, 0.0,
    0.35, 0.5
};

#endif // TEXTUREINDEX_H
