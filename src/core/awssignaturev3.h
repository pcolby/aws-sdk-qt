/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSSIGNATUREV3_H
#define AWSSIGNATUREV3_H

#include "qtawsglobal.h"
#include "awsabstractsignature.h"

#include <QCryptographicHash>

namespace QtAws {
namespace Core {

class AwsSignatureV3Private;

class QTAWS_EXPORT AwsSignatureV3 : public AwsAbstractSignature {

public:
    AwsSignatureV3(const QCryptographicHash::Algorithm hashAlgorithm = QCryptographicHash::Sha256);

    virtual void sign(const AwsAbstractCredentials &credentials,
                      const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data = QByteArray()) const Q_DECL_OVERRIDE;

    virtual int version() const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AwsSignatureV3)
    Q_DISABLE_COPY(AwsSignatureV3)
    friend class TestAwsSignatureV3;
};

} // namespace Core
} // namespace QtAws

#endif
