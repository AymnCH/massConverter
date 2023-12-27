#include <stdio.h>
#include <stdlib.h>

double kgToPound(double kilogram)
{
    kilogram = kilogram * 2.205;
    return kilogram;
}
double kgToGram(double kilogram)
{
    kilogram = kilogram * 1000;
    return kilogram;
}
double kgToMilligram(double kilogram)
{
    kilogram = kilogram * 1000000;
    return kilogram;
}
double kgToOunce(double kilogram)
{
    kilogram = kilogram * 35.274;
    return kilogram;
}
double gramToKg(double gram)
{
    gram = gram / 1000;
    return gram;
}
double gramToMilligram(double gram)
{
    gram = gram * 1000;
    return gram;
}
double gramToPound(double gram)
{
    gram = gram / 453.6;
    return gram;
}
double gramToOunce(double gram)
{
    gram = gram / 28.35;
    return gram;
}
double mgToKg(double mg)
{
    mg = mg / 1000000;
    return mg;
}
double mgToGram(double mg)
{
    mg = mg / 1000;
    return mg;
}
double mgToPound(double mg)
{
    mg = mg / 453600;
    return mg;
}
double mgToOunce(double mg)
{
    mg = mg / 28350;
    return mg;
}
double poundToKg(double pound)
{
    pound = pound / 2.205;
    return pound;
}
double poundToGram(double pound)
{
    pound = pound * 453.6;
    return pound;
}
double poundToMilligram(double pound)
{
    pound = pound * 453600;
    return pound;
}
double poundToOunce(double pound)
{
    pound = pound / 28350;
    return pound;
}
double ounceToKg(double ounce)
{
    ounce = ounce / 35.274;
    return ounce;
}
double ounceToGram(double ounce)
{
    ounce = ounce * 28.35;
    return ounce;
}
double ounceToMg(double ounce)
{
    ounce = ounce / 28350;
    return ounce;
}
double ounceToPound(double ounce)
{
    ounce = ounce / 16;
    return ounce;
}

int main()
{
    double inputValue;
    int sourceUnit, targetUnit;

    printf("Enter the value to convert: ");
    scanf("%lf", &inputValue);

    printf("Choose source unit:\n");
    printf("1. Kilogram\n");
    printf("2. Gram\n");
    printf("3. Milligram\n");
    printf("4. Pound\n");
    printf("5. Ounce\n");
    scanf("%d", &sourceUnit);

    printf("Choose target unit:\n");
    printf("1. Kilogram\n");
    printf("2. Gram\n");
    printf("3. Milligram\n");
    printf("4. Pound\n");
    printf("5. Ounce\n");
    scanf("%d", &targetUnit);

    switch (sourceUnit)
    {
    case 1: // Kilogram
        switch (targetUnit)
        {
        case 1: // Kilogram to Kilogram
            printf("Converted value: %.2lf\n", inputValue);
            break;
        case 2: // Kilogram to Gram
            printf("Converted value: %.2lf\n", kgToGram(inputValue));
            break;
        case 3: // Kilogram to Milligram
            printf("Converted value: %.2lf\n", kgToMilligram(inputValue));
            break;
        case 4:

            printf("Converted value: %.2lf\n", kgToPound(inputValue));
            break;
        case 5:

            printf("Converted value: %.2lf\n", kgToOunce(inputValue));
            break;

        default:
            printf("Invalid target unit.\n");
            return 1; // Error
        }
        break;
    case 2: // Gram
        switch (targetUnit)
        {
        case 1: // Gram to kilogram

            printf("Converted value: %.2lf\n", gramToKg(inputValue));
            break;
        case 2: // gram to gram
            printf("Converted value: %.2lf\n", inputValue);
            break;
        case 3: // gram to Milligram

            printf("Converted value: %.2lf\n", gramToMilligram(inputValue));
            break;
        case 4: // gram to pound

            printf("Converted value: %.2lf\n", gramToPound(inputValue));
            break;
        case 5: // gram to ounce

            printf("Converted value: %.2lf\n", gramToOunce(inputValue));
            break;

        default:
            printf("Invalid target unit.\n");
            return 1; // Error
        }
        break;
    case 3: // Milligram
        switch (targetUnit)
        {
        case 1: // Milligram to kilogram

            printf("Converted value: %.2lf\n", mgToKg(inputValue));
            break;
        case 2: // Milligram to gram

            printf("Converted value: %.2lf\n", mgToGram(inputValue));
            break;
        case 3: // Milligram to Milligram
            printf("Converted value: %.2lf\n", inputValue);
            break;
        case 4: // Milligram to pound

            printf("Converted value: %.2lf\n", mgToPound(inputValue));
            break;
        case 5: // Milligram to ounce

            printf("Converted value: %.2lf\n", mgToOunce(inputValue));
            break;

        default:
            printf("Invalid target unit.\n");
            return 1; // Error
        }
        break;
    case 4: // pound
        switch (targetUnit)
        {
        case 1: // Pound to kilogram

            printf("Converted value: %.2lf\n", poundToKg(inputValue));
            break;
        case 2: // Pound to gram

            printf("Converted value: %.2lf\n", poundToGram(inputValue));
            break;
        case 3: // Pound to Milligram

            printf("Converted value: %.2lf\n", poundToMilligram(inputValue));
            break;
        case 4: // Pound to pound
            printf("Converted value: %.2lf\n", inputValue);
            break;
        case 5: // Pound to ounce

            printf("Converted value: %.2lf\n", poundToOunce(inputValue));
            break;

        default:
            printf("Invalid target unit.\n");
            return 1; // Error
        }
        break;
    case 5: // Ounce
        switch (targetUnit)
        {
        case 1: // Ounce to kilogram

            printf("Converted value: %.2lf\n", ounceToKg(inputValue));
            break;
        case 2: // Ounce to gram

            printf("Converted value: %.2lf\n", ounceToGram(inputValue));
            break;
        case 3: // Ounce to Milligram

            printf("Converted value: %.2lf\n", ounceToGram(inputValue));
            break;
        case 4: // Ounce to pound

            printf("Converted value: %.2lf\n", ounceToPound(inputValue));
            break;
        case 5: // Ounce to ounce

            printf("Converted value: %.2lf\n", inputValue);
            break;

        default:
            printf("Invalid target unit.\n");
            return 1; // Error
        }
    }

    return 0;
}