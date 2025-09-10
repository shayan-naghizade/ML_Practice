# ML_Practice

# 🧠 Machine Learning Exercises

This repository contains three basic machine learning exercises, each focusing on a different algorithm and task.

---

## 📈 Exercise 1 – House Price Prediction (Regression)

In this exercise, we predict house prices using regression techniques.

### Implemented Steps:

1. **Simple Linear Regression**  
   Built a basic model using a single feature (e.g., square footage) to predict house prices.

2. **Polynomial Regression**  
   Extended the model with polynomial features to capture non-linear relationships between the input and target.

3. **Multiple Linear Regression**  
   Included multiple features to build a more accurate prediction model.

---

## 🤖 Exercise 2 – Diabetes Prediction (KNN)

This exercise uses the K-Nearest Neighbors (KNN) algorithm to predict diabetes based on patient data.

### Implemented Steps:

1. **Data Cleaning**  
   Replaced zero values in `Insulin`, `BloodPressure`, `Glucose`, and `SkinThickness` with the median, since zero is not a valid value for these features.

2. **Outlier Handling**  
   Detected and replaced outliers using boxplot analysis.

3. **Class Balancing**  
   Balanced the dataset using **SMOTE** to handle class imbalance.

4. **Model Training**  
   Applied **K-Fold Cross-Validation** for robust training and evaluation.

5. **Distance Weight Optimization**  
   Tuned distance metrics and weighting to improve overall model performance.

---

## 🔻 Exercise 3 – Dimensionality Reduction (PCA)

In this exercise, we use **Principal Component Analysis (PCA)** to reduce the dimensionality of a numerical dataset.


##...
### Implemented Steps:

- Applied PCA to identify the most important components.
- Evaluated how much dimensionality could be reduced while retaining meaningful variance in the data.

---
