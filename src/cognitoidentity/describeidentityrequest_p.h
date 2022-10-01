// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYREQUEST_P_H
#define QTAWS_DESCRIBEIDENTITYREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "describeidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class DescribeIdentityRequest;

class DescribeIdentityRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    DescribeIdentityRequestPrivate(const CognitoIdentityRequest::Action action,
                                   DescribeIdentityRequest * const q);
    DescribeIdentityRequestPrivate(const DescribeIdentityRequestPrivate &other,
                                   DescribeIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIdentityRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
