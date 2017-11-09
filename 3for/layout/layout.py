def input_space(input_space_w):
    # for input
    box = []
    box = [int(i) for i in raw_input().split(' ')]
    box_w = box[0]
    box_h = box[1]
    layout(box_w, box_h)
    return box_w, box_h


def layout(box_w, box_h):
    # when each loop, left
    left_space_w = input_space_w
    # output
    max_w = box_w
    max_h = box_h
    second_max_h = box_h
    # input each box
    while box_w != -1 and box_h != -1:
        # when need to make height space
        if left_space_w <= box_w:
            # get new line of left_space_w
            left_space_w = input_space_w - box_w
            second_max_h = max_h
            max_h += box_h
            # is max_w is max of all line width
            if max_w <= box_w:
                max_w = box_w
        # when no need to make next space
        else:
            left_space_w -= box_w
            # when adding box_w, is max_w smaller than used_space_w
            if max_w <= input_space_w - left_space_w + box_w:
                max_w = input_space_w - left_space_w + box_w
            if max_h <= second_max_h + box_h:
                max_h = second_max_h + box_h
        # for input
        box = []
        box = [int(i) for i in raw_input().split(' ')]
        box_w = box[0]
        box_h = box[1]
    print(max_w + str(' X ') + max_h)
    return max_w, max_h


input_space_w = input()
input_space(input_space_w)
