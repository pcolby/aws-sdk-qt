// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALARMMODELSRESPONSE_P_H
#define QTAWS_LISTALARMMODELSRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class ListAlarmModelsResponse;

class ListAlarmModelsResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit ListAlarmModelsResponsePrivate(ListAlarmModelsResponse * const q);

    void parseListAlarmModelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAlarmModelsResponse)
    Q_DISABLE_COPY(ListAlarmModelsResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
