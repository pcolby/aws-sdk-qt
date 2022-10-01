// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITMITIGATIONACTIONSTASKSRESPONSE_P_H
#define QTAWS_LISTAUDITMITIGATIONACTIONSTASKSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListAuditMitigationActionsTasksResponse;

class ListAuditMitigationActionsTasksResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListAuditMitigationActionsTasksResponsePrivate(ListAuditMitigationActionsTasksResponse * const q);

    void parseListAuditMitigationActionsTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAuditMitigationActionsTasksResponse)
    Q_DISABLE_COPY(ListAuditMitigationActionsTasksResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
