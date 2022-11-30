echo Enter your salary
read sal
echo Enter your grade
read gra

if (($gra > 15))
then
	bonus=$(( sal / 2 ))
	echo "Your salary is $(( sal + bonus ))"
else
	bonus=$(( sal / 4 ))
	echo "Your salary is $(( sal + bonus ))"
fi
