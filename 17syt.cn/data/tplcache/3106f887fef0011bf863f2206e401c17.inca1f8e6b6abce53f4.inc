<?php
$z[0]=Array("arcurl","",29,44);
$z[1]=Array("litpic","",86,101);
$z[2]=Array("title","",110,124);
$z[3]=Array("arcurl","",229,244);
$z[4]=Array("title","",262,276);
$z[5]=Array("pubdate","",323,370);
$z[5][4]['function']="MyDate('Y-m-d',@me)";
$z[6]=Array("typelink","",380,397);
$z[7]=Array("id","\r\n                          global \$cfg_cmspath;\r\n                          \$tags = GetTags(@me);\r\n                          \$revalue = '';\r\n                          \$tags = explode(',', \$tags);\r\n                          foreach(\$tags as \$key => \$value){\r\n                          if(\$value){\r\n                              \$revalue .= '<a href=\"'.\$cfg_cmspath.'/tags.php?/'.\$value.'/\">'.\$value.'</a> ';\r\n                              }\r\n                          }\r\n                          @me = \$revalue;\r\n                     ",488,1057);
$z[7][4]['runphp']="yes";

?>