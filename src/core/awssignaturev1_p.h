// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
