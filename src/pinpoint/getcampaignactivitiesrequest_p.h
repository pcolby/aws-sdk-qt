// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNACTIVITIESREQUEST_P_H
#define QTAWS_GETCAMPAIGNACTIVITIESREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getcampaignactivitiesrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignActivitiesRequest;

class GetCampaignActivitiesRequestPrivate : public PinpointRequestPrivate {

public:
    GetCampaignActivitiesRequestPrivate(const PinpointRequest::Action action,
                                   GetCampaignActivitiesRequest * const q);
    GetCampaignActivitiesRequestPrivate(const GetCampaignActivitiesRequestPrivate &other,
                                   GetCampaignActivitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCampaignActivitiesRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
