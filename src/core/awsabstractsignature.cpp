#include "awsabstractsignature.h"

#include <QBuffer>
#include <QtNetwork/QNetworkRequest>

QTAWS_BEGIN_NAMESPACE

AwsAbstractSignature::AwsAbstractSignature(QObject * const parent) : QObject(parent) { }

QTAWS_END_NAMESPACE
