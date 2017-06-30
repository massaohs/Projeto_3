#ifndef DATA_H
#define DATA_H
#include <QDateTime>
/**
 * @brief A struct Data
 */
struct Data{
    /**
     * @brief tempo Armazena o tempo em que foi enviado o dado
     */
    qint64 tempo;
    /**
     * @brief valor Armazena o valor do dado enviado
     */
    int valor;
};

#endif // DATA_H
