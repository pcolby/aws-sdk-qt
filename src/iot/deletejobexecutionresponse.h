// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBEXECUTIONRESPONSE_H
#define QTAWS_DELETEJOBEXECUTIONRESPONSE_H

#include "iotresponse.h"
#include "deletejobexecutionrequest.h"

namespace QtAws {
namespace IoT {

class DeleteJobExecutionResponsePrivate;

class QTAWSIOT_EXPORT DeleteJobExecutionResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteJobExecutionResponse(const DeleteJobExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteJobExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteJobExecutionResponse)
    Q_DISABLE_COPY(DeleteJobExecutionResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
