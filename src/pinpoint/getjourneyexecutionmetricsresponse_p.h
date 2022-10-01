// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOURNEYEXECUTIONMETRICSRESPONSE_P_H
#define QTAWS_GETJOURNEYEXECUTIONMETRICSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetJourneyExecutionMetricsResponse;

class GetJourneyExecutionMetricsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetJourneyExecutionMetricsResponsePrivate(GetJourneyExecutionMetricsResponse * const q);

    void parseGetJourneyExecutionMetricsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetJourneyExecutionMetricsResponse)
    Q_DISABLE_COPY(GetJourneyExecutionMetricsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
