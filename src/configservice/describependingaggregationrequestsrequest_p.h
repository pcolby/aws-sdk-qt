// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPENDINGAGGREGATIONREQUESTSREQUEST_P_H
#define QTAWS_DESCRIBEPENDINGAGGREGATIONREQUESTSREQUEST_P_H

#include "configservicerequest_p.h"
#include "describependingaggregationrequestsrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribePendingAggregationRequestsRequest;

class DescribePendingAggregationRequestsRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribePendingAggregationRequestsRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribePendingAggregationRequestsRequest * const q);
    DescribePendingAggregationRequestsRequestPrivate(const DescribePendingAggregationRequestsRequestPrivate &other,
                                   DescribePendingAggregationRequestsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePendingAggregationRequestsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
