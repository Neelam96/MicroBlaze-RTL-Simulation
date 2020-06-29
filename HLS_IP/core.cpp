#define H 3
float sum_arr(float* A)
{

	#pragma HLS INTERFACE m_axi depth=9 port=A offset=slave


	#pragma HLS INTERFACE s_axilite port=return

	int i,j,k;



	static float Ain[H*H];


	for(i=0; i<H; i++)
	{
		#pragma HLS pipeline
		for(j=0; j<H; j++)
		{
			#pragma HLS unroll
			Ain[i+(H*j)]=*(A+H*i+j);

		}
	}




	float sum=0;

	for(i=0; i<H; i++)
	{
		for(j=0; j<H; j++)
		{
			#pragma HLS pipeline
			sum = sum+ Ain[i+(H*j)];
		}
	}

return sum;


}
