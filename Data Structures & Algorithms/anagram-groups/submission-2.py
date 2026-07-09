class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mapA = defaultdict(list)
        for i in strs:
            sortedi = "".join(sorted(i))
            mapA[sortedi].append(i)
        return list(mapA.values())
