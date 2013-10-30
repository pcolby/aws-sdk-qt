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

#ifndef AWSSIGNATUREV1_P_H
#define AWSSIGNATUREV1_P_H

#include "qtawsglobal.h"

#include <QUrlQuery>

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV1;

class QTAWS_EXPORT AwsSignatureV1Private {
    Q_DECLARE_PUBLIC(AwsSignatureV1)

public:
    AwsSignatureV1Private(AwsSignatureV1 * const q);

    QByteArray canonicalQuery(const QUrlQuery &query) const;

    void adornRequest(QNetworkRequest &request, const AwsAbstractCredentials &credentials) const;

protected:
    /// A key-value pair of strings for working with QUrlQuery::queryItems() results.
    typedef QPair<QString, QString> QStringPair;

    static bool caseInsensitiveLessThan(const QStringPair &pair1, const QStringPair &pair2);

private:
    AwsSignatureV1 * const q_ptr; ///< Internal q-pointer.
    friend class TestAwsSignatureV1;
};

QTAWS_END_NAMESPACE

#endif
