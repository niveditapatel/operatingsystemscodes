
n=0
while read t 
do 

if [ $n -ne $1 ]
then echo $t
n=$(expr $n + 1)
fi
done < $2 
