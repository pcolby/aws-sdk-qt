// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEONBOARDINGJOBSTATUSREQUEST_P_H
#define QTAWS_GETINSTANCEONBOARDINGJOBSTATUSREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "getinstanceonboardingjobstatusrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class GetInstanceOnboardingJobStatusRequest;

class GetInstanceOnboardingJobStatusRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    GetInstanceOnboardingJobStatusRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   GetInstanceOnboardingJobStatusRequest * const q);
    GetInstanceOnboardingJobStatusRequestPrivate(const GetInstanceOnboardingJobStatusRequestPrivate &other,
                                   GetInstanceOnboardingJobStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInstanceOnboardingJobStatusRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
