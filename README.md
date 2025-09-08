# ITP-99423 Notes & Examples

Welcome 👋  
This repository contains the example C++ programs taught in class.  
Students will **fork this repository**, add their own class examples, and then send a **Pull Request (PR)** to contribute back.

---

## 📂 Folder structure
- Each class session = **one folder**, named by date.
- Folder format: `DDMonYY`  
  - Example: `8Sep25/` for class held on 8 September 2025.
- All student files go **directly inside** that session folder.

**Example layout:**
```
8Sep25/
  23-ib-017_Ali_01_io.cpp
  23-ib-042_Maryam_02_sum.cpp
  23-ib-033_Zara_max_of_three.cpp
```

---

## 🚀 How to contribute

### Step 1 — Fork this repo
1. Go to the repo page:  
   👉 [ITP-99423-Notes](https://github.com/Abdullah-Khan-Sherwani/ITP-99423-Notes)
2. Click the **Fork** button (top right).  
3. This creates *your own copy* of the repo.

---

### Step 2 — Add your code
You can do this **directly on GitHub** or on your computer.

#### Option A — Using GitHub web editor (easiest)
1. Open your fork.  
2. Navigate to the correct session folder (e.g., `8Sep25/`).  
3. Click **Add file → Upload files** or **Create new file**.  
4. Name your file using this format:
   ```
   <roll>_<Name>_<shortTopicOrNumber>.cpp
   ```
   Example:  
   ```
   23-ib-042_Maryam_01_io.cpp
   ```
5. Commit your changes.

#### Option B — On your computer (requires Git)
1. Clone **your fork** (not the main repo):
   ```bash
   git clone https://github.com/<your-username>/ITP-99423-Notes.git
   cd ITP-99423-Notes
   ```
2. Add your file(s) into the correct session folder:
   ```bash
   cp ~/Desktop/01_io.cpp 8Sep25/23-ib-042_Maryam_01_io.cpp
   ```
3. Commit & push:
   ```bash
   git add 8Sep25/*.cpp
   git commit -m "8Sep25: add 01_io.cpp (23-ib-042_Maryam)"
   git push
   ```

---

### Step 3 — Open a Pull Request
1. Go to your fork on GitHub.  
2. Click **Compare & pull request**.  
3. Make sure the base repo is  
   `Abdullah-Khan-Sherwani/ITP-99423-Notes` and branch is `main`.  
4. Add a clear title, e.g.:  
   ```
   [8Sep25] Add examples – 23-ib-042_Maryam
   ```
5. Submit the PR.

---

## ⚠️ Rules
- Files must go **directly inside the correct session folder** (e.g., `8Sep25/`).  
- Use the naming format: `<roll>_<Name>_<shor
