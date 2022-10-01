// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCAMPAIGNREQUEST_P_H
#define QTAWS_STARTCAMPAIGNREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "startcampaignrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class StartCampaignRequest;

class StartCampaignRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    StartCampaignRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   StartCampaignRequest * const q);
    StartCampaignRequestPrivate(const StartCampaignRequestPrivate &other,
                                   StartCampaignRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartCampaignRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
