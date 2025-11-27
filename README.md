# BBShop Clothing System 🛍️
*A C++ Console-Based Retail Shopping Simulation*

The **BBShop Clothing System** is a fully interactive console-based shopping program written in **C++**. It simulates a retail clothing store where users can browse brands, select items, choose sizes, review their cart, apply discounts, and process payments.  

This project demonstrates core C++ concepts including functions, control structures, input validation, and modular programming.

---

## ⭐ Features

### 🔸 Brand Selection  
Choose from three popular fashion brands:  
- **Penshoppe**  
- **Oxygen**  
- **Bench**

### 🔸 Item Catalog  
Each brand includes a unique set of items such as:  
- Polo shirts, t-shirts, jackets  
- Perfumes, caps, wallets  
- Pants, hoodie jackets  

### 🔸 Size & Price Options  
Pricing automatically adjusts based on:  
- Brand  
- Item  
- Size selection  

### 🔸 Shopping Cart Summary  
After selecting an item, the system displays a detailed summary including:  
- Brand & category  
- Item name  
- Size & quantity  
- Total item price  

### 🔸 Discount System  
Eligible customers may apply ONE discount per shopping session:  
- **Student** – 5%  
- **PWD** – 10%  
- **Senior Citizen** – 20%  
- (Discounts require basic ID verification)

### 🔸 Payment Processing  
The program ensures payment sufficiency and calculates change.

### 🔸 Final Purchase Summary  
Displays:  
- Total items  
- Total before discount  
- Discount amount  
- Final total  
- Payment received  
- Change returned  

---

## 🧠 Concepts Demonstrated

This project demonstrates key C++ programming fundamentals:

- Modular functions  
- Switch/case decision-making  
- Input validation loops  
- Use of strings and formatted output  
- Arithmetic operations  
- State tracking with flags  
- Wrapper functions and static-state logic  

---

## 🚀 How to Run

### 1. Clone the Repository
```bash
git clone https://github.com/yashiro-nyx/BBShop-Clothing-System.git
````

### 2. Navigate into the folder

```bash
cd BBShop-Clothing-System
```

### 3. Compile the program

```bash
g++ BBShop-Clothing-System.cpp -o BBShop
```

### 4. Run the program

```bash
./BBShop
```

---

## 📁 Project Structure

```
BBShop-Clothing-System/
│── BBShop-Clothing-System.cpp   # Source code
│── README.md                    # Project documentation
│── LICENSE                      # MIT License
└── .gitignore                   # Ignored files
```

---

## 📜 Sample Output

```
Choose a brand:
1. Penshoppe
2. Oxygen
3. Bench
Enter your choice:
```

```
--- Cart Summary ---
Brand: Penshoppe
Category: Clothing
Item: Polo
Size: Medium
Quantity: 2
Total Price: 598
--------------------
```

---

## 📜 License

This project is licensed under the **MIT License**.
You are free to use, modify, and distribute this software with proper attribution.

---

## 📄 License

This project is licensed under the MIT License - see the LICENSE file for details.

## 👥 Authors

#### Jervin Paul C. Romualdo

- GitHub: [yashiro-nyx](https://github.com/yashiro-nyx)

## 🙏 Acknowledgements

Special thanks to the open-source community and all contributors who provided feedback and support during the development of this project.
