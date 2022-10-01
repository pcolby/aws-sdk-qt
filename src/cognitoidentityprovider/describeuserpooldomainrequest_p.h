// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPOOLDOMAINREQUEST_P_H
#define QTAWS_DESCRIBEUSERPOOLDOMAINREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "describeuserpooldomainrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeUserPoolDomainRequest;

class DescribeUserPoolDomainRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    DescribeUserPoolDomainRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   DescribeUserPoolDomainRequest * const q);
    DescribeUserPoolDomainRequestPrivate(const DescribeUserPoolDomainRequestPrivate &other,
                                   DescribeUserPoolDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUserPoolDomainRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
