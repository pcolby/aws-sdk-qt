// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOURNEYDATERANGEKPIRESPONSE_P_H
#define QTAWS_GETJOURNEYDATERANGEKPIRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetJourneyDateRangeKpiResponse;

class GetJourneyDateRangeKpiResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetJourneyDateRangeKpiResponsePrivate(GetJourneyDateRangeKpiResponse * const q);

    void parseGetJourneyDateRangeKpiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetJourneyDateRangeKpiResponse)
    Q_DISABLE_COPY(GetJourneyDateRangeKpiResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
