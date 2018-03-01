/**
 * @package     decoder.cpp
 * @author      Francisco Delgadillo
 * @copyright   (C) 2005 - 2015 Open Source Matters. All rights reserved.
 * @license     http://www.gnu.org/licenses/old-licenses/gpl-2.0-standalone.html   
 * @link        http://github.....
 * 
 * File to open large signals for systemC
 */
#include "decoder.h"

using namespace std;

typedef struct flit {
    unsigned int crc  : 16;
    unsigned int s01f : 11;
    unsigned int s2   : 18;
    unsigned int s1_0 : 32;
    unsigned int s1_1 : 32;
    unsigned int s1_2 :  6;
    unsigned int s0_0 : 32;
    unsigned int s0_1 : 32;
    unsigned int s0_2 :  8;
    unsigned int fc_tx:  5;
} flit_str;

int main()
{
    flit_str null_flit = 0xc00000c00000c00000400000600000200000600000e0a6b7;
    
    cout<<"crc  ="<< hex << null_flit.crc  ;
    cout<<"s01f ="<< hex << null_flit.s01f ;
    cout<<"s2   ="<< hex << null_flit.s2   ;
    cout<<"s1_0 ="<< hex << null_flit.s1_0 ;
    cout<<"s1_1 ="<< hex << null_flit.s1_1 ;
    cout<<"s1_2 ="<< hex << null_flit.s1_2 ;
    cout<<"s0_0 ="<< hex << null_flit.s0_0 ;
    cout<<"s0_1 ="<< hex << null_flit.s0_1 ;
    cout<<"s0_2 ="<< hex << null_flit.s0_2 ;
    cout<<"fc_tx="<< hex << null_flit.fc_tx;
    

    return 0;
}
