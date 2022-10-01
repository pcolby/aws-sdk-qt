// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKINSIGHTSACCESSSCOPEANALYSISFINDINGSREQUEST_P_H
#define QTAWS_GETNETWORKINSIGHTSACCESSSCOPEANALYSISFINDINGSREQUEST_P_H

#include "ec2request_p.h"
#include "getnetworkinsightsaccessscopeanalysisfindingsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetNetworkInsightsAccessScopeAnalysisFindingsRequest;

class GetNetworkInsightsAccessScopeAnalysisFindingsRequestPrivate : public Ec2RequestPrivate {

public:
    GetNetworkInsightsAccessScopeAnalysisFindingsRequestPrivate(const Ec2Request::Action action,
                                   GetNetworkInsightsAccessScopeAnalysisFindingsRequest * const q);
    GetNetworkInsightsAccessScopeAnalysisFindingsRequestPrivate(const GetNetworkInsightsAccessScopeAnalysisFindingsRequestPrivate &other,
                                   GetNetworkInsightsAccessScopeAnalysisFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNetworkInsightsAccessScopeAnalysisFindingsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
