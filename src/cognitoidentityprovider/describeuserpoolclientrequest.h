// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPOOLCLIENTREQUEST_H
#define QTAWS_DESCRIBEUSERPOOLCLIENTREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeUserPoolClientRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DescribeUserPoolClientRequest : public CognitoIdentityProviderRequest {

public:
    DescribeUserPoolClientRequest(const DescribeUserPoolClientRequest &other);
    DescribeUserPoolClientRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserPoolClientRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
