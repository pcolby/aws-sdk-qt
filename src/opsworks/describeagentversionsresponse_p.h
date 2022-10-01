// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGENTVERSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEAGENTVERSIONSRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeAgentVersionsResponse;

class DescribeAgentVersionsResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeAgentVersionsResponsePrivate(DescribeAgentVersionsResponse * const q);

    void parseDescribeAgentVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAgentVersionsResponse)
    Q_DISABLE_COPY(DescribeAgentVersionsResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
