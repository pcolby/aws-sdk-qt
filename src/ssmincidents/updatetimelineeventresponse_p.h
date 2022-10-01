// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETIMELINEEVENTRESPONSE_P_H
#define QTAWS_UPDATETIMELINEEVENTRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateTimelineEventResponse;

class UpdateTimelineEventResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit UpdateTimelineEventResponsePrivate(UpdateTimelineEventResponse * const q);

    void parseUpdateTimelineEventResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTimelineEventResponse)
    Q_DISABLE_COPY(UpdateTimelineEventResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
