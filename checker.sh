g++ my_solution1.cpp -o my_solution1
g++ bruteForce_solution1.cpp -o bruteForce_solution1
g++ randomTestgenerator2.cpp -o randomTestgenerator2
for ((i=1; ; ++i)); do
    ./randomTestgenerator2 $i >randomInput1
    ./my_solution1 <randomInput1> myOutput1
    ./bruteForce_solution1 <randomInput1> bruteOutput1
    diff -w myOutput1 bruteOutput1 || break
    echo "Passed test: " $i
    # echo "Your answer is: "
    # cat myOutput
done

echo -e "\nWA on the $i test:"
cat randomInput1
echo "Your answer is: "
cat myOutput1
echo "Correct answer is: "
cat bruteOutput1