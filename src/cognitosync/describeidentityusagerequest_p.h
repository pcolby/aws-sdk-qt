// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYUSAGEREQUEST_P_H
#define QTAWS_DESCRIBEIDENTITYUSAGEREQUEST_P_H

#include "cognitosyncrequest_p.h"
#include "describeidentityusagerequest.h"

namespace QtAws {
namespace CognitoSync {

class DescribeIdentityUsageRequest;

class DescribeIdentityUsageRequestPrivate : public CognitoSyncRequestPrivate {

public:
    DescribeIdentityUsageRequestPrivate(const CognitoSyncRequest::Action action,
                                   DescribeIdentityUsageRequest * const q);
    DescribeIdentityUsageRequestPrivate(const DescribeIdentityUsageRequestPrivate &other,
                                   DescribeIdentityUsageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIdentityUsageRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
