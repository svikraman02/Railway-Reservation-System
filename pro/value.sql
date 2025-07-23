-- Insert into Customer
INSERT INTO Customer VALUES (1, 'Alice', 'Smith', 'alice@example.com', 'pass123', '12A', 'Main Street', 'New York');
INSERT INTO Customer VALUES (2, 'Bob', 'Johnson', 'bob@example.com', 'secure456', '45B', '2nd Avenue', 'Los Angeles');
INSERT INTO Customer VALUES (3, 'Carol', 'Davis', 'carol@example.com', 'myPass789', '89', 'Elm Street', 'Chicago');
INSERT INTO Customer VALUES (4, 'David', 'Miller', 'david@example.com', 'hello321', '21C', 'Sunset Blvd', 'San Francisco');
INSERT INTO Customer VALUES (5, 'Eve', 'Taylor', 'eve@example.com', 'qwerty12', '5D', 'Oak Street', 'Houston');
INSERT INTO Customer VALUES (6, 'Frank', 'White', 'frank@example.com', 'pass890', '66', 'Lakeview Road', 'Seattle');
INSERT INTO Customer VALUES (7, 'Grace', 'Lewis', 'grace@example.com', 'lockitup', '32E', 'Maple Ave', 'Phoenix');
INSERT INTO Customer VALUES (8, 'Hank', 'Walker', 'hank@example.com', 'secret999', '77F', 'Hilltop Rd', 'Boston');
INSERT INTO Customer VALUES (9, 'Ivy', 'Hall', 'ivy@example.com', 'letmein1', '9G', 'Pine Street', 'Denver');
INSERT INTO Customer VALUES (10, 'Jack', 'Allen', 'jack@example.com', 'unlock22', '101', 'Cedar Lane', 'Austin');
INSERT INTO Customer VALUES (11, 'Kathy', 'Young', 'kathy@example.com', 'pwd123', '12B', 'Palm Road', 'Orlando');
INSERT INTO Customer VALUES (12, 'Leo', 'King', 'leo@example.com', 'passleo', '33C', 'Ocean Drive', 'San Diego');
INSERT INTO Customer VALUES (13, 'Mia', 'Wright', 'mia@example.com', 'miapass', '14', 'Riverside', 'Portland');
INSERT INTO Customer VALUES (14, 'Nick', 'Scott', 'nick@example.com', 'nickyboy', '88', 'Sunrise Ave', 'Philadelphia');
INSERT INTO Customer VALUES (15, 'Olive', 'Green', 'olive@example.com', 'olipass', '2H', 'Broadway', 'Atlanta');
INSERT INTO Customer VALUES (16, 'Paul', 'Baker', 'paul@example.com', 'pbpass', '46I', 'Meadow Rd', 'Dallas');
INSERT INTO Customer VALUES (17, 'Quinn', 'Adams', 'quinn@example.com', 'qp123', '19', 'High Street', 'Detroit');
INSERT INTO Customer VALUES (18, 'Rose', 'Campbell', 'rose@example.com', 'rosepwd', '71', 'Valley Rd', 'Miami');
INSERT INTO Customer VALUES (19, 'Steve', 'Evans', 'steve@example.com', 'steve321', '28J', 'King Street', 'Minneapolis');
INSERT INTO Customer VALUES (20, 'Tina', 'Turner', 'tina@example.com', 'tt123', '53', 'Forest Ave', 'Charlotte');

