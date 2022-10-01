// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECAMPAIGNREQUEST_P_H
#define QTAWS_DELETECAMPAIGNREQUEST_P_H

#include "personalizerequest_p.h"
#include "deletecampaignrequest.h"

namespace QtAws {
namespace Personalize {

class DeleteCampaignRequest;

class DeleteCampaignRequestPrivate : public PersonalizeRequestPrivate {

public:
    DeleteCampaignRequestPrivate(const PersonalizeRequest::Action action,
                                   DeleteCampaignRequest * const q);
    DeleteCampaignRequestPrivate(const DeleteCampaignRequestPrivate &other,
                                   DeleteCampaignRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCampaignRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
