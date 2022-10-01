// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PAUSECAMPAIGNREQUEST_P_H
#define QTAWS_PAUSECAMPAIGNREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "pausecampaignrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class PauseCampaignRequest;

class PauseCampaignRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    PauseCampaignRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   PauseCampaignRequest * const q);
    PauseCampaignRequestPrivate(const PauseCampaignRequestPrivate &other,
                                   PauseCampaignRequest * const q);

private:
    Q_DECLARE_PUBLIC(PauseCampaignRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
