// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNREQUEST_P_H
#define QTAWS_GETCAMPAIGNREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getcampaignrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignRequest;

class GetCampaignRequestPrivate : public PinpointRequestPrivate {

public:
    GetCampaignRequestPrivate(const PinpointRequest::Action action,
                                   GetCampaignRequest * const q);
    GetCampaignRequestPrivate(const GetCampaignRequestPrivate &other,
                                   GetCampaignRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCampaignRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
