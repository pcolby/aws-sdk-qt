// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTONDEMANDAUDITTASKRESPONSE_H
#define QTAWS_STARTONDEMANDAUDITTASKRESPONSE_H

#include "iotresponse.h"
#include "startondemandaudittaskrequest.h"

namespace QtAws {
namespace IoT {

class StartOnDemandAuditTaskResponsePrivate;

class QTAWSIOT_EXPORT StartOnDemandAuditTaskResponse : public IoTResponse {
    Q_OBJECT

public:
    StartOnDemandAuditTaskResponse(const StartOnDemandAuditTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartOnDemandAuditTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartOnDemandAuditTaskResponse)
    Q_DISABLE_COPY(StartOnDemandAuditTaskResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
