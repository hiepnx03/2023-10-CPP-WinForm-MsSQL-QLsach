USE [QLsach]
GO
/****** Object:  Table [dbo].[admins]    Script Date: 12/18/2023 8:24:44 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[admins](
	[admin_id] [int] IDENTITY(1,1) NOT NULL,
	[username] [nvarchar](255) NOT NULL,
	[password] [nvarchar](255) NOT NULL,
	[full_name] [nvarchar](255) NOT NULL,
	[email] [nvarchar](255) NOT NULL,
	[phone] [nvarchar](15) NULL,
	[created_at] [datetime] NULL,
	[last_login] [datetime] NULL,
PRIMARY KEY CLUSTERED 
(
	[admin_id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Books]    Script Date: 12/18/2023 8:24:44 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Books](
	[book_id] [int] NOT NULL,
	[title] [nvarchar](255) NULL,
	[author] [nvarchar](255) NULL,
	[price] [decimal](10, 2) NULL,
	[image_url] [nvarchar](max) NULL,
	[description] [nvarchar](max) NULL,
	[promotion_info] [nvarchar](max) NULL,
PRIMARY KEY CLUSTERED 
(
	[book_id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Cart]    Script Date: 12/18/2023 8:24:44 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Cart](
	[cart_id] [int] IDENTITY(1,1) NOT NULL,
	[title] [nvarchar](255) NOT NULL,
	[quantity] [int] NOT NULL,
	[price] [decimal](10, 2) NOT NULL,
PRIMARY KEY CLUSTERED 
(
	[cart_id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[CartItems]    Script Date: 12/18/2023 8:24:44 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[CartItems](
	[cart_item_id] [int] IDENTITY(1,1) NOT NULL,
	[book_id] [int] NULL,
	[username] [nvarchar](255) NULL,
	[quantity] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[cart_item_id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Orders]    Script Date: 12/18/2023 8:24:44 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Orders](
	[order_id] [int] NOT NULL,
	[customer_name] [nvarchar](255) NULL,
	[email] [nvarchar](255) NULL,
	[phone] [nvarchar](15) NULL,
	[shipping_address] [nvarchar](max) NULL,
	[order_date] [datetime] NULL,
	[shipping_method] [nvarchar](255) NULL,
	[payment_method] [nvarchar](255) NULL,
	[order_status] [nvarchar](255) NULL,
	[customer_address_id] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[order_id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
/****** Object:  Table [dbo].[trogiup]    Script Date: 12/18/2023 8:24:45 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[trogiup](
	[ID] [int] IDENTITY(1,1) NOT NULL,
	[gmail] [varchar](255) NULL,
	[noidung] [varchar](max) NULL,
PRIMARY KEY CLUSTERED 
(
	[ID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
/****** Object:  Table [dbo].[users]    Script Date: 12/18/2023 8:24:45 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[users](
	[user_id] [int] IDENTITY(1,1) NOT NULL,
	[username] [nvarchar](255) NOT NULL,
	[password] [nvarchar](255) NOT NULL,
	[full_name] [nvarchar](255) NOT NULL,
	[email] [nvarchar](255) NOT NULL,
	[phone] [nvarchar](15) NULL,
	[created_at] [datetime] NULL,
	[last_login] [datetime] NULL,
 CONSTRAINT [PK__users__B9BE370FA5E44D3C] PRIMARY KEY CLUSTERED 
(
	[user_id] ASC,
	[username] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
SET IDENTITY_INSERT [dbo].[admins] ON 

INSERT [dbo].[admins] ([admin_id], [username], [password], [full_name], [email], [phone], [created_at], [last_login]) VALUES (2, N'admin', N'admin', N'admin', N'admin@gmail.com', NULL, CAST(N'2023-10-11T08:48:25.387' AS DateTime), NULL)
INSERT [dbo].[admins] ([admin_id], [username], [password], [full_name], [email], [phone], [created_at], [last_login]) VALUES (3, N'admin1', N'admin1password', N'Admin 1', N'admin1@example.com', N'123456789', CAST(N'2023-10-17T04:49:33.443' AS DateTime), CAST(N'2023-10-17T04:49:33.443' AS DateTime))
INSERT [dbo].[admins] ([admin_id], [username], [password], [full_name], [email], [phone], [created_at], [last_login]) VALUES (4, N'admin2', N'admin2password', N'Admin 2', N'admin2@example.com', N'987654321', CAST(N'2023-10-17T04:49:33.443' AS DateTime), CAST(N'2023-10-17T04:49:33.443' AS DateTime))
INSERT [dbo].[admins] ([admin_id], [username], [password], [full_name], [email], [phone], [created_at], [last_login]) VALUES (5, N'1', N'1', N'1', N'1', N'1', CAST(N'2023-10-14T00:00:00.000' AS DateTime), CAST(N'2023-12-18T20:22:07.423' AS DateTime))
INSERT [dbo].[admins] ([admin_id], [username], [password], [full_name], [email], [phone], [created_at], [last_login]) VALUES (6, N'1', N'1', N'1', N'1', N'1', CAST(N'2023-12-04T12:33:34.437' AS DateTime), CAST(N'2003-01-01T00:00:00.000' AS DateTime))
INSERT [dbo].[admins] ([admin_id], [username], [password], [full_name], [email], [phone], [created_at], [last_login]) VALUES (7, N'2', N'2', N'2', N'2', N'2', CAST(N'2023-12-04T12:33:42.247' AS DateTime), CAST(N'2023-12-04T12:35:39.237' AS DateTime))
SET IDENTITY_INSERT [dbo].[admins] OFF
GO
INSERT [dbo].[Books] ([book_id], [title], [author], [price], [image_url], [description], [promotion_info]) VALUES (1, N'Book 1', N'Author 1', CAST(19.99 AS Decimal(10, 2)), N'book1.jpg', N'Description for Book 1', N'Promotion for Book 1')
INSERT [dbo].[Books] ([book_id], [title], [author], [price], [image_url], [description], [promotion_info]) VALUES (2, N'Book 2', N'Author 2', CAST(29.99 AS Decimal(10, 2)), N'book2.jpg', N'Description for Book 2', N'Promotion for Book 2')
INSERT [dbo].[Books] ([book_id], [title], [author], [price], [image_url], [description], [promotion_info]) VALUES (3, N'Book 3', N'Author 3', CAST(23.00 AS Decimal(10, 2)), N'book3.jpg', N'Description for Book 3', N'Promotion for Book 3')
INSERT [dbo].[Books] ([book_id], [title], [author], [price], [image_url], [description], [promotion_info]) VALUES (4, N'123', N'123', CAST(123.00 AS Decimal(10, 2)), N'123', N'123', N'123')
INSERT [dbo].[Books] ([book_id], [title], [author], [price], [image_url], [description], [promotion_info]) VALUES (5, N'sách', N'h', CAST(123.00 AS Decimal(10, 2)), N'123123', N'123', N'123')
GO
SET IDENTITY_INSERT [dbo].[Cart] ON 

INSERT [dbo].[Cart] ([cart_id], [title], [quantity], [price]) VALUES (1, N'Product 1', 2, CAST(19.99 AS Decimal(10, 2)))
INSERT [dbo].[Cart] ([cart_id], [title], [quantity], [price]) VALUES (2, N'Product 2', 1, CAST(29.99 AS Decimal(10, 2)))
INSERT [dbo].[Cart] ([cart_id], [title], [quantity], [price]) VALUES (3, N'Product 3', 3, CAST(9.99 AS Decimal(10, 2)))
SET IDENTITY_INSERT [dbo].[Cart] OFF
GO
SET IDENTITY_INSERT [dbo].[CartItems] ON 

INSERT [dbo].[CartItems] ([cart_item_id], [book_id], [username], [quantity]) VALUES (1, 1, N'1', 1)
INSERT [dbo].[CartItems] ([cart_item_id], [book_id], [username], [quantity]) VALUES (2, 2, N'1', 1)
INSERT [dbo].[CartItems] ([cart_item_id], [book_id], [username], [quantity]) VALUES (4, 3, N'1', 1)
INSERT [dbo].[CartItems] ([cart_item_id], [book_id], [username], [quantity]) VALUES (5, 1, N'1', 1)
INSERT [dbo].[CartItems] ([cart_item_id], [book_id], [username], [quantity]) VALUES (6, 1, N'123', 1)
INSERT [dbo].[CartItems] ([cart_item_id], [book_id], [username], [quantity]) VALUES (7, 1, N'123', 1)
INSERT [dbo].[CartItems] ([cart_item_id], [book_id], [username], [quantity]) VALUES (8, 1, N'1', 1)
INSERT [dbo].[CartItems] ([cart_item_id], [book_id], [username], [quantity]) VALUES (10, 5, N'hIỆP', 1)
INSERT [dbo].[CartItems] ([cart_item_id], [book_id], [username], [quantity]) VALUES (11, 5, N'Hiệp', 1)
INSERT [dbo].[CartItems] ([cart_item_id], [book_id], [username], [quantity]) VALUES (12, 4, N'Hiệp', 1)
SET IDENTITY_INSERT [dbo].[CartItems] OFF
GO
INSERT [dbo].[Orders] ([order_id], [customer_name], [email], [phone], [shipping_address], [order_date], [shipping_method], [payment_method], [order_status], [customer_address_id]) VALUES (1, N'Hiep', N'hiep@gmail.com', N'09999999', N'HN', CAST(N'2024-02-02T00:00:00.000' AS DateTime), N'222222', N'22222', N'222222', 2)
GO
SET IDENTITY_INSERT [dbo].[trogiup] ON 

INSERT [dbo].[trogiup] ([ID], [gmail], [noidung]) VALUES (1, N'123', N'123')
INSERT [dbo].[trogiup] ([ID], [gmail], [noidung]) VALUES (2, N'hiepnx03@gmail.com', N'tôi không nh?n du?c hàng')
SET IDENTITY_INSERT [dbo].[trogiup] OFF
GO
SET IDENTITY_INSERT [dbo].[users] ON 

INSERT [dbo].[users] ([user_id], [username], [password], [full_name], [email], [phone], [created_at], [last_login]) VALUES (4, N'user1', N'user1password', N'User 1', N'user1@example.com', N'111222333', CAST(N'2023-10-17T04:49:33.443' AS DateTime), CAST(N'2023-10-17T04:49:33.443' AS DateTime))
INSERT [dbo].[users] ([user_id], [username], [password], [full_name], [email], [phone], [created_at], [last_login]) VALUES (5, N'user2', N'user2password', N'User 2', N'user2@example.com', N'444555666', CAST(N'2023-10-17T04:49:33.443' AS DateTime), CAST(N'2023-10-17T04:49:33.443' AS DateTime))
INSERT [dbo].[users] ([user_id], [username], [password], [full_name], [email], [phone], [created_at], [last_login]) VALUES (7, N'1', N'1', N'1', N'1', N'1', CAST(N'2023-10-17T10:12:54.793' AS DateTime), CAST(N'2023-12-18T20:06:24.290' AS DateTime))
INSERT [dbo].[users] ([user_id], [username], [password], [full_name], [email], [phone], [created_at], [last_login]) VALUES (8, N'123', N'123123', N'123', N'123', N'123', CAST(N'2023-10-25T13:47:19.050' AS DateTime), CAST(N'2023-10-25T13:47:38.207' AS DateTime))
INSERT [dbo].[users] ([user_id], [username], [password], [full_name], [email], [phone], [created_at], [last_login]) VALUES (9, N'2', N'2', N'2', N'2', N'2', CAST(N'2023-12-17T23:57:59.897' AS DateTime), CAST(N'2023-12-17T23:58:14.970' AS DateTime))
INSERT [dbo].[users] ([user_id], [username], [password], [full_name], [email], [phone], [created_at], [last_login]) VALUES (10, N'3', N'3', N'3', N'3', N'3', CAST(N'2023-12-18T12:32:05.527' AS DateTime), CAST(N'2023-12-18T12:32:31.630' AS DateTime))
SET IDENTITY_INSERT [dbo].[users] OFF
GO
ALTER TABLE [dbo].[admins] ADD  DEFAULT (getdate()) FOR [created_at]
GO
ALTER TABLE [dbo].[users] ADD  DEFAULT (getdate()) FOR [created_at]
GO
ALTER TABLE [dbo].[CartItems]  WITH CHECK ADD FOREIGN KEY([book_id])
REFERENCES [dbo].[Books] ([book_id])
GO
