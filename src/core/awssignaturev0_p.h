/*
    Copyright 2013-2021 Paul Colby

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

#ifndef AWSSIGNATUREV0_P_H
#define AWSSIGNATUREV0_P_H

#include "qtawsglobal.h"
#include "awsabstractsignature_p.h"

#include <QUrlQuery>

namespace QtAws {
namespace Core {

class AwsSignatureV0;

class QTAWS_EXPORT AwsSignatureV0Private : public AwsAbstractSignaturePrivate {

public:
    AwsSignatureV0Private(AwsSignatureV0 * const q);

    void adornRequest(QNetworkRequest &request, const AwsAbstractCredentials &credentials) const;

    virtual QByteArray canonicalQuery(const QUrlQuery &query) const;

private:
    Q_DECLARE_PUBLIC(AwsSignatureV0)
    Q_DISABLE_COPY(AwsSignatureV0Private)
    friend class TestAwsSignatureV0;
};

} // namespace Core
} // namespace QtAws

#endif
