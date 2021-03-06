//************** *
//Name: Raymond Rolle
//Date: February 15th, 2021
//Course: ELEC3371-01
//Description: The program carries out successive division of two bytes to perform the division operation
//*************************

int var1,var2,quo,rem  ;

void main() {
asm{
Label1:
       ADD R2,R2,#17 ;           //Add 17 to Register 2
       ADD R3,R3,#8 ;            //Add 8 to Register 3
       ADD R4,R4,#0 ;             //Add 0 to Register 4
       
Label2:
       SUB R2,R2,R3 ;               //Subtract register 2 and 3
       ADD R4,R4,#1 ;               //Add 1 to Register 4
       CMP R2,R3 ;                  //Calculate R2-R3
       BGE Label2 ;                  //Branch if R3 is greater than or equal to R2
     }
}