#ifndef _macros_h
#define _macros_h

#define set_bit(reg,index) reg|=(1<<index)
#define clr_bit(reg,index) reg&=(~(1<<index))
#define get_bit(reg,index) ((reg>>index)&0x01)
///toggle reg ^=(1<<bitname)
#define toggle_bit(reg,index) reg^=(1<<index)
#endif