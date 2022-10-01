// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULEDAUDITRESPONSE_H
#define QTAWS_CREATESCHEDULEDAUDITRESPONSE_H

#include "iotresponse.h"
#include "createscheduledauditrequest.h"

namespace QtAws {
namespace IoT {

class CreateScheduledAuditResponsePrivate;

class QTAWSIOT_EXPORT CreateScheduledAuditResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateScheduledAuditResponse(const CreateScheduledAuditRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateScheduledAuditRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateScheduledAuditResponse)
    Q_DISABLE_COPY(CreateScheduledAuditResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
