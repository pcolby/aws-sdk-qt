// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOURNEYEXECUTIONACTIVITYMETRICSREQUEST_P_H
#define QTAWS_GETJOURNEYEXECUTIONACTIVITYMETRICSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getjourneyexecutionactivitymetricsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetJourneyExecutionActivityMetricsRequest;

class GetJourneyExecutionActivityMetricsRequestPrivate : public PinpointRequestPrivate {

public:
    GetJourneyExecutionActivityMetricsRequestPrivate(const PinpointRequest::Action action,
                                   GetJourneyExecutionActivityMetricsRequest * const q);
    GetJourneyExecutionActivityMetricsRequestPrivate(const GetJourneyExecutionActivityMetricsRequestPrivate &other,
                                   GetJourneyExecutionActivityMetricsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJourneyExecutionActivityMetricsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
