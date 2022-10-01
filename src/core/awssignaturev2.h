// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSSIGNATUREV2_H
#define AWSSIGNATUREV2_H

#include "qtawscoreglobal.h"
#include "awsabstractsignature.h"

#include <QCryptographicHash>

namespace QtAws {
namespace Core {

class AwsSignatureV2Private;

class QTAWSCORE_EXPORT AwsSignatureV2 : public AwsAbstractSignature {

public:
    AwsSignatureV2(const QCryptographicHash::Algorithm hashAlgorithm = QCryptographicHash::Sha256);

    virtual void sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data = QByteArray()) const Q_DECL_OVERRIDE;

    virtual int version() const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AwsSignatureV2)
    Q_DISABLE_COPY(AwsSignatureV2)
    friend class TestAwsSignatureV2;
};

} // namespace Core
} // namespace QtAws

#endif
