// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTRIBUTORINSIGHTSREQUEST_P_H
#define QTAWS_DESCRIBECONTRIBUTORINSIGHTSREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "describecontributorinsightsrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeContributorInsightsRequest;

class DescribeContributorInsightsRequestPrivate : public DynamoDbRequestPrivate {

public:
    DescribeContributorInsightsRequestPrivate(const DynamoDbRequest::Action action,
                                   DescribeContributorInsightsRequest * const q);
    DescribeContributorInsightsRequestPrivate(const DescribeContributorInsightsRequestPrivate &other,
                                   DescribeContributorInsightsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeContributorInsightsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
