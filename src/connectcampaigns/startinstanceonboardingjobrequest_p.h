// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINSTANCEONBOARDINGJOBREQUEST_P_H
#define QTAWS_STARTINSTANCEONBOARDINGJOBREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "startinstanceonboardingjobrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class StartInstanceOnboardingJobRequest;

class StartInstanceOnboardingJobRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    StartInstanceOnboardingJobRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   StartInstanceOnboardingJobRequest * const q);
    StartInstanceOnboardingJobRequestPrivate(const StartInstanceOnboardingJobRequestPrivate &other,
                                   StartInstanceOnboardingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartInstanceOnboardingJobRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
