echo -----------------------------------------

echo 'tCalculate Electricity Charge'

echo -----------------------------------------

echo Enter the unit

read unit



if [ $unit -gt 0 ] && [ $unit -le 300 ]

then

    charge=$(( $unit * 2))

    echo $charge



elif [ $unit -gt 300 ] && [ $unit -le 500 ]

then

    charge=$(( $unit *5 ))

    echo "$charge"



elif [ $unit -gt 500 ] 

then

    charge=$(( $unit  * 7 ))


echo "$charge"


fi

    t=$(( $charge * 125/100 ))

echo -----------------------------------------  

echo 'tElectricity Billing'

echo -----------------------------------------

echo "Unit : $unit"

echo "charge: $t "

echo -----------------------------------------

