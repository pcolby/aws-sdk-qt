// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISABLEALARMRESPONSE_P_H
#define QTAWS_BATCHDISABLEALARMRESPONSE_P_H

#include "ioteventsdataresponse_p.h"

namespace QtAws {
namespace IoTEventsData {

class BatchDisableAlarmResponse;

class BatchDisableAlarmResponsePrivate : public IoTEventsDataResponsePrivate {

public:

    explicit BatchDisableAlarmResponsePrivate(BatchDisableAlarmResponse * const q);

    void parseBatchDisableAlarmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDisableAlarmResponse)
    Q_DISABLE_COPY(BatchDisableAlarmResponsePrivate)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
