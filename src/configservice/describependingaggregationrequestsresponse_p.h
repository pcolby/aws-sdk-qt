// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPENDINGAGGREGATIONREQUESTSRESPONSE_P_H
#define QTAWS_DESCRIBEPENDINGAGGREGATIONREQUESTSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribePendingAggregationRequestsResponse;

class DescribePendingAggregationRequestsResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribePendingAggregationRequestsResponsePrivate(DescribePendingAggregationRequestsResponse * const q);

    void parseDescribePendingAggregationRequestsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePendingAggregationRequestsResponse)
    Q_DISABLE_COPY(DescribePendingAggregationRequestsResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
