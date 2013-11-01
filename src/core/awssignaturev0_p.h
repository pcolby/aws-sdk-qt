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

#ifndef AwsSignatureV0_P_H
#define AwsSignatureV0_P_H

#include "qtawsglobal.h"

#include <QUrlQuery>

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV0;

class QTAWS_EXPORT AwsSignatureV0Private {
    Q_DECLARE_PUBLIC(AwsSignatureV0)

public:
    AwsSignatureV0Private(AwsSignatureV0 * const q);

    void adornRequest(QNetworkRequest &request, const AwsAbstractCredentials &credentials) const;

    QByteArray canonicalQuery(const QUrlQuery &query) const;

private:
    AwsSignatureV0 * const q_ptr; ///< Internal q-pointer.
    friend class TestAwsSignatureV0;
};

QTAWS_END_NAMESPACE

#endif
