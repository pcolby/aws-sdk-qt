// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAMPAIGNOUTBOUNDCALLCONFIGREQUEST_P_H
#define QTAWS_UPDATECAMPAIGNOUTBOUNDCALLCONFIGREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "updatecampaignoutboundcallconfigrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class UpdateCampaignOutboundCallConfigRequest;

class UpdateCampaignOutboundCallConfigRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    UpdateCampaignOutboundCallConfigRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   UpdateCampaignOutboundCallConfigRequest * const q);
    UpdateCampaignOutboundCallConfigRequestPrivate(const UpdateCampaignOutboundCallConfigRequestPrivate &other,
                                   UpdateCampaignOutboundCallConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCampaignOutboundCallConfigRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
