// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNSREQUEST_P_H
#define QTAWS_GETCAMPAIGNSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getcampaignsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignsRequest;

class GetCampaignsRequestPrivate : public PinpointRequestPrivate {

public:
    GetCampaignsRequestPrivate(const PinpointRequest::Action action,
                                   GetCampaignsRequest * const q);
    GetCampaignsRequestPrivate(const GetCampaignsRequestPrivate &other,
                                   GetCampaignsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCampaignsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
