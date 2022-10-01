// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITMITIGATIONACTIONSEXECUTIONSRESPONSE_P_H
#define QTAWS_LISTAUDITMITIGATIONACTIONSEXECUTIONSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListAuditMitigationActionsExecutionsResponse;

class ListAuditMitigationActionsExecutionsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListAuditMitigationActionsExecutionsResponsePrivate(ListAuditMitigationActionsExecutionsResponse * const q);

    void parseListAuditMitigationActionsExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAuditMitigationActionsExecutionsResponse)
    Q_DISABLE_COPY(ListAuditMitigationActionsExecutionsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
