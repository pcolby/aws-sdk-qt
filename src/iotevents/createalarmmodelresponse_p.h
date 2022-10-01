// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALARMMODELRESPONSE_P_H
#define QTAWS_CREATEALARMMODELRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class CreateAlarmModelResponse;

class CreateAlarmModelResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit CreateAlarmModelResponsePrivate(CreateAlarmModelResponse * const q);

    void parseCreateAlarmModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAlarmModelResponse)
    Q_DISABLE_COPY(CreateAlarmModelResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
