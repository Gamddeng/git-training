#def exam_arg(** kwargs):
#    print(kwargs)
#    print(type(kwargs))

#exam_arg(key='test', word='출력', args=123)

def exam_docstring (* args):
    """
    :param args:
    :return:
    """

print(exam_docstring.__doc__)