if __name__ == '__main__':
    #List of students ["name", score]
    students = []
    #stores all scores for finding max score
    scores = []
    #holds max score
    min = float("inf")
    #holds second highest score
    secondMin = float("inf")
    
    #takes all user inpute and stores them in lists
    for _ in range(int(input())):
        name = input()
        score = float(input())
        #appends score to scores list to find the max score
        scores.append(score)
        #stores the highest score in max
        if score < min:
            min = score
        #self explanitory
        grade = [name,score]
        students.append(grade)
    
    scores.sort()
    # print(scores)
    #traverses through scores to get the second highest score
    for x in scores:
        if x == min:
            continue
        else:
            secondMin = x
            break
    students.sort()
    # print(students)
    # print(max)
    # print(secondMax)

    #using list comprehension to find which students have the second highest scores
    rup = [name for [name, score] in students if score == secondMin]

    for x in rup:
        print(x)