// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALARMMODELRESPONSE_P_H
#define QTAWS_UPDATEALARMMODELRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class UpdateAlarmModelResponse;

class UpdateAlarmModelResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit UpdateAlarmModelResponsePrivate(UpdateAlarmModelResponse * const q);

    void parseUpdateAlarmModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAlarmModelResponse)
    Q_DISABLE_COPY(UpdateAlarmModelResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
