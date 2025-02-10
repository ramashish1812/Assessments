create table product(
pro_id int primary key,
pro_name varchar(25) not null,
pro_price float(7,2) not null,
pro_com int not null
);

insert into product
(pro_id,pro_name,pro_price,pro_com)
value
(101,'mother board',3200.00,15),
(102,'key board',450.00,16),
(103,'ZIP drive',250.00,14),
(104,'speaker',550.00,16),
(105,'montior',5000.00,11),
(106,'DVD drive',900.00,12),
(107,'CD dirve',800.00,12),
(108,'printer',2600.00,13),
(109,'refill cartridge',350.00,13),
(110,'mouse',250.00,12);

select * from product;
