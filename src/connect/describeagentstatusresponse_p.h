// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGENTSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBEAGENTSTATUSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DescribeAgentStatusResponse;

class DescribeAgentStatusResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DescribeAgentStatusResponsePrivate(DescribeAgentStatusResponse * const q);

    void parseDescribeAgentStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAgentStatusResponse)
    Q_DISABLE_COPY(DescribeAgentStatusResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
