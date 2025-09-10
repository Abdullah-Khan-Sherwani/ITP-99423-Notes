# CONTRIBUTORS.md

## 👋 Welcome
This file explains **how to contribute your class code** to this repository.

- We use **one folder per class session** (format: `DDMonYY`, e.g., `8Sep25/`).
- Put your `.cpp` files **directly inside** the session folder.
- **Do not create subfolders** inside a session folder.

---

## Who should use this doc?

- **Already a collaborator on the repo?**  
  🔽 See the README’s “Quick start (Collaborators)” section.

- **Not a collaborator yet?**  
  🔽 Use the **Fork → PR workflow** below.

> 💡 **Professional tip:** Even when collaborators can push to `main`, most teams prefer **feature branches + Pull Requests** for review and a clean history. That approach is **encouraged** but **optional** here.

---

## 1) Prerequisites
- A **GitHub account** (free).
- Your C++ source files.
- (Optional) **Git** installed. You may also use GitHub’s web interface.

---

## 2A) Collaborator workflow (push to `main`)
> If you’ve been added as a **collaborator**, follow the README file.  

> 💡 **Professional workflow (optional, recommended):**  
> Use a feature branch and open a PR:
> ```bash
> git switch -c 8Sep25/maryam-01-io
> # add/commit as above
> git pull --rebase origin main
> git push -u origin 8Sep25/maryam-01-io
> # open Pull Request on GitHub
> ```

---

## 2B) Fork → PR workflow (if you are **not** a collaborator)
1. Open the main repo and click **Fork**.
2. Clone **your fork**:
   ```bash
   git clone https://github.com/<your-username>/ITP-99423-Notes.git
   cd ITP-99423-Notes
   ```
3. Add files **directly** into the correct session folder:
   ```bash
   cp ~/Desktop/01_io.cpp 8Sep25/23-ib-017_Ali_01_io.cpp
   ```
4. Commit & push:
   ```bash
   git add 8Sep25/*.cpp
   git commit -m "8Sep25: add examples (23-ib-017_Ali)"
   git push
   ```
5. On GitHub, click **Compare & pull request** and submit your PR to  
   `Abdullah-Khan-Sherwani/ITP-99423-Notes` → `main`.

---

## 3) Naming rule (prevents clashes)
Save each file with this pattern (one line, no spaces):
```
<roll>_<Name>_<shortTopicOrNumber>.cpp
```
**Examples (inside `8Sep25/`):**
- `23-ib-017_Ali_01_io.cpp`
- `23-ib-042_Maryam_02_sum.cpp`
- `23-ib-033_Zara_max_of_three.cpp`

> ✅ Files go **directly in** the session folder  
> ❌ Do **not** create `8Sep25/YourName/` subfolders

---

## 4) Rules (simple and strict)
- Use the **correct session folder** (e.g., `8Sep25/`).
- Use the **naming rule** exactly.
- **One program = one `.cpp` file**.
- **Source code only**: no ZIPs, screenshots, executables, or build outputs.
- Keep code **standard C++** (no external libraries).
- Make sure your file **compiles** (`g++ your_file.cpp`).

### Git hygiene
Add/keep these ignored:
```
*.exe
*.o
*.obj
*.out
*.log
.DS_Store
.vscode/
.idea/
```

### Commit message format (suggested)
```
[<DateFolder>] <short topic> – <roll>_<Name>
# Example:
[8Sep25] add 01_io – 23-ib-017_Ali
```

---

## 5) Review & PR checklist
- [ ] File is in the **correct session folder**.
- [ ] Filename matches `<roll>_<Name>_<shortTopicOrNumber>.cpp`.
- [ ] Code **compiles** locally.
- [ ] No binaries or extra files are committed.
- [ ] (If PR) Title like:  
      `[8Sep25] Add examples – 23-ib-017_Ali`

---

## 6) Example structure
```
8Sep25/
  23-ib-017_Ali_01_io.cpp
  23-ib-042_Maryam_02_sum.cpp
  23-ib-033_Zara_max_of_three.cpp
```

---

## 7) Need help?
- **If you are a collaborator:** Follow the README’s **“Quick start (Collaborators)”** section.  
- **If you are not a collaborator:** Use the **Fork → PR** steps above.  
- Stuck? Ask on the class channel or open a discussion.
