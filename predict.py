import matplotlib.pyplot as plt
import numpy as np

import pandas as pd
import random

data = pd.read_excel("耦合协调度汇总表.xlsx", index_col='region')
train_sample_list = random.sample([i for i in range(29)], 5)


def train(train_sample_ind):
    max_epoch_count = 10000
    step = 0.0002

    loss_list = []
    a = np.random.rand(10)
    b = np.random.rand(1)

    # Train
    for epoch in range(max_epoch_count):
        data_ind = data.iloc[train_sample_ind]
        data_np = np.array(data_ind)

        # 数据归一化（0， 1）
        data_np = data_np / data_np.max()
        for i in range(5):
            train_data = data_np[i:10 + i]
            label_data = data_np[10 + i]

            predict_data = np.dot(train_data, a) + b

            # calculate loss
            loss = 0.5 * (predict_data - label_data) ** 2

            # 更新权重a和偏置b
            for j in range(10):
                a[j] = a[j] - a[j] * loss * step
            b = b - loss * step

        if epoch % 10 == 0:
            loss_list.append([epoch, float(loss)])

    loss_list_np = np.array(loss_list)
    print("Loss : ", loss_list_np[-1, 1])

    # test
    # 这里用训练的数据测试，其实是不好的，验证不了泛化能力
    test_result_list = []
    data_ind = data.iloc[train_sample_ind]
    data_np = np.array(data_ind)
    loss_sum = 0
    for j in range(5):
        train_data = data_np[j:10 + j]
        label_data = data_np[10 + j]
        predict_data = np.dot(train_data, a) + b

        # calculate error
        loss = 0.5 * (predict_data - label_data) ** 2
        loss_sum += loss
        
    test_result_list.append(loss_sum / 5.0)
    print(test_result_list)


for ind in train_sample_list:
    print(ind)
    train(ind)

