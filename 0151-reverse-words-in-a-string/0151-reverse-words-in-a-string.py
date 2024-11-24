class Solution:
    def reverseWords(self, s: str) -> str:
        # Split the input string into a list of words
        words = s.split()
        # Reverse the order of words
        reversed_words = words[::-1]
        # Join the reversed words into a single string with a space between them
        result = ' '.join(reversed_words)
        return result
        