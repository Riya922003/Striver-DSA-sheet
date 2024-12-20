class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        freq_dict = {chr(i): 0 for i in range(ord('A'), ord('Z') + 1)}
        left, right = 0, 0
        max_freq = 0
        max_len = 0
        while right < len(s):
            freq_dict[s[right]] += 1
            max_freq = max(max_freq, freq_dict[s[right]])
            if (right - left + 1) - max_freq > k:
                freq_dict[s[left]] -= 1
                left += 1
            max_len = max(max_len, right - left + 1)
            right += 1
        return max_len