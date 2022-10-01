// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSSIGNATUREV4_H
#define AWSSIGNATUREV4_H

#include "qtawscoreglobal.h"
#include "awsabstractsignature.h"

#include <QCryptographicHash>

namespace QtAws {
namespace Core {

class AwsSignatureV4Private;

class QTAWSCORE_EXPORT AwsSignatureV4 : public AwsAbstractSignature {

public:
    AwsSignatureV4(const QCryptographicHash::Algorithm hashAlgorithm = QCryptographicHash::Sha256);

    virtual void sign(const AwsAbstractCredentials &credentials,
                      const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data = QByteArray()) const Q_DECL_OVERRIDE;

    virtual int version() const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AwsSignatureV4)
    Q_DISABLE_COPY(AwsSignatureV4)
    friend class TestAwsSignatureV4;
};

} // namespace Core
} // namespace QtAws

#endif
