#include <iostream>
#include <string>

//The program will decipher two text strings which use Caesar's cipher
//The character set is const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
//The two cipher strings are "uIFzBOLTbSFbMTPlOPXObTuIFcSPOYcPNCFST" "dBFTBSdJQIFSfYFSDJTFxJUIdqMVTqMVT"
//The program will figure out the shift number then decipher and print the plain text for both

using namespace std;

int main(){


  const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";


	string text = "uIFzBOLTbSFbMTPlOPXObTuIFcSPOYcPNCFST";
	string text2 = "dBFTBSdJQIFSfYFSDJTFxJUIdqMVTqMVT";



    string letters = alphabet;

    int size = letters.size();


     string plain;
     int found =-1;
     int j =1;



       while(found == -1){



              for (int i = 0; i < j; i++)
		    {

		       string a = string() + letters[i];
		        letters.append(a);

		   }




	    for (int i = 0; i < size; i++)
	    {

	        letters[i] = letters[i +j];

	   }





	    for (int i = 0; i < text.size(); i++)
	   	  	    {


	   	    	int found = letters.find(text[i]);

	   	  	   string b = string() + alphabet[found];
	   	  	  		        plain.append(b);
	   	  	   }


	    found = plain.find("Yanks");

	    if (found != -1)
	    	break;


           j++;
	       letters = alphabet;
	       plain.clear();



       }



   //////////////////////////////////////

     cout<<"Shift Number: " << j <<endl;


            for (int i = 0; i < plain.size(); i++)
   	   	  	    {

                   cout << plain[i];

   	   	  	   }


            cout<< "" <<endl;
            string plain2;


            for (int i = 0; i < text2.size(); i++)
            	  {


            	   	 	   int found = letters.find(text2[i]);
            	   	  	    string c = string() + alphabet[found];
            	   	  	  		        plain2.append(c);
            	   	  	   }


            for (int i = 0; i < plain2.size(); i++)
              	   	  	    {

                              cout << plain2[i];

              	   	  	   }





}
