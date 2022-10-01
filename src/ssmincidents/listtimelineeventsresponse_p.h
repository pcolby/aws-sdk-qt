// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTIMELINEEVENTSRESPONSE_P_H
#define QTAWS_LISTTIMELINEEVENTSRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class ListTimelineEventsResponse;

class ListTimelineEventsResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit ListTimelineEventsResponsePrivate(ListTimelineEventsResponse * const q);

    void parseListTimelineEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTimelineEventsResponse)
    Q_DISABLE_COPY(ListTimelineEventsResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
