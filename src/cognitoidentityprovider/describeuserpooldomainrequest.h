// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPOOLDOMAINREQUEST_H
#define QTAWS_DESCRIBEUSERPOOLDOMAINREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeUserPoolDomainRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT DescribeUserPoolDomainRequest : public CognitoIdentityProviderRequest {

public:
    DescribeUserPoolDomainRequest(const DescribeUserPoolDomainRequest &other);
    DescribeUserPoolDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserPoolDomainRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
