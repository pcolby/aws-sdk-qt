// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNSTATEREQUEST_P_H
#define QTAWS_GETCAMPAIGNSTATEREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "getcampaignstaterequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class GetCampaignStateRequest;

class GetCampaignStateRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    GetCampaignStateRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   GetCampaignStateRequest * const q);
    GetCampaignStateRequestPrivate(const GetCampaignStateRequestPrivate &other,
                                   GetCampaignStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCampaignStateRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
