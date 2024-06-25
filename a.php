#!/usr/bin/php
<?php
foreach (file('/usr/share/dict/words') as $line) {
  if (strpos($line, 'xy') !== false) {//strops関数で文字列"xy"が含まれるかを判定。条件条を!==にすることで文字列の先頭にある場合でも対応可能。
    echo "$line"; //文字列xyが含まれる場合に$lineを表示する
  }
}
?>
