// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPOOLCLIENTRESPONSE_H
#define QTAWS_DESCRIBEUSERPOOLCLIENTRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "describeuserpoolclientrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeUserPoolClientResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DescribeUserPoolClientResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    DescribeUserPoolClientResponse(const DescribeUserPoolClientRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeUserPoolClientRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserPoolClientResponse)
    Q_DISABLE_COPY(DescribeUserPoolClientResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
