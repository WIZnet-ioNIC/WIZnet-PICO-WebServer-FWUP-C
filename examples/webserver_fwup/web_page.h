
#ifndef _WEB_PAGE_H_
#define _WEB_PAGE_H_

#define index_page  \
"<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">"  \
"<html xmlns=\"http://www.w3.org/1999/xhtml\">"  \
"<!-- DW6 -->"  \
"<head>"  \
"<!-- Copyright 2005 Macromedia, Inc. All rights reserved. -->"  \
"<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">"  \
"<html xmlns=\"http://www.w3.org/1999/xhtml\">"  \
"<!-- DW6 -->"  \
"<head>"  \
"<!-- Copyright 2005 Macromedia, Inc. All rights reserved. -->"  \
"<meta http-equiv=\"Content-Type\" content=\"text/html; charset=gb2312\" />"  \
"<link rel=\"stylesheet\" href=\"style.css\" type=\"text/css\" />"  \
"<script type=\"text/JavaScript\">"  \
"\r\n\r\n"  \
"function UpGrade()"  \
"{"  \
"	if (document.FirmWareUpgrade.file.value == \"\")"  \
"	{"  \
"		alert(\"No file!\");"  \
"		return ;"  \
"	}"  \
"	if(confirm('Update?')){"  \
"	   document.FirmWareUpgrade.submit() ;"  \
"	}"  \
"}"  \
"</script>"  \
"</head>"  \
"<body>"  \
"<BR><BR>"  \
"<div id=\"pagecell1\" style=\"width:800;height=800\" align=\"center\">"  \
"  <!--pagecell1-->"  \
"  <div id=\"content\">"  \
"    <form action=\"update_firmware.cgi\" method=\"post\" enctype=\"multipart/form-data\" name=\"FirmWareUpgrade\" id=\"form1\">   "  \
"    <div class=\"story\"> "  \
"      <table width=\"400\" border=\"0\" cellpadding=\"0\" cellspacing=\"5\">"  \
"          <tr><td height=\"10\" colspan=\"2\"></td></tr>"  \
"		  <tr>"  \
"            <td width=\"120\" align=\"right\">File:</td>"  \
"            <td align=\"left\"><input type=\"file\" name=\"file\" /></td>"  \
"          </tr>"  \
"		  <tr><td height=\"10\" colspan=\"2\"></td></tr>"  \
"		  <tr>"  \
"            <td height=\"20\" colspan=\"3\" align=\"center\" valign=\"top\">"  \
"              <label>"  \
"                <input name=\"Save\" style=\"width: 80px; height: 40px;\" type=\"button\" id=\"Save\" onClick=\"UpGrade()\" value=\"Upgrade\" />	  "  \
"              </label>&nbsp;&nbsp;</td>"  \
"		  </tr>"  \
"		  <tr><td height=\"10\" colspan=\"2\"></td></tr>"  \
"        </table>"  \
"    </div>"  \
"	</form>"  \
"  </div>"  \
""  \
"</div>"  \
"<!--end pagecell1-->"  \
"<br />"  \
"</body>"  \
"</html>\0"

#endif /* _WEB_PAGE_H_ */
