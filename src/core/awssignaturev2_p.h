// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSSIGNATUREV2_P_H
#define AWSSIGNATUREV2_P_H

#include "qtawscoreglobal.h"
#include "awsabstractsignature_p.h"

#include <QCryptographicHash>
#include <QNetworkAccessManager>
#include <QUrl>

namespace QtAws {
namespace Core {

class AwsSignatureV2;

class AwsSignatureV2Private : public AwsAbstractSignaturePrivate {

public:
    QCryptographicHash::Algorithm hashAlgorithm; ///< Hash algorithm to use when signing.

    AwsSignatureV2Private(const QCryptographicHash::Algorithm algorithm, AwsSignatureV2 * const q);

    void adornRequest(QNetworkRequest &request, const AwsAbstractCredentials &credentials) const;

    QByteArray canonicalRequest(const QNetworkAccessManager::Operation operation, const QUrl &url) const;

    QByteArray signatureMethod(const QCryptographicHash::Algorithm algorithm) const;

private:
    Q_DECLARE_PUBLIC(AwsSignatureV2)
    Q_DISABLE_COPY(AwsSignatureV2Private)
    friend class TestAwsSignatureV2;
};

} // namespace Core
} // namespace QtAws

#endif
