// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINDELIVERABILITYCAMPAIGNREQUEST_P_H
#define QTAWS_GETDOMAINDELIVERABILITYCAMPAIGNREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "getdomaindeliverabilitycampaignrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDomainDeliverabilityCampaignRequest;

class GetDomainDeliverabilityCampaignRequestPrivate : public PinpointEmailRequestPrivate {

public:
    GetDomainDeliverabilityCampaignRequestPrivate(const PinpointEmailRequest::Action action,
                                   GetDomainDeliverabilityCampaignRequest * const q);
    GetDomainDeliverabilityCampaignRequestPrivate(const GetDomainDeliverabilityCampaignRequestPrivate &other,
                                   GetDomainDeliverabilityCampaignRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDomainDeliverabilityCampaignRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
