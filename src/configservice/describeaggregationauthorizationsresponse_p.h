// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGGREGATIONAUTHORIZATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEAGGREGATIONAUTHORIZATIONSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeAggregationAuthorizationsResponse;

class DescribeAggregationAuthorizationsResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeAggregationAuthorizationsResponsePrivate(DescribeAggregationAuthorizationsResponse * const q);

    void parseDescribeAggregationAuthorizationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAggregationAuthorizationsResponse)
    Q_DISABLE_COPY(DescribeAggregationAuthorizationsResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
