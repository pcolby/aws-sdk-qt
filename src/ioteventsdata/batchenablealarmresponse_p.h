// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHENABLEALARMRESPONSE_P_H
#define QTAWS_BATCHENABLEALARMRESPONSE_P_H

#include "ioteventsdataresponse_p.h"

namespace QtAws {
namespace IoTEventsData {

class BatchEnableAlarmResponse;

class BatchEnableAlarmResponsePrivate : public IoTEventsDataResponsePrivate {

public:

    explicit BatchEnableAlarmResponsePrivate(BatchEnableAlarmResponse * const q);

    void parseBatchEnableAlarmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchEnableAlarmResponse)
    Q_DISABLE_COPY(BatchEnableAlarmResponsePrivate)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
