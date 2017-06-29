Action()
{

	web_url("favicon.ico", 
		"URL=http://www.bing.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("favicon.ico_2", 
		"URL=http://www.bing.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_submit_form("login.pl", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=56", ENDITEM, 
		"Name=login.y", "Value=6", ENDITEM, 
		LAST);

	return 0;
}