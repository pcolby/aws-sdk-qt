// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEONBOARDINGJOBREQUEST_P_H
#define QTAWS_DELETEINSTANCEONBOARDINGJOBREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "deleteinstanceonboardingjobrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class DeleteInstanceOnboardingJobRequest;

class DeleteInstanceOnboardingJobRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    DeleteInstanceOnboardingJobRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   DeleteInstanceOnboardingJobRequest * const q);
    DeleteInstanceOnboardingJobRequestPrivate(const DeleteInstanceOnboardingJobRequestPrivate &other,
                                   DeleteInstanceOnboardingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInstanceOnboardingJobRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
