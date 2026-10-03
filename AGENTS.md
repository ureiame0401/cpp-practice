# Repository purpose

這個 repository 用來保存程式學習歷程，不是單純的 ZeroJudge 題庫。

內容可能包含：

- ZeroJudge、APCS 或其他線上題目
- 學校老師出的題目
- 課堂示範或練習
- 校內競賽
- 自己的測試或實驗
- 同一題的 debug、correct、不同解法版本
- C++、Python 等不同語言實作
- 筆記與截圖

`README.md` 是簡短首頁。

`LEARNING_LOG.md` 是詳細的學習歷程索引。

# Learning Log

更新 `LEARNING_LOG.md` 時：

1. 只根據已被 Git 追蹤並已 commit 的學習內容整理。
2. 不要把 untracked 或尚未 commit 的內容加入 Learning Log。
3. 以增量更新為主，不要每次重新撰寫整份 Learning Log。
4. 同一題或同一學習活動的不同版本應盡量合併，包括：
   - 不同語言實作
   - debug / correct / good-solve
   - 不同演算法
   - 不同日期的持續練習
   - 對應的筆記與截圖
5. 新檔案如果屬於既有 activity，更新原本項目，不要建立重複項目。
6. 不要只靠檔名判斷題目來源。
7. 只有能由程式內容、題目資料或可靠來源確認時，才標示 ZeroJudge、APCS 等來源。
8. 無法可靠判斷來源時使用 `Unknown / Practice`。
9. 不要自行假設程式已 AC。
10. 已有可靠 AC 紀錄的項目可以保留 AC。
11. 一般沒有特殊狀態、也沒有可靠 AC 證據時，Status 使用「—」。
12. 「—」不代表 AC。
13. 有實際意義時才使用 Practice、Debug、Incomplete、Empty draft、Needs optimization、AC 等狀態。

# ZeroJudge status sync

使用者有時會直接提供從登入後的 ZeroJudge `UserStatistic.api` 複製出的 JSON。

當使用者提供這類 JSON，並要求 sync、update AC、更新 AC 或意思相近的操作時：

1. 將提供的 JSON 視為使用者手動提供的 ZeroJudge 狀態快照。
2. 使用已確認的 ZeroJudge problem ID 與 `LEARNING_LOG.md` 中的項目進行對照。
3. JSON 中某題 `status == 1` 時，可以將該題標記為 AC。
4. `status != 1` 本身不代表 repository 中的程式錯誤、未完成或目前無法通過。
5. 沒有確認 AC 的題目，如果已有具有學習意義的狀態，例如：
   - Practice
   - Debug
   - Incomplete
   - Empty draft
   - Needs optimization
   則保留該狀態。否則使用「—」。
6. 不要因為檔名包含 correct、good-solve、solved、final 或類似文字就推定 AC。
7. 不要將使用者提供的 `UserStatistic` JSON 儲存進 repository。
8. 不要將 Cookie、登入資訊、session 或其他 ZeroJudge 帳號資料寫入 repository。
9. 如果任務只是同步 ZeroJudge 狀態，只修改 `LEARNING_LOG.md`。
10. 完成後回報哪些題目的狀態變更為 AC。

# Editing rules

當任務只是維護 Learning Log 或同步 ZeroJudge 狀態時：

1. 只修改 `LEARNING_LOG.md`。
2. 不要修改 `README.md`。
3. 不要修改、重新命名、移動或刪除程式碼、筆記、截圖或其他學習檔案。
4. 如果 `LEARNING_LOG.md` 已有使用者尚未 commit 的修改，不要覆蓋。
5. 不要 stage 或 commit 使用者其他尚未提交的變更。
6. 除非使用者或外部自動化任務明確要求，否則不要自行 commit 或 push。

不要在 `AGENTS.md` 中加入特定排程時間、commit message 或自動 push 規則。這些由外部自動化任務另外決定。
