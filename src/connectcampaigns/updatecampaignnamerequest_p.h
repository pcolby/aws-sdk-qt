// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAMPAIGNNAMEREQUEST_P_H
#define QTAWS_UPDATECAMPAIGNNAMEREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "updatecampaignnamerequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class UpdateCampaignNameRequest;

class UpdateCampaignNameRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    UpdateCampaignNameRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   UpdateCampaignNameRequest * const q);
    UpdateCampaignNameRequestPrivate(const UpdateCampaignNameRequestPrivate &other,
                                   UpdateCampaignNameRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCampaignNameRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
