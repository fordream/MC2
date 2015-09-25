
MAC_PROJECT_DIR='/Data/MoneyCalculator/MC2/MC2/'

cpp_files={}
i=1
function getCppFunc()
{
for file in `ls`;do
	if [ -d ${file} ];then
		cd $file
		getCppFunc
		cd ..
	elif [ ${file##*.} == "cpp" ];then
	 	cpp_files[$i]=`pwd`/${file}	
		let i=i+1
	fi
done
}
# cd ..
cd $MAC_PROJECT_DIR
getCppFunc

cd complies/
j=$i;
i=1
while(( $i<$j ))
do
	echo 'Complieing ..' ${cpp_files[$i]} ;
	g++ -g -O0 -c ${cpp_files[$i]} ;
	let i=i+1
done

echo 'Linking all to ../MC2  ... '
g++ -g -O0 *.o -o ../MC2
