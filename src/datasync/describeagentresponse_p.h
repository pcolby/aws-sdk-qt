// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGENTRESPONSE_P_H
#define QTAWS_DESCRIBEAGENTRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class DescribeAgentResponse;

class DescribeAgentResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit DescribeAgentResponsePrivate(DescribeAgentResponse * const q);

    void parseDescribeAgentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAgentResponse)
    Q_DISABLE_COPY(DescribeAgentResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
