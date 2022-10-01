// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULEDAUDITRESPONSE_P_H
#define QTAWS_CREATESCHEDULEDAUDITRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateScheduledAuditResponse;

class CreateScheduledAuditResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateScheduledAuditResponsePrivate(CreateScheduledAuditResponse * const q);

    void parseCreateScheduledAuditResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateScheduledAuditResponse)
    Q_DISABLE_COPY(CreateScheduledAuditResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
