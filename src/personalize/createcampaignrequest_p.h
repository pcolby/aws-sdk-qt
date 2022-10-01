// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAMPAIGNREQUEST_P_H
#define QTAWS_CREATECAMPAIGNREQUEST_P_H

#include "personalizerequest_p.h"
#include "createcampaignrequest.h"

namespace QtAws {
namespace Personalize {

class CreateCampaignRequest;

class CreateCampaignRequestPrivate : public PersonalizeRequestPrivate {

public:
    CreateCampaignRequestPrivate(const PersonalizeRequest::Action action,
                                   CreateCampaignRequest * const q);
    CreateCampaignRequestPrivate(const CreateCampaignRequestPrivate &other,
                                   CreateCampaignRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCampaignRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
