// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELAUDITMITIGATIONACTIONSTASKRESPONSE_H
#define QTAWS_CANCELAUDITMITIGATIONACTIONSTASKRESPONSE_H

#include "iotresponse.h"
#include "cancelauditmitigationactionstaskrequest.h"

namespace QtAws {
namespace IoT {

class CancelAuditMitigationActionsTaskResponsePrivate;

class QTAWSIOT_EXPORT CancelAuditMitigationActionsTaskResponse : public IoTResponse {
    Q_OBJECT

public:
    CancelAuditMitigationActionsTaskResponse(const CancelAuditMitigationActionsTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelAuditMitigationActionsTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelAuditMitigationActionsTaskResponse)
    Q_DISABLE_COPY(CancelAuditMitigationActionsTaskResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
