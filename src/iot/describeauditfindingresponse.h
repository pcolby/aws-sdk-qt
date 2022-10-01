// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITFINDINGRESPONSE_H
#define QTAWS_DESCRIBEAUDITFINDINGRESPONSE_H

#include "iotresponse.h"
#include "describeauditfindingrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAuditFindingResponsePrivate;

class QTAWSIOT_EXPORT DescribeAuditFindingResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeAuditFindingResponse(const DescribeAuditFindingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAuditFindingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAuditFindingResponse)
    Q_DISABLE_COPY(DescribeAuditFindingResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
