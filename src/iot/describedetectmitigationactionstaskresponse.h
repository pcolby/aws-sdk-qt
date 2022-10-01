// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDETECTMITIGATIONACTIONSTASKRESPONSE_H
#define QTAWS_DESCRIBEDETECTMITIGATIONACTIONSTASKRESPONSE_H

#include "iotresponse.h"
#include "describedetectmitigationactionstaskrequest.h"

namespace QtAws {
namespace IoT {

class DescribeDetectMitigationActionsTaskResponsePrivate;

class QTAWSIOT_EXPORT DescribeDetectMitigationActionsTaskResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeDetectMitigationActionsTaskResponse(const DescribeDetectMitigationActionsTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDetectMitigationActionsTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDetectMitigationActionsTaskResponse)
    Q_DISABLE_COPY(DescribeDetectMitigationActionsTaskResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
