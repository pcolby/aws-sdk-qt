// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDETECTMITIGATIONACTIONSTASKRESPONSE_H
#define QTAWS_CANCELDETECTMITIGATIONACTIONSTASKRESPONSE_H

#include "iotresponse.h"
#include "canceldetectmitigationactionstaskrequest.h"

namespace QtAws {
namespace IoT {

class CancelDetectMitigationActionsTaskResponsePrivate;

class QTAWSIOT_EXPORT CancelDetectMitigationActionsTaskResponse : public IoTResponse {
    Q_OBJECT

public:
    CancelDetectMitigationActionsTaskResponse(const CancelDetectMitigationActionsTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelDetectMitigationActionsTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelDetectMitigationActionsTaskResponse)
    Q_DISABLE_COPY(CancelDetectMitigationActionsTaskResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
