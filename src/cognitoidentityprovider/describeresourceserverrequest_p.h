// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCESERVERREQUEST_P_H
#define QTAWS_DESCRIBERESOURCESERVERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "describeresourceserverrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeResourceServerRequest;

class DescribeResourceServerRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    DescribeResourceServerRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   DescribeResourceServerRequest * const q);
    DescribeResourceServerRequestPrivate(const DescribeResourceServerRequestPrivate &other,
                                   DescribeResourceServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeResourceServerRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
