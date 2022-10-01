// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHRESETALARMRESPONSE_P_H
#define QTAWS_BATCHRESETALARMRESPONSE_P_H

#include "ioteventsdataresponse_p.h"

namespace QtAws {
namespace IoTEventsData {

class BatchResetAlarmResponse;

class BatchResetAlarmResponsePrivate : public IoTEventsDataResponsePrivate {

public:

    explicit BatchResetAlarmResponsePrivate(BatchResetAlarmResponse * const q);

    void parseBatchResetAlarmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchResetAlarmResponse)
    Q_DISABLE_COPY(BatchResetAlarmResponsePrivate)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
