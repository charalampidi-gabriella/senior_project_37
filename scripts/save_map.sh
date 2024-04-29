title1="tab 1"

map_num=0
while [ $map_num -lt 100 ]
do
	full_map_name="map_"$map_num".pgm"
	file="/jetauto_ws/src/jetauto_slam/maps/"$full_map_name

	if [[ ! -f "$file" ]]; then
		map_name="map_"$map_num
		break
	fi

	((map_num++))
done

cmd1="cd; sleep 3; cd jetauto_ws/src/jetauto_slam/maps; sleep 5; rosrun map_server map_saver -f "$map_name" map:=/jetauto_1/map"

gnome-terminal --tab --title="$title1" --command="bash -c '$cmd1; $SHELL'"
