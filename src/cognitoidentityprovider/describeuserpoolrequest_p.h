// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPOOLREQUEST_P_H
#define QTAWS_DESCRIBEUSERPOOLREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "describeuserpoolrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeUserPoolRequest;

class DescribeUserPoolRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    DescribeUserPoolRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   DescribeUserPoolRequest * const q);
    DescribeUserPoolRequestPrivate(const DescribeUserPoolRequestPrivate &other,
                                   DescribeUserPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUserPoolRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
