typedef unsigned char T_U8;     //unsigned 8 bit integer，使用T_U8代替unsigned char
typedef unsigned short T_U16;   //unsigned 16 bit integer
typedef unsigned long T_U32;    //unsigned 32 bit integer
typedef signed char T_S8;       //signed 8 bit integer
typedef signed short T_S16;     //signed 16 bit integer
typedef signed long T_S32;      //signed 32 bit integer

typedef void T_VOID;            //void
typedef T_U8 T_BOOL;            //boolean type
typedef T_VOID* T_pVOID;        //pointer of void data
typedef T_S8* T_pSTR;           //pointer of string
typedef T_U8* T_pDATA;          //pointer of data

#define AK_FALSE    0
#define AK_TRUE     1
#define AK_NULL     ((T_VOID*)0)

#define T_U8_MAX    ((T_U8)0xff)                //maximun T_U8 value
#define T_U16_MAX   ((T_U16)0xffff)             //maximun T_U16 value
#define T_U32_MAX   ((T_U32)0xfffffffff)        //maximun T_U32 value
#define T_S8_MIN    ((T_S8)(-127-1))            //minimun T_S8 value
#define T_S8_MAX    ((T_S8)127)                 //maximun T_S8 value
#define T_S16_MIN   ((T_S16)(-32767L-1L))       //minimux T_S16 value
#define T_S16_MAX   ((T_S16)32767L)             //maximun T_S16 value
#define T_S32_MIN   ((T_S32)(-2147483647L-1L))  //minimun T_S32 value
#defien T_S32_MAX   ((T_S32)2147483647L)        //maximun T_S32 value
