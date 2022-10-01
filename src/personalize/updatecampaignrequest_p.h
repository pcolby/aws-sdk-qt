// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAMPAIGNREQUEST_P_H
#define QTAWS_UPDATECAMPAIGNREQUEST_P_H

#include "personalizerequest_p.h"
#include "updatecampaignrequest.h"

namespace QtAws {
namespace Personalize {

class UpdateCampaignRequest;

class UpdateCampaignRequestPrivate : public PersonalizeRequestPrivate {

public:
    UpdateCampaignRequestPrivate(const PersonalizeRequest::Action action,
                                   UpdateCampaignRequest * const q);
    UpdateCampaignRequestPrivate(const UpdateCampaignRequestPrivate &other,
                                   UpdateCampaignRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCampaignRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
