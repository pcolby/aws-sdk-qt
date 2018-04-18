/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSSIGNATUREV0_H
#define AWSSIGNATUREV0_H

#include "qtawsglobal.h"
#include "awsabstractsignature.h"

namespace QtAws {
namespace Core {

class AwsSignatureV0Private;

class QTAWS_EXPORT AwsSignatureV0 : public AwsAbstractSignature {

public:
    AwsSignatureV0();

    virtual void sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data = QByteArray()) const override;

    virtual int version() const override;

protected:
    /// @cond internal
    AwsSignatureV0(AwsSignatureV0Private * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(AwsSignatureV0)
    Q_DISABLE_COPY(AwsSignatureV0)
    friend class TestAwsSignatureV0;
};

} // namespace Core
} // namespace QtAws

#endif
