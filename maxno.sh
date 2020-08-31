echo "enter number1"
read a
echo"enter number 2"
read b
echo "enter number 3"
read c
 max=$a
if [ $c -gt $max ]
then max=$c
elif [ $b -gt $max ]
then max=$b
fi
echo "max no is $max "

