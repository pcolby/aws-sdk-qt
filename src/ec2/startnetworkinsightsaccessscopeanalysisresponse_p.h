// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNETWORKINSIGHTSACCESSSCOPEANALYSISRESPONSE_P_H
#define QTAWS_STARTNETWORKINSIGHTSACCESSSCOPEANALYSISRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class StartNetworkInsightsAccessScopeAnalysisResponse;

class StartNetworkInsightsAccessScopeAnalysisResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit StartNetworkInsightsAccessScopeAnalysisResponsePrivate(StartNetworkInsightsAccessScopeAnalysisResponse * const q);

    void parseStartNetworkInsightsAccessScopeAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartNetworkInsightsAccessScopeAnalysisResponse)
    Q_DISABLE_COPY(StartNetworkInsightsAccessScopeAnalysisResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
