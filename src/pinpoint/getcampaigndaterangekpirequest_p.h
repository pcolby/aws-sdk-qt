// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNDATERANGEKPIREQUEST_P_H
#define QTAWS_GETCAMPAIGNDATERANGEKPIREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getcampaigndaterangekpirequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignDateRangeKpiRequest;

class GetCampaignDateRangeKpiRequestPrivate : public PinpointRequestPrivate {

public:
    GetCampaignDateRangeKpiRequestPrivate(const PinpointRequest::Action action,
                                   GetCampaignDateRangeKpiRequest * const q);
    GetCampaignDateRangeKpiRequestPrivate(const GetCampaignDateRangeKpiRequestPrivate &other,
                                   GetCampaignDateRangeKpiRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCampaignDateRangeKpiRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
