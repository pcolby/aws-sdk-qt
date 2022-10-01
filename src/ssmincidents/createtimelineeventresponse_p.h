// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETIMELINEEVENTRESPONSE_P_H
#define QTAWS_CREATETIMELINEEVENTRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class CreateTimelineEventResponse;

class CreateTimelineEventResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit CreateTimelineEventResponsePrivate(CreateTimelineEventResponse * const q);

    void parseCreateTimelineEventResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTimelineEventResponse)
    Q_DISABLE_COPY(CreateTimelineEventResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
