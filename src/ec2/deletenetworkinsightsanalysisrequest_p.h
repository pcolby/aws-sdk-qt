// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINSIGHTSANALYSISREQUEST_P_H
#define QTAWS_DELETENETWORKINSIGHTSANALYSISREQUEST_P_H

#include "ec2request_p.h"
#include "deletenetworkinsightsanalysisrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInsightsAnalysisRequest;

class DeleteNetworkInsightsAnalysisRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteNetworkInsightsAnalysisRequestPrivate(const Ec2Request::Action action,
                                   DeleteNetworkInsightsAnalysisRequest * const q);
    DeleteNetworkInsightsAnalysisRequestPrivate(const DeleteNetworkInsightsAnalysisRequestPrivate &other,
                                   DeleteNetworkInsightsAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkInsightsAnalysisRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
