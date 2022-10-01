// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECAMPAIGNREQUEST_P_H
#define QTAWS_DESCRIBECAMPAIGNREQUEST_P_H

#include "personalizerequest_p.h"
#include "describecampaignrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeCampaignRequest;

class DescribeCampaignRequestPrivate : public PersonalizeRequestPrivate {

public:
    DescribeCampaignRequestPrivate(const PersonalizeRequest::Action action,
                                   DescribeCampaignRequest * const q);
    DescribeCampaignRequestPrivate(const DescribeCampaignRequestPrivate &other,
                                   DescribeCampaignRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCampaignRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
