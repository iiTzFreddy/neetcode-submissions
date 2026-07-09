class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        if len(strs) == 1:
            return [strs]

        bucket = [[] for _ in range(len(strs))]
        
        for word in strs:
            for index in range(len(bucket)):
                if not bucket[index] or sorted(bucket[index][0]) == sorted(word):
                    bucket[index].append(word)
                    break
        result = [b for b in bucket if b]
        return result    
