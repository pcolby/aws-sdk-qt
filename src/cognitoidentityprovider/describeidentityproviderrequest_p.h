// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPROVIDERREQUEST_P_H
#define QTAWS_DESCRIBEIDENTITYPROVIDERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "describeidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeIdentityProviderRequest;

class DescribeIdentityProviderRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    DescribeIdentityProviderRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   DescribeIdentityProviderRequest * const q);
    DescribeIdentityProviderRequestPrivate(const DescribeIdentityProviderRequestPrivate &other,
                                   DescribeIdentityProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIdentityProviderRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
