// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDAUDITRESPONSE_H
#define QTAWS_DESCRIBESCHEDULEDAUDITRESPONSE_H

#include "iotresponse.h"
#include "describescheduledauditrequest.h"

namespace QtAws {
namespace IoT {

class DescribeScheduledAuditResponsePrivate;

class QTAWSIOT_EXPORT DescribeScheduledAuditResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeScheduledAuditResponse(const DescribeScheduledAuditRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeScheduledAuditRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScheduledAuditResponse)
    Q_DISABLE_COPY(DescribeScheduledAuditResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
