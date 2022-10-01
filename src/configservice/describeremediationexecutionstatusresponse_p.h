// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREMEDIATIONEXECUTIONSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBEREMEDIATIONEXECUTIONSTATUSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeRemediationExecutionStatusResponse;

class DescribeRemediationExecutionStatusResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeRemediationExecutionStatusResponsePrivate(DescribeRemediationExecutionStatusResponse * const q);

    void parseDescribeRemediationExecutionStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRemediationExecutionStatusResponse)
    Q_DISABLE_COPY(DescribeRemediationExecutionStatusResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
