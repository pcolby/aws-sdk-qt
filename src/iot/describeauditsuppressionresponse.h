// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITSUPPRESSIONRESPONSE_H
#define QTAWS_DESCRIBEAUDITSUPPRESSIONRESPONSE_H

#include "iotresponse.h"
#include "describeauditsuppressionrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAuditSuppressionResponsePrivate;

class QTAWSIOT_EXPORT DescribeAuditSuppressionResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeAuditSuppressionResponse(const DescribeAuditSuppressionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAuditSuppressionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAuditSuppressionResponse)
    Q_DISABLE_COPY(DescribeAuditSuppressionResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
