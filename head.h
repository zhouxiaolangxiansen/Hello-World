头文件布局如下：
  （1）文件头：文件名、文件简介、版权、版本、作者、日期等声明
  （2）API函数的调用示例
  （3）预处理块定义
  （4）#include区
  （5）常量定义
  （6）全局宏定义
  （7）全局数据类型定义
  （8）全局变量定义
  （9）外部引用定义
  （10）全局函数原型定义
  头文件中声明函数原型应有注释，注释包含函数做什么，它怎么使用和影响参数。如果函数非常复杂，应参考完整的文档。
头文件中只存放“声明”而不存放定义；应在头文件中声明“extern”,不要在代码文件中声明。



示例：
/**                           			//文件头
 * @file time.h
 * @brief the declare of interface about hardware abstract timer
 * @copyright (C) 2020 TWS technology（GuangZhou） Ltd
 * @author Allen.Huang
 * @date 2020-09-014
 * @version 1.0
 */
 
     
 						//（2）API调用示例
						//（3）预处理块定义
#ifndef _TIMER_H			        //（4）#include区		
#define _THMER_H 
#include <math.h>
#include "typedef.h"

const T_S8 MAX_NUMBER;		    		//（5）常量定义

#define LCD_MAIN_TIMER 128; 			//（6）全局宏定义

typedef sreuct				        //（7）全局数据类型定义
{
	T_U32 	nTimeId;
	T_BOOL 	bIsOk;
}T_STU_TIMER;

typedf enum 
{
	EM_ACTIVE;
	EM_INACTIVE;	
}T_TIME_STATE;

extern T_pDATA g_pxxxxx;	    		//（8）全局变量定义

/*							
 * @bried Initialize all physical timer
 * @author Allen.Huang
 * @date 2020-08-06
 * @param in void
 * @return void
 */
T_VOID Hal_Init_Timer(T_VOID);			//（9）全局函数声明

/*
 * @brief Initialize the specified physical timer 
 * @author Steven.Wan
 * @date 2018-01-04
 * @param in uint8_t ucTimeid: timer id 
 * @return bool
 */
T_BOOL Hal_Init_Timer(uint8_t ucTimeid);

#endif
 
