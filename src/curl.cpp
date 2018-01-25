//https://curl.haxx.se/libcurl/c/  curl help
#include <iostream>
#include <stdio.h>
#include <curl/curl.h>

using namespace std;


int main()
{
	
	cout << "this start"<<endl;
	cout << curl_version()<<endl;
	CURL *curl = curl_easy_init();
	if(curl) {
	  char *output = curl_easy_escape(curl, "data to convert", 15);
	  if(output) 
		{
 			printf("Encoded: %s\n", output);
			curl_free(output);
  		}
	}
	return 0;

}
