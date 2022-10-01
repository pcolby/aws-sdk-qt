// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREMEDIATIONEXECUTIONSTATUSRESPONSE_H
#define QTAWS_DESCRIBEREMEDIATIONEXECUTIONSTATUSRESPONSE_H

#include "configserviceresponse.h"
#include "describeremediationexecutionstatusrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeRemediationExecutionStatusResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeRemediationExecutionStatusResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeRemediationExecutionStatusResponse(const DescribeRemediationExecutionStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRemediationExecutionStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRemediationExecutionStatusResponse)
    Q_DISABLE_COPY(DescribeRemediationExecutionStatusResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
