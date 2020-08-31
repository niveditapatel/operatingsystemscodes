l=0
while read t
do
l=$(expr $l + 1)
done < $2
echo "no of lines is $l"
i=1
y=$(expr $l - $1)
while read t
do
if [ $i -ge $y ]
then 
echo $t
fi
i=$(expr $i + 1)

done < $2

