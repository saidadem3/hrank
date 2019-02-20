if __name__ == '__main__':
    #how many students we will create in our dictionary
    n = int(input())
    student_marks = {}
    #first input (name) is the key for the dictionary (student_marks) - line 9
    #(*line) takes multiple inputs and stores them as the values to a student - line 9
    #(scores) converts each number to a float then stores the values to a list - line 11
    #(s_m[name] = scores) adds new item to dictionary - line 12
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()

    grades = student_marks.get(query_name)
    print("%.2f" % float(sum(grades)/len(grades)))