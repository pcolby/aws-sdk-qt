// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTRIBUTORINSIGHTSRESPONSE_P_H
#define QTAWS_DESCRIBECONTRIBUTORINSIGHTSRESPONSE_P_H

#include "dynamodbresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class DescribeContributorInsightsResponse;

class DescribeContributorInsightsResponsePrivate : public DynamoDbResponsePrivate {

public:

    explicit DescribeContributorInsightsResponsePrivate(DescribeContributorInsightsResponse * const q);

    void parseDescribeContributorInsightsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeContributorInsightsResponse)
    Q_DISABLE_COPY(DescribeContributorInsightsResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
