// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNSTATEBATCHREQUEST_P_H
#define QTAWS_GETCAMPAIGNSTATEBATCHREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "getcampaignstatebatchrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class GetCampaignStateBatchRequest;

class GetCampaignStateBatchRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    GetCampaignStateBatchRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   GetCampaignStateBatchRequest * const q);
    GetCampaignStateBatchRequestPrivate(const GetCampaignStateBatchRequestPrivate &other,
                                   GetCampaignStateBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCampaignStateBatchRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
