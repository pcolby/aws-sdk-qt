/*
    Copyright 2013 Paul Colby

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

#ifndef AWSSIGNATUREV3_H
#define AWSSIGNATUREV3_H

#include "qtawsglobal.h"
#include "awsabstractsignature.h"

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV3Private;

class QTAWS_EXPORT AwsSignatureV3 : public AwsAbstractSignature {
    Q_DECLARE_PRIVATE(AwsSignatureV3)

public:
    AwsSignatureV3();

    ~AwsSignatureV3();

    virtual void sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data = QByteArray()) const;

    virtual int version() const;

private:
    AwsSignatureV3Private * const d_ptr; ///< Internal d-pointer.
    friend class TestAwsSignatureV3;
};

QTAWS_END_NAMESPACE

#endif
