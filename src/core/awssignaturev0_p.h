// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSSIGNATUREV0_P_H
#define AWSSIGNATUREV0_P_H

#include "qtawscoreglobal.h"
#include "awsabstractsignature_p.h"

#include <QUrlQuery>

namespace QtAws {
namespace Core {

class AwsSignatureV0;

class AwsSignatureV0Private : public AwsAbstractSignaturePrivate {

public:
    explicit AwsSignatureV0Private(AwsSignatureV0 * const q);

    void adornRequest(QNetworkRequest &request, const AwsAbstractCredentials &credentials) const;

    QByteArray canonicalQuery(const QUrlQuery &query) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PUBLIC(AwsSignatureV0)
    Q_DISABLE_COPY(AwsSignatureV0Private)
    friend class TestAwsSignatureV0;
};

} // namespace Core
} // namespace QtAws

#endif
