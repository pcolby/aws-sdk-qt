// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPOOLREQUEST_P_H
#define QTAWS_DESCRIBEIDENTITYPOOLREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "describeidentitypoolrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class DescribeIdentityPoolRequest;

class DescribeIdentityPoolRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    DescribeIdentityPoolRequestPrivate(const CognitoIdentityRequest::Action action,
                                   DescribeIdentityPoolRequest * const q);
    DescribeIdentityPoolRequestPrivate(const DescribeIdentityPoolRequestPrivate &other,
                                   DescribeIdentityPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIdentityPoolRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
