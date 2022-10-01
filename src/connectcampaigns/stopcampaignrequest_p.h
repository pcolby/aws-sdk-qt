// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCAMPAIGNREQUEST_P_H
#define QTAWS_STOPCAMPAIGNREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "stopcampaignrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class StopCampaignRequest;

class StopCampaignRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    StopCampaignRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   StopCampaignRequest * const q);
    StopCampaignRequestPrivate(const StopCampaignRequestPrivate &other,
                                   StopCampaignRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopCampaignRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
