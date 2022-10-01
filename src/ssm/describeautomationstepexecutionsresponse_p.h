// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOMATIONSTEPEXECUTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEAUTOMATIONSTEPEXECUTIONSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeAutomationStepExecutionsResponse;

class DescribeAutomationStepExecutionsResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeAutomationStepExecutionsResponsePrivate(DescribeAutomationStepExecutionsResponse * const q);

    void parseDescribeAutomationStepExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAutomationStepExecutionsResponse)
    Q_DISABLE_COPY(DescribeAutomationStepExecutionsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
