// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSSIGNATUREV0_H
#define AWSSIGNATUREV0_H

#include "qtawscoreglobal.h"
#include "awsabstractsignature.h"

namespace QtAws {
namespace Core {

class AwsSignatureV0Private;

class QTAWSCORE_EXPORT AwsSignatureV0 : public AwsAbstractSignature {

public:
    AwsSignatureV0();

    virtual void sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data = QByteArray()) const Q_DECL_OVERRIDE;

    virtual int version() const Q_DECL_OVERRIDE;

protected:
    /// @cond internal
    explicit AwsSignatureV0(AwsSignatureV0Private * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(AwsSignatureV0)
    Q_DISABLE_COPY(AwsSignatureV0)
    friend class TestAwsSignatureV0;
};

} // namespace Core
} // namespace QtAws

#endif
