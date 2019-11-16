class MySon:
    def __init__(self, name, age, kind, distinct, speak):
        self.name = name
        self.age = age
        self.kind = kind
        self.distinct = distinct
        self.speak = speak
    def bark(self):
        print(self.speak)

bokgil = MySon("복길", "Unknown", "Unknown", "Friendly", "FFF")
chapssal = MySon("찹쌀", "20day", "Mix", "Cute", "LLL")
cloud = MySon("구름", "6month", "Mix", "Very cute", "wheeyong")

bokgil.bark()
chapssal.bark()
cloud.bark()
print(cloud.distinct)