-- Insert into Cust_Phone
INSERT INTO Cust_Phone VALUES (1, '5551110001');
INSERT INTO Cust_Phone VALUES (2, '5551110002');
INSERT INTO Cust_Phone VALUES (3, '5551110003');
INSERT INTO Cust_Phone VALUES (4, '5551110004');
INSERT INTO Cust_Phone VALUES (5, '5551110005');
INSERT INTO Cust_Phone VALUES (6, '5551110006');
INSERT INTO Cust_Phone VALUES (7, '5551110007');
INSERT INTO Cust_Phone VALUES (8, '5551110008');
INSERT INTO Cust_Phone VALUES (9, '5551110009');
INSERT INTO Cust_Phone VALUES (10, '5551110010');
INSERT INTO Cust_Phone VALUES (11, '5551110011');
INSERT INTO Cust_Phone VALUES (12, '5551110012');
INSERT INTO Cust_Phone VALUES (13, '5551110013');
INSERT INTO Cust_Phone VALUES (14, '5551110014');
INSERT INTO Cust_Phone VALUES (15, '5551110015');
INSERT INTO Cust_Phone VALUES (16, '5551110016');
INSERT INTO Cust_Phone VALUES (17, '5551110017');
INSERT INTO Cust_Phone VALUES (18, '5551110018');
INSERT INTO Cust_Phone VALUES (19, '5551110019');
INSERT INTO Cust_Phone VALUES (20, '5551110020');

-- Insert into Restaurant
INSERT INTO Restaurant VALUES (1, 'Tasty Bites', '4441230001', 'Midtown, NY', 4.5);
INSERT INTO Restaurant VALUES (2, 'Pizza World', '4441230002', 'Downtown, LA', 4.2);
INSERT INTO Restaurant VALUES (3, 'Burger House', '4441230003', 'Riverwalk, CHI', 4.0);
INSERT INTO Restaurant VALUES (4, 'Sushi Central', '4441230004', 'Sunset Blvd, SF', 4.8);
INSERT INTO Restaurant VALUES (5, 'Taco Heaven', '4441230005', 'Oak St, HOU', 4.1);
INSERT INTO Restaurant VALUES (6, 'Pasta Palace', '4441230006', 'Maple Ave, PHX', 4.3);


-- Insert into Restaurant_type
INSERT INTO Restaurant_type VALUES (1, 'Fast Food');
INSERT INTO Restaurant_type VALUES (2, 'Italian');
INSERT INTO Restaurant_type VALUES (3, 'Fast Food');
INSERT INTO Restaurant_type VALUES (4, 'Japanese');
INSERT INTO Restaurant_type VALUES (5, 'Mexican');
INSERT INTO Restaurant_type VALUES (6, 'Italian');

