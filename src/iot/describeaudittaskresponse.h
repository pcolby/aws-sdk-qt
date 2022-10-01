// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITTASKRESPONSE_H
#define QTAWS_DESCRIBEAUDITTASKRESPONSE_H

#include "iotresponse.h"
#include "describeaudittaskrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAuditTaskResponsePrivate;

class QTAWSIOT_EXPORT DescribeAuditTaskResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeAuditTaskResponse(const DescribeAuditTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAuditTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAuditTaskResponse)
    Q_DISABLE_COPY(DescribeAuditTaskResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
