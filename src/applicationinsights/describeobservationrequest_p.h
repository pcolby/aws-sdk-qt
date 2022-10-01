// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOBSERVATIONREQUEST_P_H
#define QTAWS_DESCRIBEOBSERVATIONREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "describeobservationrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeObservationRequest;

class DescribeObservationRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    DescribeObservationRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   DescribeObservationRequest * const q);
    DescribeObservationRequestPrivate(const DescribeObservationRequestPrivate &other,
                                   DescribeObservationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeObservationRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
