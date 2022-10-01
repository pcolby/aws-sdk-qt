// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTIMELINEEVENTRESPONSE_P_H
#define QTAWS_GETTIMELINEEVENTRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class GetTimelineEventResponse;

class GetTimelineEventResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit GetTimelineEventResponsePrivate(GetTimelineEventResponse * const q);

    void parseGetTimelineEventResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTimelineEventResponse)
    Q_DISABLE_COPY(GetTimelineEventResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
