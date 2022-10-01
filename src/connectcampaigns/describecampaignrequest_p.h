// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECAMPAIGNREQUEST_P_H
#define QTAWS_DESCRIBECAMPAIGNREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "describecampaignrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class DescribeCampaignRequest;

class DescribeCampaignRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    DescribeCampaignRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   DescribeCampaignRequest * const q);
    DescribeCampaignRequestPrivate(const DescribeCampaignRequestPrivate &other,
                                   DescribeCampaignRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCampaignRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
