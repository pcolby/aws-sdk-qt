// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOMATIONEXECUTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEAUTOMATIONEXECUTIONSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeAutomationExecutionsResponse;

class DescribeAutomationExecutionsResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeAutomationExecutionsResponsePrivate(DescribeAutomationExecutionsResponse * const q);

    void parseDescribeAutomationExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAutomationExecutionsResponse)
    Q_DISABLE_COPY(DescribeAutomationExecutionsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
