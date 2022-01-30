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
print (clk0_df)