#1/bin/bash
count=0
number=0
while read line
do
	count=$(($count+1))
	number=$(($number+$line))
	average=$(($number/$count))
done
echo $count
echo $average
