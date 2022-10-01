// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTRIBUTORINSIGHTSREQUEST_H
#define QTAWS_DESCRIBECONTRIBUTORINSIGHTSREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeContributorInsightsRequestPrivate;

class QTAWSDYNAMODB_EXPORT DescribeContributorInsightsRequest : public DynamoDbRequest {

public:
    DescribeContributorInsightsRequest(const DescribeContributorInsightsRequest &other);
    DescribeContributorInsightsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeContributorInsightsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
