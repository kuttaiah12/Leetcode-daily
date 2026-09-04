# Write your MySQL query statement below
SELECT name AS Customers from Customers 
left join Orders on customers.id=orders.customerId
where orders.customerId IS NULL;