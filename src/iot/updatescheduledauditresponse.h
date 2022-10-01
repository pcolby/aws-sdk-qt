// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEDULEDAUDITRESPONSE_H
#define QTAWS_UPDATESCHEDULEDAUDITRESPONSE_H

#include "iotresponse.h"
#include "updatescheduledauditrequest.h"

namespace QtAws {
namespace IoT {

class UpdateScheduledAuditResponsePrivate;

class QTAWSIOT_EXPORT UpdateScheduledAuditResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateScheduledAuditResponse(const UpdateScheduledAuditRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateScheduledAuditRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateScheduledAuditResponse)
    Q_DISABLE_COPY(UpdateScheduledAuditResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
