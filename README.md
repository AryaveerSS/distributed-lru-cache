# distributed-lru-cache
Custom LRU Cache implementation in C++ using Doubly Linked List and Hash Table (O(1) operations)  and using Consistent Hashing 


# 🚀 LRU Cache Implementation in C++

This project implements a **Least Recently Used (LRU) Cache** using:

* Doubly Linked List
* Custom Hash Table (with chaining)

---

## 🧠 Concepts Used

* Data Structures:

  * Doubly Linked List
  * Hash Table (Separate Chaining)
* Algorithms:

  * LRU (Least Recently Used) Cache Eviction Policy

---

## ⚙️ How It Works

* Each cache entry is stored as a node in a doubly linked list
* The most recently used item is moved to the front
* The least recently used item is removed from the end
* A hash table is used for O(1) access to nodes

---

## 📂 Project Structure

```
.
├── lru_node.h
├── lru_node.cpp
├── hashtable.h
├── hashtable.cpp
```

---

## 🚀 Features

* O(1) insertion and deletion
* O(1) access using hash table
* Custom implementation (no STL map used for cache logic)

---

## 🧪 Example

```
put(1,10)
put(2,20)
get(1) → 10
put(3,30) → evicts key 2
```

---

## ⚠️ Note

* This version does not yet handle updating existing keys (will be added later)
* This is part of a larger **Distributed Cache System project**

---

## 🔮 Future Improvements

* Handle duplicate key updates
* Add consistent hashing
* Simulate distributed cache servers
* Add CLI interface

---

## 👨‍💻 Author

* Aryaveer Singh

---
