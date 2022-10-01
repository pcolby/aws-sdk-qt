// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEDAUDITRESPONSE_P_H
#define QTAWS_DELETESCHEDULEDAUDITRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteScheduledAuditResponse;

class DeleteScheduledAuditResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteScheduledAuditResponsePrivate(DeleteScheduledAuditResponse * const q);

    void parseDeleteScheduledAuditResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteScheduledAuditResponse)
    Q_DISABLE_COPY(DeleteScheduledAuditResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
