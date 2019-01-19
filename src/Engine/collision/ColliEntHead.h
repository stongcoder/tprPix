/*
 * ========================= ColliEntHead.h ==========================
 *                          -- tpr --
 *                                        创建 -- 2019.01.19
 *                                        修改 -- 2019.01.19
 * ----------------------------------------------------------
 *    action:: J.png 往往会携带 数个 ColliEntHead 信息点。
 *    本结构是对这个 信息点的 描述。
 *    因为这组信息往往会 存储在一起: action.framePos.colliEntHead
 *    ----
 *    这个 struct 名字不够好，后期可能会被修改
 * ----------------------------
 */
#ifndef _TPR_COLLI_ENT_HEAD_H_
#define _TPR_COLLI_ENT_HEAD_H_

//-------------------- Engine --------------------//
#include "PixVec.h"
#include "AltiRange.h"
#include "MapCoord.h"


class ColliEntHead{
public:
    int         colliEntSetIdx; 
                            //- ces预制件 idx号
    PixVec2     colliEntHeadPPosOff; 
                            //-- 从图元帧 左下角，到 colliEntHead 像素点 的 offPos
                            //   *** 注意，此值可为 任意整形值，不用对齐于 mapEnt ***
    AltiRange   lAltiRange;
                            //- 和 colliEntHead 对应，记载每一个 ces实例 携带的 高度区间信息
                            //-- 仅仅是 相对高度区间 

    //---- funcs ------//
    inline void clear_all(){
        colliEntSetIdx = 0;
        colliEntHeadPPosOff.clear_all();
        lAltiRange.clear_all();
    }
};

#endif 
