// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETIMELINEEVENTRESPONSE_P_H
#define QTAWS_DELETETIMELINEEVENTRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class DeleteTimelineEventResponse;

class DeleteTimelineEventResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit DeleteTimelineEventResponsePrivate(DeleteTimelineEventResponse * const q);

    void parseDeleteTimelineEventResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTimelineEventResponse)
    Q_DISABLE_COPY(DeleteTimelineEventResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
