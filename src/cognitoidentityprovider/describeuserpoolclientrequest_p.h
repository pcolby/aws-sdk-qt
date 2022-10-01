// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPOOLCLIENTREQUEST_P_H
#define QTAWS_DESCRIBEUSERPOOLCLIENTREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "describeuserpoolclientrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeUserPoolClientRequest;

class DescribeUserPoolClientRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    DescribeUserPoolClientRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   DescribeUserPoolClientRequest * const q);
    DescribeUserPoolClientRequestPrivate(const DescribeUserPoolClientRequestPrivate &other,
                                   DescribeUserPoolClientRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUserPoolClientRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
