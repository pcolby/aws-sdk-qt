// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALARMMODELRESPONSE_P_H
#define QTAWS_DELETEALARMMODELRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class DeleteAlarmModelResponse;

class DeleteAlarmModelResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit DeleteAlarmModelResponsePrivate(DeleteAlarmModelResponse * const q);

    void parseDeleteAlarmModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAlarmModelResponse)
    Q_DISABLE_COPY(DeleteAlarmModelResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
