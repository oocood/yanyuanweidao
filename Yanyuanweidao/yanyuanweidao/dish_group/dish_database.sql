
set names utf8mb4;
set character set utf8mb4;
set character_set_connection = utf8mb4;

create database if not exists dish_database;
use dish_database;



create table dish_data(
	dish_id int,
	dish_name text character set utf8mb4 collate utf8mb4_unicode_ci,
	dish_price int ,
	if_contain_meat tinyint(1),
	if_contain_seafood tinyint(1),
	if_contain_soybean tinyint(1),
	if_noodle_food tinyint(1),
	if_desert_or_colddish tinyint(1),
	if_soup tinyint(1),
	dish_group text character set utf8mb4 collate utf8mb4_unicode_ci,
	primary key(dish_id)
);
	
