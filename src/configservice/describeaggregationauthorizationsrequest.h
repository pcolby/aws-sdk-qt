// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGGREGATIONAUTHORIZATIONSREQUEST_H
#define QTAWS_DESCRIBEAGGREGATIONAUTHORIZATIONSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeAggregationAuthorizationsRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeAggregationAuthorizationsRequest : public ConfigServiceRequest {

public:
    DescribeAggregationAuthorizationsRequest(const DescribeAggregationAuthorizationsRequest &other);
    DescribeAggregationAuthorizationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAggregationAuthorizationsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
