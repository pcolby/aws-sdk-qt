// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAMPAIGNREQUEST_P_H
#define QTAWS_UPDATECAMPAIGNREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updatecampaignrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateCampaignRequest;

class UpdateCampaignRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateCampaignRequestPrivate(const PinpointRequest::Action action,
                                   UpdateCampaignRequest * const q);
    UpdateCampaignRequestPrivate(const UpdateCampaignRequestPrivate &other,
                                   UpdateCampaignRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCampaignRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
