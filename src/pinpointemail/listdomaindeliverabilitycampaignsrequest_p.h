// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINDELIVERABILITYCAMPAIGNSREQUEST_P_H
#define QTAWS_LISTDOMAINDELIVERABILITYCAMPAIGNSREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "listdomaindeliverabilitycampaignsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class ListDomainDeliverabilityCampaignsRequest;

class ListDomainDeliverabilityCampaignsRequestPrivate : public PinpointEmailRequestPrivate {

public:
    ListDomainDeliverabilityCampaignsRequestPrivate(const PinpointEmailRequest::Action action,
                                   ListDomainDeliverabilityCampaignsRequest * const q);
    ListDomainDeliverabilityCampaignsRequestPrivate(const ListDomainDeliverabilityCampaignsRequestPrivate &other,
                                   ListDomainDeliverabilityCampaignsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDomainDeliverabilityCampaignsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
