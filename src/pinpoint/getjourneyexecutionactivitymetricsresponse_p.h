// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOURNEYEXECUTIONACTIVITYMETRICSRESPONSE_P_H
#define QTAWS_GETJOURNEYEXECUTIONACTIVITYMETRICSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetJourneyExecutionActivityMetricsResponse;

class GetJourneyExecutionActivityMetricsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetJourneyExecutionActivityMetricsResponsePrivate(GetJourneyExecutionActivityMetricsResponse * const q);

    void parseGetJourneyExecutionActivityMetricsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetJourneyExecutionActivityMetricsResponse)
    Q_DISABLE_COPY(GetJourneyExecutionActivityMetricsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
