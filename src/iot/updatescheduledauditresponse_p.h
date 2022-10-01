// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEDULEDAUDITRESPONSE_P_H
#define QTAWS_UPDATESCHEDULEDAUDITRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateScheduledAuditResponse;

class UpdateScheduledAuditResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateScheduledAuditResponsePrivate(UpdateScheduledAuditResponse * const q);

    void parseUpdateScheduledAuditResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateScheduledAuditResponse)
    Q_DISABLE_COPY(UpdateScheduledAuditResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
