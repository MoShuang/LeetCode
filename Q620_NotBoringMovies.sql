# Write your MySQL query statement below
# SELECT `id`, `movie`, `description`, `rating` FROM `cinema` WHERE `description`!='boring' ORDER BY `rating`;
# SELECT * FROM `cinema` WHERE `description`!=('boring' OR 'fiction') ORDER BY `rating` DESC LIMIT 2; 
# 看清题目要求啊：id为奇数且影片描述不是boring
SELECT * FROM cinema WHERE description != 'boring' AND  MOD(id, 2)=1 ORDER BY rating DESC;