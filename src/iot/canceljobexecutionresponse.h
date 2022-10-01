// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOBEXECUTIONRESPONSE_H
#define QTAWS_CANCELJOBEXECUTIONRESPONSE_H

#include "iotresponse.h"
#include "canceljobexecutionrequest.h"

namespace QtAws {
namespace IoT {

class CancelJobExecutionResponsePrivate;

class QTAWSIOT_EXPORT CancelJobExecutionResponse : public IoTResponse {
    Q_OBJECT

public:
    CancelJobExecutionResponse(const CancelJobExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelJobExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelJobExecutionResponse)
    Q_DISABLE_COPY(CancelJobExecutionResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
