// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPROVIDERRESPONSE_H
#define QTAWS_DESCRIBEIDENTITYPROVIDERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "describeidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeIdentityProviderResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DescribeIdentityProviderResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    DescribeIdentityProviderResponse(const DescribeIdentityProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIdentityProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIdentityProviderResponse)
    Q_DISABLE_COPY(DescribeIdentityProviderResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
