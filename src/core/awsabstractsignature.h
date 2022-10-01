// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSABSTRACTSIGNATURE_H
#define AWSABSTRACTSIGNATURE_H

#include "qtawscoreglobal.h"
#include "awsabstractcredentials.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
namespace Core {

class AwsAbstractSignaturePrivate;

class QTAWSCORE_EXPORT AwsAbstractSignature {

public:
    AwsAbstractSignature();

    virtual ~AwsAbstractSignature();

    virtual void sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data = QByteArray()) const = 0;

    virtual int version() const = 0;

protected:
    /// @cond internal
    AwsAbstractSignaturePrivate * const d_ptr; ///< Internal d-pointer.
    explicit AwsAbstractSignature(AwsAbstractSignaturePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(AwsAbstractSignature)
    Q_DISABLE_COPY(AwsAbstractSignature)
    friend class TestAwsAbstractSignature;
};

} // namespace Core
} // namespace QtAws

#endif
