// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHACKNOWLEDGEALARMRESPONSE_P_H
#define QTAWS_BATCHACKNOWLEDGEALARMRESPONSE_P_H

#include "ioteventsdataresponse_p.h"

namespace QtAws {
namespace IoTEventsData {

class BatchAcknowledgeAlarmResponse;

class BatchAcknowledgeAlarmResponsePrivate : public IoTEventsDataResponsePrivate {

public:

    explicit BatchAcknowledgeAlarmResponsePrivate(BatchAcknowledgeAlarmResponse * const q);

    void parseBatchAcknowledgeAlarmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchAcknowledgeAlarmResponse)
    Q_DISABLE_COPY(BatchAcknowledgeAlarmResponsePrivate)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
