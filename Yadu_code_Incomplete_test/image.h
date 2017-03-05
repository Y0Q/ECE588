struct Image{
	
	int 	width;
	int 	height;
	float* 	data;
	
	Image(int w,int h){
			width 	= w;
			height 	= h;
			data 	= new float[4 * width * height];
	}
	
	//Clearing the image to predefined rgb based on scene
	void clear(float r, float g, float b, float a){
		int numPixels = width * height;
        float* ptr = data;
        for (int i=0; i<numPixels; i++) {
            ptr[0] = r;
            ptr[1] = g;
            ptr[2] = b;
            ptr[3] = a;
            ptr += 4;
        }		 
	}
};
