// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAUDITMITIGATIONACTIONSTASKRESPONSE_H
#define QTAWS_STARTAUDITMITIGATIONACTIONSTASKRESPONSE_H

#include "iotresponse.h"
#include "startauditmitigationactionstaskrequest.h"

namespace QtAws {
namespace IoT {

class StartAuditMitigationActionsTaskResponsePrivate;

class QTAWSIOT_EXPORT StartAuditMitigationActionsTaskResponse : public IoTResponse {
    Q_OBJECT

public:
    StartAuditMitigationActionsTaskResponse(const StartAuditMitigationActionsTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartAuditMitigationActionsTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAuditMitigationActionsTaskResponse)
    Q_DISABLE_COPY(StartAuditMitigationActionsTaskResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
