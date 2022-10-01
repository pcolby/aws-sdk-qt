// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALARMMODELVERSIONSRESPONSE_P_H
#define QTAWS_LISTALARMMODELVERSIONSRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class ListAlarmModelVersionsResponse;

class ListAlarmModelVersionsResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit ListAlarmModelVersionsResponsePrivate(ListAlarmModelVersionsResponse * const q);

    void parseListAlarmModelVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAlarmModelVersionsResponse)
    Q_DISABLE_COPY(ListAlarmModelVersionsResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
