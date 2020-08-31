echo "enter the number n"
read n
echo "prime numbers are"
for i in `seq 2 1 $n'
do
for j in `seq 2 2 $i'
do
c=$(./a.out 5 $n j)
if [ $c -ne 0 ]
then 
 j=$(./a.out 2 $j 1)
else 
 break
fi
done
if [ $c -ne 0 ]
then 
echo " $i"
fi 
i=$(./a.out 2 $i 1)
done

~
~
~               
