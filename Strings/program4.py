# Leetcode 2114
# Maximum Number of Words Found in Sentences



def mostWordsFound(sentences):
    """
    :type sentences: List[str]
    :rtype: int
    """
    return max(len(s.split(" ")) for s in sentences)


# driver code
if __name__ == "__main__":

	sentences = ["please wait", "continue to fight", "continue to win"]

	# function calling
	print(mostWordsFound(sentences));
