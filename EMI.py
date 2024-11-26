def calculate_emi(principal, rate, time):
    rate = rate / (12 * 100)  # Monthly interest rate
    emi = principal * rate * ((1 + rate) ** time) / (((1 + rate) ** time) - 1)
    return emi

def emi_calculator():
    principal = float(input("Enter the loan amount (Principal): "))
    rate = float(input("Enter the annual interest rate (in percentage): "))
    time = int(input("Enter the loan tenure (in months): "))

    emi = calculate_emi(principal, rate, time)
    print(f"Your monthly EMI is: {emi:.2f}")

emi_calculator()
