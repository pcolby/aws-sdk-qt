// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOURNEYEXECUTIONMETRICSREQUEST_P_H
#define QTAWS_GETJOURNEYEXECUTIONMETRICSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getjourneyexecutionmetricsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetJourneyExecutionMetricsRequest;

class GetJourneyExecutionMetricsRequestPrivate : public PinpointRequestPrivate {

public:
    GetJourneyExecutionMetricsRequestPrivate(const PinpointRequest::Action action,
                                   GetJourneyExecutionMetricsRequest * const q);
    GetJourneyExecutionMetricsRequestPrivate(const GetJourneyExecutionMetricsRequestPrivate &other,
                                   GetJourneyExecutionMetricsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJourneyExecutionMetricsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
