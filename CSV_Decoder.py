import os
import pandas as pd
import tkinter as tk
from tkinter import filedialog

#Open a dialog to select the CSV file
root = tk.Tk()
root.withdraw()
my_dir = os.getcwd()
pattern = (('CSV', '*.csv'),)
file_path = filedialog.askopenfilename(initialdir=my_dir, filetypes=pattern)

#Processing the file
raw_df = pd.read_csv (file_path, sep='\t')
clk0_df = raw_df.loc[(raw_df['CLK'] == 0)]

bin_concat=""
numbytes=0
with open('output.txt', 'w') as f:
    for i, j in clk0_df.iterrows():
        bin_concat=bin_concat+str(int(j['Serial OUT']))
        numbytes+=1;
        if numbytes == 8:        
            decimal_representation = int(bin_concat, 2)
            f.write(format(decimal_representation, '02X'))
            f.write(' ')
            numbytes=0
            bin_concat=""
