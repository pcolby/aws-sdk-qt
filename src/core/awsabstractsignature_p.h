// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSABSTRACTSIGNATURE_P_H
#define AWSABSTRACTSIGNATURE_P_H

#include "qtawscoreglobal.h"

#include <QNetworkAccessManager>
#include <QUrlQuery>

namespace QtAws {
namespace Core {

class AwsAbstractSignature;

class AwsAbstractSignaturePrivate {

public:
    virtual ~AwsAbstractSignaturePrivate();

    explicit AwsAbstractSignaturePrivate(AwsAbstractSignature * const q);

    QString canonicalPath(const QUrl &url) const;

    virtual QByteArray canonicalQuery(const QUrlQuery &query) const;

    QString httpMethod(const QNetworkAccessManager::Operation operation) const;

    bool setQueryItem(QUrlQuery &query, const QString &key, const QString &value,
                      const bool warnOnNonIdenticalDuplicate = true) const;

protected:
    AwsAbstractSignature * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(AwsAbstractSignature)
    Q_DISABLE_COPY(AwsAbstractSignaturePrivate)
    friend class TestAwsAbstractSignature;
};

} // namespace Core
} // namespace QtAws

#endif
