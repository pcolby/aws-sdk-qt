// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKINSIGHTSACCESSSCOPEANALYSISFINDINGSRESPONSE_P_H
#define QTAWS_GETNETWORKINSIGHTSACCESSSCOPEANALYSISFINDINGSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetNetworkInsightsAccessScopeAnalysisFindingsResponse;

class GetNetworkInsightsAccessScopeAnalysisFindingsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetNetworkInsightsAccessScopeAnalysisFindingsResponsePrivate(GetNetworkInsightsAccessScopeAnalysisFindingsResponse * const q);

    void parseGetNetworkInsightsAccessScopeAnalysisFindingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNetworkInsightsAccessScopeAnalysisFindingsResponse)
    Q_DISABLE_COPY(GetNetworkInsightsAccessScopeAnalysisFindingsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
