# class Info:
#     def __init__(self) -> None:
#         pass
#     def
file="./DataBase/data.txt"
def get_all_articles()->list:
    with open(file,"r") as f:
        data = f.read().split("Article")
    # print(data)
    articles=[]
    for i in data[2:]:
        i=i.strip()
        articles.append(i)
    return articles

# get_all_articles()
# def get_each_article(data)->list:
#     articles=[]
#     for i in data[2:]:
#         # print(i.strip())
#         articles.append(i)
#     return articles

# print(get_all_articles())
dat=[]
for i in get_all_articles():
    print(i)
    i.split(",")
    dat.append(i)
print(dat)
    # for j in i:
    #     print(j)