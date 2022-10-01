// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPOOLUSAGEREQUEST_P_H
#define QTAWS_DESCRIBEIDENTITYPOOLUSAGEREQUEST_P_H

#include "cognitosyncrequest_p.h"
#include "describeidentitypoolusagerequest.h"

namespace QtAws {
namespace CognitoSync {

class DescribeIdentityPoolUsageRequest;

class DescribeIdentityPoolUsageRequestPrivate : public CognitoSyncRequestPrivate {

public:
    DescribeIdentityPoolUsageRequestPrivate(const CognitoSyncRequest::Action action,
                                   DescribeIdentityPoolUsageRequest * const q);
    DescribeIdentityPoolUsageRequestPrivate(const DescribeIdentityPoolUsageRequestPrivate &other,
                                   DescribeIdentityPoolUsageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIdentityPoolUsageRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
