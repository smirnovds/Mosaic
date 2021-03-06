#ifndef PHOTOSEGMENT_H
#define PHOTOSEGMENT_H

#endif // PHOTOSEGMENT_H
#include <QPixmap>
#include <QString>
#include <QHash>

struct PhotoSegment {
    QPixmap *photo = nullptr;
    QHash<QString, QString> segment;
    QHash<QString, QString> common;
};
