// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINDELIVERABILITYCAMPAIGNSREQUEST_P_H
#define QTAWS_LISTDOMAINDELIVERABILITYCAMPAIGNSREQUEST_P_H

#include "sesv2request_p.h"
#include "listdomaindeliverabilitycampaignsrequest.h"

namespace QtAws {
namespace SESv2 {

class ListDomainDeliverabilityCampaignsRequest;

class ListDomainDeliverabilityCampaignsRequestPrivate : public SESv2RequestPrivate {

public:
    ListDomainDeliverabilityCampaignsRequestPrivate(const SESv2Request::Action action,
                                   ListDomainDeliverabilityCampaignsRequest * const q);
    ListDomainDeliverabilityCampaignsRequestPrivate(const ListDomainDeliverabilityCampaignsRequestPrivate &other,
                                   ListDomainDeliverabilityCampaignsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDomainDeliverabilityCampaignsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
