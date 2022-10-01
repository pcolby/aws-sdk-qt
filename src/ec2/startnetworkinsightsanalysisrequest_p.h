// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNETWORKINSIGHTSANALYSISREQUEST_P_H
#define QTAWS_STARTNETWORKINSIGHTSANALYSISREQUEST_P_H

#include "ec2request_p.h"
#include "startnetworkinsightsanalysisrequest.h"

namespace QtAws {
namespace Ec2 {

class StartNetworkInsightsAnalysisRequest;

class StartNetworkInsightsAnalysisRequestPrivate : public Ec2RequestPrivate {

public:
    StartNetworkInsightsAnalysisRequestPrivate(const Ec2Request::Action action,
                                   StartNetworkInsightsAnalysisRequest * const q);
    StartNetworkInsightsAnalysisRequestPrivate(const StartNetworkInsightsAnalysisRequestPrivate &other,
                                   StartNetworkInsightsAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartNetworkInsightsAnalysisRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
