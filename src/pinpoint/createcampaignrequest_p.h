// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAMPAIGNREQUEST_P_H
#define QTAWS_CREATECAMPAIGNREQUEST_P_H

#include "pinpointrequest_p.h"
#include "createcampaignrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateCampaignRequest;

class CreateCampaignRequestPrivate : public PinpointRequestPrivate {

public:
    CreateCampaignRequestPrivate(const PinpointRequest::Action action,
                                   CreateCampaignRequest * const q);
    CreateCampaignRequestPrivate(const CreateCampaignRequestPrivate &other,
                                   CreateCampaignRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCampaignRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
