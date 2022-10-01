// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAMPAIGNDIALERCONFIGREQUEST_P_H
#define QTAWS_UPDATECAMPAIGNDIALERCONFIGREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "updatecampaigndialerconfigrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class UpdateCampaignDialerConfigRequest;

class UpdateCampaignDialerConfigRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    UpdateCampaignDialerConfigRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   UpdateCampaignDialerConfigRequest * const q);
    UpdateCampaignDialerConfigRequestPrivate(const UpdateCampaignDialerConfigRequestPrivate &other,
                                   UpdateCampaignDialerConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCampaignDialerConfigRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
