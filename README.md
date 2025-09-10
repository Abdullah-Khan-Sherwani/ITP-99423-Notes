# ITP-99423 — Notes & Examples

Welcome 👋  
This repository contains the **C++ examples taught in class** plus students’ own practice programs.

> **Collaborator-first workflow:** Students are **added as collaborators**.  
> ✅ Prefer **clone → branch → PR**.  
> ℹ️ Forking remains available but is **optional** (see the collapsible section at the end).

**Repo link:** https://github.com/Abdullah-Khan-Sherwani/ITP-99423-Notes

---

## 📂 Folder structure

- Each class session = **one folder** named by date.
- **Format:** `DDMonYY`  
  - Example: `8Sep25/` for class held on **8 September 2025**.
- **All student files go directly inside** that session folder (no extra subfolders).

**Example layout**
```
8Sep25/
  23-ib-017_Ali_01_io.cpp
  23-ib-042_Maryam_02_sum.cpp
  23-ib-033_Zara_max_of_three.cpp
```

---

## 🧾 File naming

Use:
```
<roll>_<Name>_<shortTopicOrNumber>.cpp
```

Examples:
```
23-ib-042_Maryam_01_io.cpp
23-ib-017_Ali_max_of_three.cpp
```

> Tip: Use `_01_`, `_02_`, … if you’re submitting multiple files for the same date.

---

## 🚀 Quick start (Collaborators)

### 1) Accept the invite & clone
~~~bash
git clone https://github.com/Abdullah-Khan-Sherwani/ITP-99423-Notes.git
cd ITP-99423-Notes
~~~

### 2) Pull changes from git and Add your code in the correct session folder (Or create the folder for the class if it has not been made)
~~~bash
git pull --rebase origin main
~~~

### 3) Commit your changes
~~~bash
git add 8Sep25/*.cpp
git commit -m "8Sep25: add 01_io.cpp (23-ib-042_Maryam)"
~~~

### 4) Sync with latest `main` (avoid conflicts)
~~~bash
git pull --rebase origin main
~~~

### 5) Push to `main`
~~~bash
git push origin main
~~~

---

💡 **Tip (professional workflow):** Most teams use **feature branches + Pull Requests** instead of pushing to `main` directly (e.g., `git switch -c 8Sep25/maryam-01-io` → push → open PR). This keeps reviews and history clean.


## ✍️ Quick edits via GitHub Web (alternative)
1. Open the repo → navigate to the session folder (e.g., `8Sep25/`).  
2. **Add file → Create new file** or **Upload files**.  
3. Use the naming rule above.  
4. Commit to **a new branch** and open a PR.

---

## ⚠️ Rules

- Put files **directly in the correct session folder** (e.g., `8Sep25/`).
- Use the **naming format** exactly: `<roll>_<Name>_<shortTopicOrNumber>.cpp`.
- Try **not** commit compiled binaries or IDE junk.  
  Add these patterns to your global or local `.gitignore` if needed:
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

---

## 🧰 Helpful Git commands

```bash
# Configure your identity (once per machine/repo)
git config user.name "Your Name"
git config user.email "you@example.com"

# See what changed
git status
git diff

# Update your branch with latest main
git pull --rebase origin main

# Switch branches
git switch <branch>

# Undo last local commit (keep changes staged)
git reset --soft HEAD~1
```

---

<details>
<summary><strong>🍴 Forking (optional)</strong> — keep for special cases</summary>

If you are **not a collaborator** or prefer working via a fork:

1) **Fork** the repo (top-right on GitHub).  
2) Clone **your fork**:
```bash
git clone https://github.com/<your-username>/ITP-99423-Notes.git
cd ITP-99423-Notes
```
3) Add the upstream remote:
```bash
git remote add upstream https://github.com/Abdullah-Khan-Sherwani/ITP-99423-Notes.git
git fetch upstream
git switch -c 8Sep25/maryam-01-io
git pull --rebase upstream main
```
4) Push and open a PR back to the upstream repo:
```bash
git push -u origin 8Sep25/maryam-01-io
```

</details>
