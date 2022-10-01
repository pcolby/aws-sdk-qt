// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEDAUDITRESPONSE_H
#define QTAWS_DELETESCHEDULEDAUDITRESPONSE_H

#include "iotresponse.h"
#include "deletescheduledauditrequest.h"

namespace QtAws {
namespace IoT {

class DeleteScheduledAuditResponsePrivate;

class QTAWSIOT_EXPORT DeleteScheduledAuditResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteScheduledAuditResponse(const DeleteScheduledAuditRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteScheduledAuditRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteScheduledAuditResponse)
    Q_DISABLE_COPY(DeleteScheduledAuditResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
