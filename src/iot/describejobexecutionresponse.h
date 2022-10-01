// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBEXECUTIONRESPONSE_H
#define QTAWS_DESCRIBEJOBEXECUTIONRESPONSE_H

#include "iotresponse.h"
#include "describejobexecutionrequest.h"

namespace QtAws {
namespace IoT {

class DescribeJobExecutionResponsePrivate;

class QTAWSIOT_EXPORT DescribeJobExecutionResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeJobExecutionResponse(const DescribeJobExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeJobExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobExecutionResponse)
    Q_DISABLE_COPY(DescribeJobExecutionResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
