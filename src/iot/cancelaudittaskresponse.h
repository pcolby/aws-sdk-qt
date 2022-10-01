// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELAUDITTASKRESPONSE_H
#define QTAWS_CANCELAUDITTASKRESPONSE_H

#include "iotresponse.h"
#include "cancelaudittaskrequest.h"

namespace QtAws {
namespace IoT {

class CancelAuditTaskResponsePrivate;

class QTAWSIOT_EXPORT CancelAuditTaskResponse : public IoTResponse {
    Q_OBJECT

public:
    CancelAuditTaskResponse(const CancelAuditTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelAuditTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelAuditTaskResponse)
    Q_DISABLE_COPY(CancelAuditTaskResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
