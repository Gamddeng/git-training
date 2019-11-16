sample_dict1 = {"name":"전윤재"}
sample_dict2 = {"age":20, "job":"developer", "name":"hong3"}
sample_dict3 = {"key":"세상"}
sample_dict3.update(sample_dict1)
print(sample_dict3)
sample_dict3.update(sample_dict2)
print(sample_dict3)
del  sample_dict3["key"]
print(sample_dict3)
