// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCESERVERRESPONSE_H
#define QTAWS_DESCRIBERESOURCESERVERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "describeresourceserverrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeResourceServerResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DescribeResourceServerResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    DescribeResourceServerResponse(const DescribeResourceServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeResourceServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResourceServerResponse)
    Q_DISABLE_COPY(DescribeResourceServerResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
