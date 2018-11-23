<?php
/**
 *
 * 首页的提交
 *
 * @version        $Id: guestbook.php 1 10:09 2010-11-10 tianya $
 * @package        DedeCMS.Site
 * @copyright      Copyright (c) 2007 - 2010, DesDev, Inc.
 * @license        http://help.dedecms.com/usersguide/license.html
 * @link           http://www.dedecms.com
 */
$action = $_POST['action'];
$apiUrl = 'http://api.51syt.cn';
if($action=='city_partners')
{
    $url = $apiUrl.'/web/cityPartners';
    $post_data = array(
        'company' => trim($_POST['company']),
        'city' => trim($_POST['city']),
        'name' => trim($_POST['name']),
        'phone' => trim($_POST['phone']),
    );
}elseif ($action=='demand'){
    $url = $apiUrl.'/web/demand';
    $post_data = array(
        'entry_name' => trim($_POST['entry_name']),
        'budget' => trim($_POST['budget']),
        'type' => trim($_POST['type']),
        'real_name' => trim($_POST['real_name']),
        'phone' => trim($_POST['phone']),
    );
}else{
    $arrResponse = array(
        'info' => '参数不正确，请重新再试！',
        'status' => 0
    );
    header('Content-Type:application/json; charset=utf-8');
    exit(json_encode($arrResponse,JSON_UNESCAPED_UNICODE));
}
$arrTemp = array();
foreach ($post_data as $k=>$v){
    $arrTemp[] = "{$k}={$v}";
}
$strPostData = implode('&',$arrTemp);

$ch = curl_init();
curl_setopt($ch, CURLOPT_URL, $url);
curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);

// 设置请求为post类型
curl_setopt($ch, CURLOPT_POST, 1);
// 添加post数据到请求中
curl_setopt($ch, CURLOPT_POSTFIELDS, $strPostData);

// 执行post请求，获得回复
$response= curl_exec($ch);

curl_close($ch);
$arrResponse = json_decode($response,true);
if (!$arrResponse){
    $arrResponse = array(
        'info' => '系统错误~',
        'status' => 0
    );
}
header('Content-Type:application/json; charset=utf-8');
exit(json_encode($arrResponse,JSON_UNESCAPED_UNICODE));