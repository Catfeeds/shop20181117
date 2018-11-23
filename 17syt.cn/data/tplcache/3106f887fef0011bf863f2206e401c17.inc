<li>
              <a href="[field:arcurl/]" target="_blank" class="thumb"><img src="[field:litpic/]" title="[field:title/]" class="img-responsive article" /></a>
              <p>
                <span class="title"><a href="[field:arcurl/]" target="_blank">[field:title/]</a></span>
                <span class="rel">[field:pubdate function="MyDate('Y-m-d',@me)"/]<u>•</u>[field:typelink/]</span>
                <span class="tags">
                	标签：
                	[field:id runphp='yes']
                          global $cfg_cmspath;
                          $tags = GetTags(@me);
                          $revalue = '';
                          $tags = explode(',', $tags);
                          foreach($tags as $key => $value){
                          if($value){
                              $revalue .= '<a href="'.$cfg_cmspath.'/tags.php?/'.$value.'/">'.$value.'</a> ';
                              }
                          }
                          @me = $revalue;
                     [/field:id]    
                </span>
              </p>
            </li>