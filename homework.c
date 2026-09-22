#include <stdio.h>
#include <locale.h>

int main() {
    // Объявление и инициализация констант
    const float BASE_HOURS = 38.0;
    const float OVERTIME_COEF = 1.5;

    // Шаг 1: Задание конкретных значений переменных
    float x = 200.0;
    float a = 40.0;

    setlocale(LC_CTYPE, "");

    // Шаг 2: Расчет оплаты за первые 38 часов
    float base_pay = BASE_HOURS * x;

    // Шаг 3: Расчет сверхурочных часов и их оплаты
    float overtime_hours = a - BASE_HOURS;
    float overtime_rate = x * OVERTIME_COEF;
    float overtime_pay = overtime_hours * overtime_rate;
    // Шаг 4: Расчет общей суммы к оплате
    float total_pay = base_pay + overtime_pay;

    // Шаг 5: Форматированный вывод результатов
    printf("РАСЧЕТ ЗАРАБОТНОЙ ПЛАТЫ\n");
    printf("----------------------------------------\n");
    printf("УСЛОВИЯ:\n");
    printf("- Почасовая ставка (x): %.2f руб.\n", x);
    printf("- Отработано часов (a): %.0f ч.\n", a);
    printf("- Базовая норма часов: %.0f ч.\n", BASE_HOURS);
    printf("- Коэффициент сверхурочных: %.1f\n\n", OVERTIME_COEF);

    printf("РАСЧЕТ:\n");
    printf("- Оплата за первые %.0f ч.: %.0f * %.2f = %.2f руб.\n", BASE_HOURS, BASE_HOURS, x, base_pay);
    printf("- Сверхурочные часы: %.0f - %.0f = %.0f ч.\n", a, BASE_HOURS, overtime_hours);
    printf("- Ставка за сверхурочный час: %.2f * %.1f = %.2f руб.\n", x, OVERTIME_COEF, overtime_rate);
    printf("- Оплата за сверхурочные: %.0f * %.2f = %.2f руб.\n", overtime_hours, overtime_rate, overtime_pay);
    printf("----------------------------------------\n");
    printf("ОБЩАЯ СУММА К ВЫПЛАТЕ: %.2f руб.\n", total_pay);

    return 0;
}