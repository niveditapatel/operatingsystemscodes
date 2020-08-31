echo "enter the no of nos"
read n
a=1 
b=1
echo $a
echo $b
for i in `seq 3 1 $n`
do
c=$(./a.out 1 $a $b)
echo $c
a=$b
b=$c

done
