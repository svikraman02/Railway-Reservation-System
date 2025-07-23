drop table feedback;
drop table Discount_applies_to;
drop table Delivery_Phone;
drop table delivery_person;
drop table bill;
drop table payment;
drop table discount;
drop table order_item;
drop table order_table;
drop table items;
drop table restaurant_type;
drop table restaurant;
drop table cust_phone;
drop table customer;

-- Customer Table
CREATE TABLE Customer (
    Cust_id NUMBER PRIMARY KEY,
    F_name VARCHAR2(50),
    L_name VARCHAR2(50),
    Email VARCHAR2(100),
    Password VARCHAR2(50),
    House_no VARCHAR2(20),
    St_name VARCHAR2(100),
    City VARCHAR2(50)
);

-- Cust_Phone Table
CREATE TABLE Cust_Phone (
    Cust_id NUMBER,
    Phone VARCHAR2(15),
    PRIMARY KEY (Cust_id, Phone),
    FOREIGN KEY (Cust_id) REFERENCES Customer(Cust_id)
);

-- Restaurant Table
CREATE TABLE Restaurant (
    Rest_id NUMBER PRIMARY KEY,
    Rest_name VARCHAR2(100),
    Contact VARCHAR2(15),
    Location VARCHAR2(100),
    Rating NUMBER(3,2)
);

-- Restaurant_type Table
CREATE TABLE Restaurant_type (
    Rest_id NUMBER,
    Rest_type VARCHAR2(50),
    PRIMARY KEY (Rest_id, Rest_type),
    FOREIGN KEY (Rest_id) REFERENCES Restaurant(Rest_id)
);

-- Items Table
CREATE TABLE Items (
    Item_id NUMBER PRIMARY KEY,
    Item_name VARCHAR2(100),
    Category VARCHAR2(50),
    Price NUMBER(10,2),
    Rest_id NUMBER,
    FOREIGN KEY (Rest_id) REFERENCES Restaurant(Rest_id)
);

-- Order Table
CREATE TABLE Order_table (
    Order_id NUMBER PRIMARY KEY,
    Order_date DATE,
    Cust_id NUMBER,
    Rest_id NUMBER,
    Status_ VARCHAR2(25),
    Delivery_notes varchar2(100),
    FOREIGN KEY (Cust_id) REFERENCES Customer(Cust_id),
    FOREIGN KEY (Rest_id) REFERENCES Restaurant(Rest_id)
);

-- Order_Item Table
CREATE TABLE Order_Item (
    Order_id NUMBER,
    Item_id NUMBER,
    Price NUMBER(10,2),
    PRIMARY KEY (Order_id, Item_id),
    FOREIGN KEY (Order_id) REFERENCES Order_table(Order_id),
    FOREIGN KEY (Item_id) REFERENCES Items(Item_id)
);

-- Discount Table
CREATE TABLE Discount (
    Disc_id NUMBER PRIMARY KEY,
    Disc_amt NUMBER(10,2),
    Valid_from DATE,
    Valid_to DATE,
    Order_id NUMBER,
    FOREIGN KEY (Order_id) REFERENCES Order_table(Order_id)
);

-- Payment Table
CREATE TABLE Payment (
    Payment_id NUMBER PRIMARY KEY,
    Method VARCHAR2(30),
    Amount NUMBER(10,2),
    Cust_id NUMBER,
    Order_id NUMBER,
    FOREIGN KEY (Cust_id) REFERENCES Customer(Cust_id),
    FOREIGN KEY (Order_id) REFERENCES Order_table(Order_id)
);

-- Bill Table
CREATE TABLE Bill (
    Bill_id NUMBER PRIMARY KEY,
    Billing_date DATE,
    Tax NUMBER(10,2),
    Delivery_fee NUMBER(10,2),
    Disc_amount NUMBER(10,2),
    Tot_amount NUMBER(10,2),
    Payment_id NUMBER,
    FOREIGN KEY (Payment_id) REFERENCES Payment(Payment_id)
);

-- Delivery_person Table
CREATE TABLE Delivery_person (
    Delivery_id NUMBER PRIMARY KEY,
    Name VARCHAR2(100),
    Availability CHAR(1),
    DOB DATE,
    Order_id NUMBER,
    FOREIGN KEY (Order_id) REFERENCES Order_table(Order_id)
);

-- Delivery_Phone Table
CREATE TABLE Delivery_Phone (
    Delivery_id NUMBER,
    Phone VARCHAR2(15),
    PRIMARY KEY (Delivery_id, Phone),
    FOREIGN KEY (Delivery_id) REFERENCES Delivery_person(Delivery_id)
);

-- Feedback Table
CREATE TABLE Feedback (
    Cust_id NUMBER,
    Rest_id NUMBER,
    Rating NUMBER(3,2),
    Comments CLOB,
    PRIMARY KEY (Cust_id, Rest_id),
    FOREIGN KEY (Cust_id) REFERENCES Customer(Cust_id),
    FOREIGN KEY (Rest_id) REFERENCES Restaurant(Rest_id)
);

-- Discount_applies_to Table
CREATE TABLE Discount_applies_to (
    Disc_id NUMBER,
    Bill_id NUMBER,
    PRIMARY KEY (Disc_id, Bill_id),
    FOREIGN KEY (Disc_id) REFERENCES Discount(Disc_id),
    FOREIGN KEY (Bill_id) REFERENCES Bill(Bill_id)
);
