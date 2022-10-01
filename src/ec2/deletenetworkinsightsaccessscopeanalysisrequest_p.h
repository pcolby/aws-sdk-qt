// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINSIGHTSACCESSSCOPEANALYSISREQUEST_P_H
#define QTAWS_DELETENETWORKINSIGHTSACCESSSCOPEANALYSISREQUEST_P_H

#include "ec2request_p.h"
#include "deletenetworkinsightsaccessscopeanalysisrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInsightsAccessScopeAnalysisRequest;

class DeleteNetworkInsightsAccessScopeAnalysisRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteNetworkInsightsAccessScopeAnalysisRequestPrivate(const Ec2Request::Action action,
                                   DeleteNetworkInsightsAccessScopeAnalysisRequest * const q);
    DeleteNetworkInsightsAccessScopeAnalysisRequestPrivate(const DeleteNetworkInsightsAccessScopeAnalysisRequestPrivate &other,
                                   DeleteNetworkInsightsAccessScopeAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkInsightsAccessScopeAnalysisRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
