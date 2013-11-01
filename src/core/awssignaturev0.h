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

#ifndef AwsSignatureV0_H
#define AwsSignatureV0_H

#include "qtawsglobal.h"
#include "awsabstractsignature.h"

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV0Private;

class QTAWS_EXPORT AwsSignatureV0 : public AwsAbstractSignature {
    Q_DECLARE_PRIVATE(AwsSignatureV0)

public:
    AwsSignatureV0();

    ~AwsSignatureV0();

    virtual void sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data = QByteArray()) const;

private:
    AwsSignatureV0Private * const d_ptr; ///< Internal d-pointer.
    friend class TestAwsSignatureV0;
};

QTAWS_END_NAMESPACE

#endif
