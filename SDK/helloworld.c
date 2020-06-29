#include <xparameters.h>
#include <xsum_arr.h>   //header file inside <path-to-bsp-folder for sdk application project>/microblaze_0/include to include files related to HLS IP
#include <stdio.h>
#include "platform.h"
#include "xil_printf.h"

int main()
{
    init_platform();

    static float arr[9] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};

    union{
    unsigned int a;
    float b;
    }itof;

    for(int i=0;i<9;i++)
    {
    itof.b=arr[i];
    Xil_Out32 (XPAR_BRAM_0_BASEADDR+(4*i),itof.a);
    }

    Xil_Out32 ((XPAR_SUM_ARR_0_S_AXI_AXILITES_BASEADDR+0x18), XPAR_BRAM_0_BASEADDR);	//Sending image pointer address using offset

    Xil_Out32 ((XPAR_SUM_ARR_0_S_AXI_AXILITES_BASEADDR+0x00), 1);				//Start the IP

    while (0 == (2 & Xil_In32((XPAR_SUM_ARR_0_S_AXI_AXILITES_BASEADDR+0x00))));		//To check IP is done or not

    itof.a=Xil_In32 ((XPAR_SUM_ARR_0_S_AXI_AXILITES_BASEADDR + 0x10));	//Receiving returned value from HLS IP (converting because processor handles uint data) using address offset for returned argument

    cleanup_platform();
    return 0;
}