-- Insert into Items
INSERT INTO Items VALUES (1, 'Cheeseburger', 'Fast Food', 5.99, 3);
INSERT INTO Items VALUES (2, 'Pepperoni Pizza', 'Italian', 9.99, 2);
INSERT INTO Items VALUES (3, 'Sushi Platter', 'Japanese', 15.50, 4);
INSERT INTO Items VALUES (4, 'Taco Combo', 'Mexican', 6.75, 5);
INSERT INTO Items VALUES (5, 'Spaghetti', 'Italian', 8.25, 6);
INSERT INTO Items VALUES (6, 'Kung Pao Chicken', 'Chinese', 9.50, 1);
INSERT INTO Items VALUES (7, 'Vegan Bowl', 'Vegan', 7.80, 2);
INSERT INTO Items VALUES (8, 'Grilled Steak', 'American', 13.99, 5);
INSERT INTO Items VALUES (9, 'Butter Chicken', 'Indian', 10.50, 4);
INSERT INTO Items VALUES (10, 'Falafel Wrap', 'Middle Eastern', 6.25, 3);
INSERT INTO Items VALUES (11, 'Salad Plate', 'Vegetarian', 7.00, 1);
INSERT INTO Items VALUES (12, 'Ice Cream Sundae', 'Desserts', 4.50, 3);
INSERT INTO Items VALUES (13, 'BBQ Ribs', 'BBQ', 12.75, 4);
INSERT INTO Items VALUES (14, 'Smoothie', 'Healthy', 5.25, 1);
INSERT INTO Items VALUES (15, 'Ramen Bowl', 'Asian', 9.20, 6);
INSERT INTO Items VALUES (16, 'Waffles', 'Breakfast', 6.50, 2);
INSERT INTO Items VALUES (17, 'Spicy Wings', 'Spicy', 8.99, 3);
INSERT INTO Items VALUES (18, 'Paneer Tikka', 'Indian', 9.25, 4);
INSERT INTO Items VALUES (19, 'Dim Sum', 'Asian Fusion', 10.30, 6);
INSERT INTO Items VALUES (20, 'Margherita Pizza', 'Italian', 8.90, 2);
INSERT INTO Items VALUES (21, 'Chicken Nuggets', 'Fast Food', 4.50, 1);
INSERT INTO Items VALUES (22, 'Veggie Pizza', 'Italian', 7.99, 2);
INSERT INTO Items VALUES (23, 'Tempura Rolls', 'Japanese', 12.50, 3);
INSERT INTO Items VALUES (24, 'Beef Tacos', 'Mexican', 8.25, 4);
INSERT INTO Items VALUES (25, 'Fettuccine Alfredo', 'Italian', 9.75, 5);
INSERT INTO Items VALUES (26, 'Spring Rolls', 'Chinese', 5.20, 6);
INSERT INTO Items VALUES (27, 'Chicken Burger', 'Fast Food', 6.25, 1);
INSERT INTO Items VALUES (28, 'Four Cheese Pizza', 'Italian', 10.50, 2);
INSERT INTO Items VALUES (29, 'Teriyaki Chicken', 'Japanese', 11.00, 3);
INSERT INTO Items VALUES (30, 'Nachos Supreme', 'Mexican', 7.80, 4);
INSERT INTO Items VALUES (31, 'Penne Arrabbiata', 'Italian', 8.40, 5);
INSERT INTO Items VALUES (32, 'Manchurian Balls', 'Chinese', 9.10, 6);
INSERT INTO Items VALUES (33, 'Fish Fillet Sandwich', 'Fast Food', 5.95, 1);
INSERT INTO Items VALUES (34, 'Stuffed Crust Pizza', 'Italian', 11.25, 2);
INSERT INTO Items VALUES (35, 'Udon Noodles', 'Japanese', 10.90, 3);
INSERT INTO Items VALUES (36, 'Chicken Quesadilla', 'Mexican', 8.65, 4);
INSERT INTO Items VALUES (37, 'Lasagna', 'Italian', 9.85, 5);
INSERT INTO Items VALUES (38, 'Sweet and Sour Pork', 'Chinese', 10.30, 6);
INSERT INTO Items VALUES (39, 'Crispy Chicken Wrap', 'Fast Food', 6.80, 1);
INSERT INTO Items VALUES (40, 'Marinara Pasta', 'Italian',8.00,2);
INSERT INTO Items VALUES (41, 'Spicy Chicken Wings', 'Fast Food', 6.50, 1);
INSERT INTO Items VALUES (42, 'Margarita Pizza', 'Italian', 9.25, 2);
INSERT INTO Items VALUES (43, 'Miso Soup', 'Japanese', 4.20, 3);
INSERT INTO Items VALUES (44, 'Churros', 'Mexican', 3.80, 4);
INSERT INTO Items VALUES (45, 'Gnocchi', 'Italian', 8.90, 5);
INSERT INTO Items VALUES (46, 'Chili Chicken', 'Chinese', 9.60, 6);
INSERT INTO Items VALUES (47, 'Double Cheeseburger', 'Fast Food', 7.25, 1);
INSERT INTO Items VALUES (48, 'Garlic Bread', 'Italian', 4.10, 2);
INSERT INTO Items VALUES (49, 'Sushi Platter', 'Japanese', 14.50, 3);
INSERT INTO Items VALUES (50, 'Burrito Bowl', 'Mexican', 8.75, 4);
INSERT INTO Items VALUES (51, 'Carbonara Pasta', 'Italian', 10.20, 5);
INSERT INTO Items VALUES (52, 'Hakka Noodles', 'Chinese', 8.10, 6);
INSERT INTO Items VALUES (53, 'Fries & Dip Combo', 'Fast Food', 3.95, 1);
INSERT INTO Items VALUES (54, 'Tandoori Pizza', 'Italian', 9.90, 2);
INSERT INTO Items VALUES (55, 'Salmon Sashimi', 'Japanese', 13.25, 3);
INSERT INTO Items VALUES (56, 'Enchiladas', 'Mexican', 9.45, 4);
INSERT INTO Items VALUES (57, 'Ravioli', 'Italian', 9.80, 5);
INSERT INTO Items VALUES (58, 'Kung Pao Chicken', 'Chinese', 10.60, 6);
INSERT INTO Items VALUES (59, 'Zinger Burger', 'Fast Food', 6.70, 1);
INSERT INTO Items VALUES (60, 'Pesto Pasta', 'Italian',9.15,2);



