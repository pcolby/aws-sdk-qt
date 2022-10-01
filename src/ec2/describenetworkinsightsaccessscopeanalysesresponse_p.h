// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINSIGHTSACCESSSCOPEANALYSESRESPONSE_P_H
#define QTAWS_DESCRIBENETWORKINSIGHTSACCESSSCOPEANALYSESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInsightsAccessScopeAnalysesResponse;

class DescribeNetworkInsightsAccessScopeAnalysesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeNetworkInsightsAccessScopeAnalysesResponsePrivate(DescribeNetworkInsightsAccessScopeAnalysesResponse * const q);

    void parseDescribeNetworkInsightsAccessScopeAnalysesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNetworkInsightsAccessScopeAnalysesResponse)
    Q_DISABLE_COPY(DescribeNetworkInsightsAccessScopeAnalysesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
