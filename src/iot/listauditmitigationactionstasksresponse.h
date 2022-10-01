// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITMITIGATIONACTIONSTASKSRESPONSE_H
#define QTAWS_LISTAUDITMITIGATIONACTIONSTASKSRESPONSE_H

#include "iotresponse.h"
#include "listauditmitigationactionstasksrequest.h"

namespace QtAws {
namespace IoT {

class ListAuditMitigationActionsTasksResponsePrivate;

class QTAWSIOT_EXPORT ListAuditMitigationActionsTasksResponse : public IoTResponse {
    Q_OBJECT

public:
    ListAuditMitigationActionsTasksResponse(const ListAuditMitigationActionsTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAuditMitigationActionsTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAuditMitigationActionsTasksResponse)
    Q_DISABLE_COPY(ListAuditMitigationActionsTasksResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
