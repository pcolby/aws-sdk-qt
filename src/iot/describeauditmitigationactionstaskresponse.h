// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITMITIGATIONACTIONSTASKRESPONSE_H
#define QTAWS_DESCRIBEAUDITMITIGATIONACTIONSTASKRESPONSE_H

#include "iotresponse.h"
#include "describeauditmitigationactionstaskrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAuditMitigationActionsTaskResponsePrivate;

class QTAWSIOT_EXPORT DescribeAuditMitigationActionsTaskResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeAuditMitigationActionsTaskResponse(const DescribeAuditMitigationActionsTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAuditMitigationActionsTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAuditMitigationActionsTaskResponse)
    Q_DISABLE_COPY(DescribeAuditMitigationActionsTaskResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
