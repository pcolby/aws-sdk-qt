// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTRIBUTORINSIGHTSRESPONSE_H
#define QTAWS_DESCRIBECONTRIBUTORINSIGHTSRESPONSE_H

#include "dynamodbresponse.h"
#include "describecontributorinsightsrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeContributorInsightsResponsePrivate;

class QTAWSDYNAMODB_EXPORT DescribeContributorInsightsResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    DescribeContributorInsightsResponse(const DescribeContributorInsightsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeContributorInsightsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeContributorInsightsResponse)
    Q_DISABLE_COPY(DescribeContributorInsightsResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
