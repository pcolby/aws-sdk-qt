// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNETWORKINSIGHTSACCESSSCOPEANALYSISREQUEST_P_H
#define QTAWS_STARTNETWORKINSIGHTSACCESSSCOPEANALYSISREQUEST_P_H

#include "ec2request_p.h"
#include "startnetworkinsightsaccessscopeanalysisrequest.h"

namespace QtAws {
namespace Ec2 {

class StartNetworkInsightsAccessScopeAnalysisRequest;

class StartNetworkInsightsAccessScopeAnalysisRequestPrivate : public Ec2RequestPrivate {

public:
    StartNetworkInsightsAccessScopeAnalysisRequestPrivate(const Ec2Request::Action action,
                                   StartNetworkInsightsAccessScopeAnalysisRequest * const q);
    StartNetworkInsightsAccessScopeAnalysisRequestPrivate(const StartNetworkInsightsAccessScopeAnalysisRequestPrivate &other,
                                   StartNetworkInsightsAccessScopeAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartNetworkInsightsAccessScopeAnalysisRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
