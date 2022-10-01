// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNVERSIONSREQUEST_P_H
#define QTAWS_GETCAMPAIGNVERSIONSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getcampaignversionsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignVersionsRequest;

class GetCampaignVersionsRequestPrivate : public PinpointRequestPrivate {

public:
    GetCampaignVersionsRequestPrivate(const PinpointRequest::Action action,
                                   GetCampaignVersionsRequest * const q);
    GetCampaignVersionsRequestPrivate(const GetCampaignVersionsRequestPrivate &other,
                                   GetCampaignVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCampaignVersionsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
