-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Mar 18, 2024 at 08:50 AM
-- Server version: 10.4.25-MariaDB
-- PHP Version: 7.4.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `otilano_kdb`
--

-- --------------------------------------------------------

--
-- Table structure for table `tbl_clerkfile`
--

CREATE TABLE `tbl_clerkfile` (
  `Clerk_id` varchar(20) NOT NULL,
  `Position` varchar(15) NOT NULL,
  `Date_hired` date NOT NULL,
  `Age` int(11) NOT NULL,
  `Gender` varchar(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `tbl_custfile`
--

CREATE TABLE `tbl_custfile` (
  `Lastname` varchar(20) NOT NULL,
  `Firstname` varchar(20) NOT NULL,
  `Midname` varchar(20) NOT NULL,
  `Address` text NOT NULL,
  `ORnum` varchar(20) NOT NULL,
  `Trandate` date NOT NULL,
  `Itemnum` int(11) NOT NULL,
  `Descrip` varchar(20) NOT NULL,
  `Qty` int(11) NOT NULL,
  `Unitprice` int(11) NOT NULL,
  `Amount` int(11) NOT NULL,
  `Salesclerk` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `tbl_customer`
--

CREATE TABLE `tbl_customer` (
  `Customer_id` int(11) NOT NULL,
  `Lastname` varchar(20) NOT NULL,
  `Firstname` varchar(20) NOT NULL,
  `Midname` varchar(20) NOT NULL,
  `Address` text NOT NULL,
  `Gender` varchar(10) NOT NULL,
  `Birthday` date NOT NULL,
  `CivilStatus` varchar(15) NOT NULL,
  `Occupation` varchar(20) NOT NULL,
  `CPnumber` bigint(20) NOT NULL,
  `Notes` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `tbl_customer`
--

INSERT INTO `tbl_customer` (`Customer_id`, `Lastname`, `Firstname`, `Midname`, `Address`, `Gender`, `Birthday`, `CivilStatus`, `Occupation`, `CPnumber`, `Notes`) VALUES
(1, 'Amor', 'Drep', 'S.', 'Alegria San Isidro', 'Male', '1971-10-29', 'Married', 'Port Assistant', 905000000, 'New client'),
(2, 'Sampayan', 'leo', 'A.', 'Salavacion San Isidro', 'Male', '1971-10-29', 'Married', 'Port Sup', 12122, 'AS');

-- --------------------------------------------------------

--
-- Table structure for table `tbl_dtl_orders`
--

CREATE TABLE `tbl_dtl_orders` (
  `DTL_id` int(11) NOT NULL,
  `Quantity` int(11) NOT NULL,
  `Unit_Price` int(11) NOT NULL,
  `Amount` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `tbl_orders`
--

CREATE TABLE `tbl_orders` (
  `Order_id` int(11) NOT NULL,
  `Order_date` date NOT NULL,
  `Date_delivered` date NOT NULL,
  `Reciept_Num` varchar(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `tbl_products`
--

CREATE TABLE `tbl_products` (
  `Product_code` varchar(10) NOT NULL,
  `Product_name` varchar(20) NOT NULL,
  `Description` text NOT NULL,
  `Unit_CostPrice` int(11) NOT NULL,
  `Unit_SellPrice` int(11) NOT NULL,
  `Curr_Qty` int(11) NOT NULL,
  `Re_order` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `tbl_products`
--

INSERT INTO `tbl_products` (`Product_code`, `Product_name`, `Description`, `Unit_CostPrice`, `Unit_SellPrice`, `Curr_Qty`, `Re_order`) VALUES
('1022', 'BRG', 'BARONG', 1000, 1500, 10, 3),
('2020', 'J501', 'Jeans501', 2000, 2500, 15, 4),
('2024', 'T501', 'T-shirt', 1800, 2300, 18, 3),
('2025', 'J911', 'Jeans911', 1500, 1700, 20, 5),
('2026', 'JWK', 'JockWalk', 250, 350, 15, 3);

-- --------------------------------------------------------

--
-- Table structure for table `tbl_users`
--

CREATE TABLE `tbl_users` (
  `User_id` int(11) NOT NULL,
  `Username` varchar(20) NOT NULL,
  `Password` varchar(20) NOT NULL,
  `Fname` varchar(20) NOT NULL,
  `Mname` varchar(20) NOT NULL,
  `Lname` varchar(20) NOT NULL,
  `Position` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `tbl_users`
--

INSERT INTO `tbl_users` (`User_id`, `Username`, `Password`, `Fname`, `Mname`, `Lname`, `Position`) VALUES
(141, 'Tony_S', 'Stark141', 'Tony', 'Stark', 'Industry', 'CEO'),
(123456, 'Dave_C', 'Davey123', 'Crazy', 'Dave', 'Hone', 'HouseKeeper'),
(20230312, 'Kieth_O', 'Kieth123', 'Kieth', 'Manegos', 'Otilano', 'Student');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `tbl_clerkfile`
--
ALTER TABLE `tbl_clerkfile`
  ADD PRIMARY KEY (`Clerk_id`);

--
-- Indexes for table `tbl_customer`
--
ALTER TABLE `tbl_customer`
  ADD PRIMARY KEY (`Customer_id`);

--
-- Indexes for table `tbl_dtl_orders`
--
ALTER TABLE `tbl_dtl_orders`
  ADD PRIMARY KEY (`DTL_id`);

--
-- Indexes for table `tbl_orders`
--
ALTER TABLE `tbl_orders`
  ADD PRIMARY KEY (`Order_id`);

--
-- Indexes for table `tbl_products`
--
ALTER TABLE `tbl_products`
  ADD PRIMARY KEY (`Product_code`);

--
-- Indexes for table `tbl_users`
--
ALTER TABLE `tbl_users`
  ADD PRIMARY KEY (`User_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
