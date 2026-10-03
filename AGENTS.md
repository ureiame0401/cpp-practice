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

使用者有時會直接提供從登入後的 ZeroJudge API 複製出的 JSON，包括：

- `UserStatistic.api`
- `ShowVClass.api`

這些 JSON 是使用者手動提供的 ZeroJudge 狀態快照，用來同步 `LEARNING_LOG.md` 中已確認的 AC 狀態。

處理 ZeroJudge status sync 時：

1. 對於 `UserStatistic.api`：
   - 某題 `status == 1` 時，視為可靠的 AC 證據。
2. 對於 `ShowVClass.api`：
   - 某題 `acStatus == "AC"` 時，視為該題已在 ZeroJudge Course / Contest 中 AC 的可靠證據。
3. 任一來源確認 AC，都可以將 `LEARNING_LOG.md` 中對應題目的 Status 更新為 AC。
4. 這些 API 不應被視為所有 AC 紀錄的完整集合。
5. 某題沒有出現在其中一個 API、`status != 1`，或沒有顯示 AC，都不能用來證明該題沒有 AC。
6. 已經有可靠證據確認為 AC 的項目，不可以只因為之後提供的 API JSON 沒有該題 AC 紀錄而取消 AC。
7. 使用已確認的 ZeroJudge problem ID 對照 `LEARNING_LOG.md`。
8. 不要因為檔名包含 correct、good-solve、solved、final 或類似文字推定 AC。
9. 對於沒有確認 AC 的項目：
   - 如果已有 Practice、Debug、Incomplete、Empty draft、Needs optimization 等有意義的狀態，保留原狀態。
   - 否則維持「—」。
10. 不要將使用者提供的 API JSON 儲存進 repository。
11. 不要將 Cookie、登入資訊、session 或其他 ZeroJudge 帳號資料寫入 repository。
12. 如果任務只是同步 ZeroJudge 狀態，只修改 `LEARNING_LOG.md`。
13. 完成同步後回報：
   - 哪些題目新確認為 AC
   - AC 是由 `UserStatistic.api` 或 `ShowVClass.api` 哪個來源確認

# Editing rules

當任務只是維護 Learning Log 或同步 ZeroJudge 狀態時：

1. 只修改 `LEARNING_LOG.md`。
2. 不要修改 `README.md`。
3. 不要修改、重新命名、移動或刪除程式碼、筆記、截圖或其他學習檔案。
4. 如果 `LEARNING_LOG.md` 已有使用者尚未 commit 的修改，不要覆蓋。
5. 不要 stage 或 commit 使用者其他尚未提交的變更。
6. 除非使用者或外部自動化任務明確要求，否則不要自行 commit 或 push。

不要在 `AGENTS.md` 中加入特定排程時間、commit message 或自動 push 規則。這些由外部自動化任務另外決定。
