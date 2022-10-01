// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWLOGSRESPONSE_P_H
#define QTAWS_DESCRIBEFLOWLOGSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeFlowLogsResponse;

class DescribeFlowLogsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeFlowLogsResponsePrivate(DescribeFlowLogsResponse * const q);

    void parseDescribeFlowLogsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFlowLogsResponse)
    Q_DISABLE_COPY(DescribeFlowLogsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
