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

#ifndef AWSSIGNATUREV1_P_H
#define AWSSIGNATUREV1_P_H

#include "qtawscoreglobal.h"
#include "awssignaturev0_p.h"

#include <QUrlQuery>

namespace QtAws {
namespace Core {

class AwsSignatureV1;

class AwsSignatureV1Private : public AwsSignatureV0Private {

public:
    explicit AwsSignatureV1Private(AwsSignatureV1 * const q);

    QByteArray canonicalQuery(const QUrlQuery &query) const Q_DECL_OVERRIDE;

protected:
    /// A key-value pair of strings for working with QUrlQuery::queryItems() results.
    typedef QPair<QString, QString> QStringPair;

    static bool caseInsensitiveLessThan(const QStringPair &pair1, const QStringPair &pair2);

private:
    Q_DECLARE_PUBLIC(AwsSignatureV1)
    Q_DISABLE_COPY(AwsSignatureV1Private)
    friend class TestAwsSignatureV1;
};

} // namespace Core
} // namespace QtAws

#endif
