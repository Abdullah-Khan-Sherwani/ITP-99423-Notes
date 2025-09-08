# CONTRIBUTORS.md

## 👋 Welcome
This file explains how to contribute your class code to this repository.  
We keep it simple: **one folder per class session**, and **all student files go directly inside that folder**.

- Example session folder: `8Sep25/`
- Put your `.cpp` files **directly** inside `8Sep25/`
- **Do not create subfolders** inside `8Sep25/`

---

## 1) What you need
- A **GitHub account** (free at https://github.com)
- Your C++ code files from class
- (Optional) Git installed if you prefer working on your computer. You can also do everything in the browser.

---

## 2) Fork this repository
1. Open the main repository page).
2. Click the **Fork** button (top-right).
3. This creates **your own copy** of the repo under your GitHub account.

---

## 3) Naming rule (to avoid filename clashes)
Save each file with this pattern (all in one line, no spaces):
```
<roll>_<Name>_<shortTopicOrNumber>.cpp
```
**Examples (inside `8Sep25/`):**
- `23-ib-017_Ali_01_io.cpp`
- `23-ib-042_Maryam_02_sum.cpp`
- `23-ib-033_Zara_max_of_three.cpp`

> ✅ Put these files **directly in** `8Sep25/`  
> ❌ Do **not** make `8Sep25/YourName/` folders.

---

## 4) Add your code

### Option A — Do it in the browser (easiest)
1. Open **your fork** of the repo on GitHub.
2. Click the appropriate class folder for example for code taught on 8 September: `8Sep25/` folder.
3. Click **Add file → Create new file**.
4. In the filename box, type:
   ```
   8Sep25/<roll>_<Name>_<shortTopicOrNumber>.cpp
   ```
   *(This path puts your file directly inside `8Sep25/`.)*
5. Paste your C++ code into the editor.
6. Scroll down and click **Commit new file**.

Repeat for each `.cpp` you want to add.

### Option B — Work on your computer (requires Git; recommended)
1. Clone your fork:
   ```bash
   git clone https://github.com/<your-username>/<repo-name>.git
   cd <repo-name>
   ```
2. Copy your files **directly into the session folder**:
   ```bash
   # Examples (pick your own filenames)
   cp ~/Desktop/01_io.cpp 8Sep25/23-ib-017_Ali_01_io.cpp
   cp ~/Desktop/02_sum.cpp 8Sep25/23-ib-017_Ali_02_sum.cpp
   ```
3. Commit and push:
   ```bash
   git add 8Sep25/*.cpp
   git commit -m "8Sep25: add examples (23-ib-017_Ali)"
   git push
   ```

---

## 5) Send a Pull Request (PR)
1. Open your fork on GitHub.
2. Click **Compare & pull request** (you’ll see a banner saying your branch is ahead).
3. Ensure the **base repository** is the teacher’s repo and the base branch is `main`.
4. Title suggestion:
   ```
   [8Sep25] Add examples – 23-ib-017_Ali
   ```
5. Click **Create pull request**.

---

## 6) What happens next ✅
- Your teacher reviews the PR.
- If changes are needed, you’ll get comments — edit your file(s) and push again.
- When approved, your code is merged into the main repository.

---

## Rules (simple and strict)
- Files go **directly inside** the appropraite session folder with format <Date> (e.g., `8Sep25/`).
- Use the naming rule exactly: `<roll>_<Name>_<shortTopicOrNumber>.cpp`
- One program = one `.cpp` file.
- No ZIPs, screenshots, or executables — only source code.
- Keep code standard (no external libraries).

---

## Example structure
```
8Sep25/
  23-ib-017_Ali_01_io.cpp
  23-ib-042_Maryam_02_sum.cpp
  23-ib-033_Zara_max_of_three.cpp
```

---

## Need help?
Ask GPT Bhai. If you make a mistake, don’t worry — just edit the file and commit again.
