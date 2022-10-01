// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSNOOZEALARMRESPONSE_P_H
#define QTAWS_BATCHSNOOZEALARMRESPONSE_P_H

#include "ioteventsdataresponse_p.h"

namespace QtAws {
namespace IoTEventsData {

class BatchSnoozeAlarmResponse;

class BatchSnoozeAlarmResponsePrivate : public IoTEventsDataResponsePrivate {

public:

    explicit BatchSnoozeAlarmResponsePrivate(BatchSnoozeAlarmResponse * const q);

    void parseBatchSnoozeAlarmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchSnoozeAlarmResponse)
    Q_DISABLE_COPY(BatchSnoozeAlarmResponsePrivate)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
