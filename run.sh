#!/bin/bash

echo "en-GB: ~" > en-GB.yml
echo "zh-CN: ~" > zh-CN.yml

lv_i18n extract -s test.c -t '*.yml'

#cat en-GB.yml
#cat zh-CN.yml

sed -i -e 's/line3": ~/line3": "行1\\n行二\\n行三"/' zh-CN.yml

lv_i18n compile -l en-GB -t '*.yml' -o .

cat lv_i18n.c | grep line1
