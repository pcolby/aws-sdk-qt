// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAMPAIGNREQUEST_P_H
#define QTAWS_CREATECAMPAIGNREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "createcampaignrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class CreateCampaignRequest;

class CreateCampaignRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    CreateCampaignRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   CreateCampaignRequest * const q);
    CreateCampaignRequestPrivate(const CreateCampaignRequestPrivate &other,
                                   CreateCampaignRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCampaignRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
