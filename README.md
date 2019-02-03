XMC_PEPPA  
===  

## @brief:  
Using Digital Oscilloscope to show your peppa  
Based on Infineon XMC4500 with the help of DAVE CE lib  
 --- Infineon XMC4500 serial ARM Cortex-M4 MCU ---

## @Materials:  
- XMC4500 Relax Kit  
- Digital Oscilloscope  
- Python3 with opencv & numpy supported (Windows or Linux)

## @Directions: 
### 1. clone the repo
	> git clone https://github.com/hit-hanbo/XMC_Peppa.git
	> cd XMC_Peppa
	
### 2. copy your image "image" here, make sure that there is less than 1024 black pixels on the picture.
	> python3 peppa_generator.py image
	then it will show the X & Y info
	
### 3. import DACE project, edit "peppa.h", copy x_list&y_list to the placeholder, and then set the HB_LUT_LEN with the X & Y info, build the project & download to XMC4500
	   
### 4. put your osc probe on P14.8 & P14.9, OjbK
