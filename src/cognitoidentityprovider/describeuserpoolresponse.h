// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPOOLRESPONSE_H
#define QTAWS_DESCRIBEUSERPOOLRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "describeuserpoolrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeUserPoolResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DescribeUserPoolResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    DescribeUserPoolResponse(const DescribeUserPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeUserPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserPoolResponse)
    Q_DISABLE_COPY(DescribeUserPoolResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
