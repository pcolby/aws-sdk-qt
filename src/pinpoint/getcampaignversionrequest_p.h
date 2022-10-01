// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNVERSIONREQUEST_P_H
#define QTAWS_GETCAMPAIGNVERSIONREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getcampaignversionrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignVersionRequest;

class GetCampaignVersionRequestPrivate : public PinpointRequestPrivate {

public:
    GetCampaignVersionRequestPrivate(const PinpointRequest::Action action,
                                   GetCampaignVersionRequest * const q);
    GetCampaignVersionRequestPrivate(const GetCampaignVersionRequestPrivate &other,
                                   GetCampaignVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCampaignVersionRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