-- Insert into Delivery_Person
INSERT INTO Delivery_Person VALUES (1, 'Adam Ryder', 'Y', TO_DATE('1995-01-10', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (2, 'Bella Kent', 'Y', TO_DATE('1998-03-14', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (3, 'Charlie Wu', 'N', TO_DATE('1992-07-22', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (4, 'Diana Shore', 'Y', TO_DATE('1990-12-01', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (5, 'Eli Brock', 'Y', TO_DATE('1997-11-11', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (6, 'Fiona Gray', 'N', TO_DATE('1993-08-30', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (7, 'George Hale', 'Y', TO_DATE('1991-04-05', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (8, 'Hannah West', 'Y', TO_DATE('1999-06-18', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (9, 'Ian Snow', 'N', TO_DATE('1989-09-09', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (10, 'Jane Frost', 'Y', TO_DATE('1994-10-20', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (11, 'Kevin Bright', 'Y', TO_DATE('1996-05-23', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (12, 'Lara Moon', 'Y', TO_DATE('1992-02-14', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (13, 'Mike Steel', 'Y', TO_DATE('1990-03-03', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (14, 'Nina Rose', 'N', TO_DATE('1998-07-17', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (15, 'Oscar Lane', 'Y', TO_DATE('1995-08-25', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (16, 'Paula Dean', 'Y', TO_DATE('1993-01-31', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (17, 'Ray Miles', 'Y', TO_DATE('1997-10-13', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (18, 'Sara Gold', 'Y', TO_DATE('1991-09-07', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (19, 'Tom Rivers', 'N', TO_DATE('1988-04-21', 'YYYY-MM-DD'), NULL);
INSERT INTO Delivery_Person VALUES (20, 'Uma Shields', 'Y', TO_DATE('1999-12-29', 'YYYY-MM-DD'), NULL);

-- Insert into Delivery_Phone
INSERT INTO Delivery_Phone VALUES (1, '6661110001');
INSERT INTO Delivery_Phone VALUES (2, '6661110002');
INSERT INTO Delivery_Phone VALUES (3, '6661110003');
INSERT INTO Delivery_Phone VALUES (4, '6661110004');
INSERT INTO Delivery_Phone VALUES (5, '6661110005');
INSERT INTO Delivery_Phone VALUES (6, '6661110006');
INSERT INTO Delivery_Phone VALUES (7, '6661110007');
INSERT INTO Delivery_Phone VALUES (8, '6661110008');
INSERT INTO Delivery_Phone VALUES (9, '6661110009');
INSERT INTO Delivery_Phone VALUES (10, '6661110010');
INSERT INTO Delivery_Phone VALUES (11, '6661110011');
INSERT INTO Delivery_Phone VALUES (12, '6661110012');
INSERT INTO Delivery_Phone VALUES (13, '6661110013');
INSERT INTO Delivery_Phone VALUES (14, '6661110014');
INSERT INTO Delivery_Phone VALUES (15, '6661110015');
INSERT INTO Delivery_Phone VALUES (16, '6661110016');
INSERT INTO Delivery_Phone VALUES (17, '6661110017');
INSERT INTO Delivery_Phone VALUES (18, '6661110018');
INSERT INTO Delivery_Phone VALUES (19, '6661110019');
INSERT INTO Delivery_Phone VALUES (20, '6661110020');
