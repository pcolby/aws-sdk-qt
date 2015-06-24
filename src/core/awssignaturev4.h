/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSSIGNATUREV4_H
#define AWSSIGNATUREV4_H

#include "qtawsglobal.h"
#include "awsabstractsignature.h"

#include <QCryptographicHash>

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV4Private;

class QTAWS_EXPORT AwsSignatureV4 : public AwsAbstractSignature {

public:
    AwsSignatureV4(const QCryptographicHash::Algorithm hashAlgorithm = QCryptographicHash::Sha256);

    virtual void sign(const AwsAbstractCredentials &credentials,
                      const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data = QByteArray()) const;

    virtual int version() const;

private:
    Q_DECLARE_PRIVATE(AwsSignatureV4)
    Q_DISABLE_COPY(AwsSignatureV4)
    friend class TestAwsSignatureV4;
};

QTAWS_END_NAMESPACE

#endif
