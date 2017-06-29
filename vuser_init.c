/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 1203
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../favicon.ico", "Referer=", ENDITEM, 
		"Url=http://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_submit_form("login.pl", 
		"Snapshot=t6.inf", 
		ITEMDATA, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=44", ENDITEM, 
		"Name=login.y", "Value=16", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t7.inf", 
		LAST);

	web_submit_form("reservations.pl", 
		"Snapshot=t8.inf", 
		ITEMDATA, 
		"Name=depart", "Value=London", ENDITEM, 
		"Name=departDate", "Value=06/30/2017", ENDITEM, 
		"Name=arrive", "Value=Denver", ENDITEM, 
		"Name=returnDate", "Value=07/01/2017", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=40", ENDITEM, 
		"Name=findFlights.y", "Value=10", ENDITEM, 
		LAST);

	return 0;
}