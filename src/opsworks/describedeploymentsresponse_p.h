// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEPLOYMENTSRESPONSE_P_H
#define QTAWS_DESCRIBEDEPLOYMENTSRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeDeploymentsResponse;

class DescribeDeploymentsResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeDeploymentsResponsePrivate(DescribeDeploymentsResponse * const q);

    void parseDescribeDeploymentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDeploymentsResponse)
    Q_DISABLE_COPY(DescribeDeploymentsResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
