// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGGREGATIONAUTHORIZATIONSRESPONSE_H
#define QTAWS_DESCRIBEAGGREGATIONAUTHORIZATIONSRESPONSE_H

#include "configserviceresponse.h"
#include "describeaggregationauthorizationsrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeAggregationAuthorizationsResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeAggregationAuthorizationsResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeAggregationAuthorizationsResponse(const DescribeAggregationAuthorizationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAggregationAuthorizationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAggregationAuthorizationsResponse)
    Q_DISABLE_COPY(DescribeAggregationAuthorizationsResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
