<?php
$z[0]=Array("field","",81,100);
$z[0][4]['name']="title";
$z[1]=Array("global","",101,127);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",172,201);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",245,303);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("global","",530,559);
$z[4][4]['name']="cfg_templeturl";
$z[5]=Array("global","",624,653);
$z[5][4]['name']="cfg_templeturl";
$z[6]=Array("global","",738,767);
$z[6][4]['name']="cfg_templeturl";
$z[7]=Array("global","",840,869);
$z[7][4]['name']="cfg_templeturl";
$z[8]=Array("global","",921,950);
$z[8][4]['name']="cfg_templeturl";
$z[9]=Array("global","",1107,1136);
$z[9][4]['name']="cfg_templeturl";
$z[10]=Array("global","",1259,1288);
$z[10][4]['name']="cfg_templeturl";
$z[11]=Array("channel","\r\n            <li><a href=\"[field:typeurl/]\">[field:typename/]</a></li>\r\n            ",1518,1740);
$z[11][4]['type']="top";
$z[11][4]['currentstyle']="<li class='active'><a href='~typelink~' style='color:white;'>~typename~</a></li>";
$z[12]=Array("field","",2270,2289);
$z[12][4]['name']="title";
$z[13]=Array("list","\r\n        	<li>\r\n              <a href=\"[field:arcurl/]\" target=\"_blank\" class=\"thumb\"><img src=\"[field:litpic/]\" title=\"[field:title/]\" class=\"img-responsive article\" /></a>\r\n              <p>\r\n                <span class=\"title\"><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></span>\r\n                <span class=\"rel\">[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]<u>•</u>[field:typelink/]</span>\r\n                <span class=\"tags\">\r\n                	标签：\r\n                	[field:id runphp='yes']\r\n                          global \$cfg_cmspath;\r\n                          \$tags = GetTags(@me);\r\n                          \$revalue = '';\r\n                          \$tags = explode(',', \$tags);\r\n                          foreach(\$tags as \$key => \$value){\r\n                          if(\$value){\r\n                              \$revalue .= '<a href=\"'.\$cfg_cmspath.'/tags.php?/'.\$value.'/\">'.\$value.'</a> ';\r\n                              }\r\n                          }\r\n                          @me = \$revalue;\r\n                     [/field:id]    \r\n                </span>\r\n              </p>\r\n            </li>\r\n            ",2397,3584);
$z[13][4]['pagesize']="10";
$z[14]=Array("pagelist","",3702,3758);
$z[14][4]['listitem']="pre,next,pageno";
$z[14][4]['listsize']="5";

?>