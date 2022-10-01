// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELAUDITMITIGATIONACTIONSTASKRESPONSE_P_H
#define QTAWS_CANCELAUDITMITIGATIONACTIONSTASKRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CancelAuditMitigationActionsTaskResponse;

class CancelAuditMitigationActionsTaskResponsePrivate : public IoTResponsePrivate {

public:

    explicit CancelAuditMitigationActionsTaskResponsePrivate(CancelAuditMitigationActionsTaskResponse * const q);

    void parseCancelAuditMitigationActionsTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelAuditMitigationActionsTaskResponse)
    Q_DISABLE_COPY(CancelAuditMitigationActionsTaskResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
