echo "enter the number"
read n
d=$n
while [ $d -ne 0 ]
do
d=$(./a.out 3 $d 10)
c=$(./a.out 5 $d 10)
echo $c
done
