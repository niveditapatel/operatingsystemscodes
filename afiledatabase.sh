op=0
echo " enter file name"
read f
while [ $op -ne 4 ]
do

echo "1.Insert"
echo "2.search"
echo "3.delete"
echo "4.exit"
read op
case $op in
1) echo "enter the roll no"
read r
echo "enter the name"
read n
echo "enter the city"
read c
a=$(echo "$r;$n;$c")

echo "$a" >> $f
;;
2) echo "enter roll no to search for"
read roll
while read x 
do 
t=$( echo $x| cut -d ";" -f 1)
if [ $roll -eq $t ]
then
echo "found details:"
echo $x
fi
done < $f
;;

3) echo "enter the roll no to delete for"

read roll 
$ sed -i '/$roll/d' $f
;;
esac
done
