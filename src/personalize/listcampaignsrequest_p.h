// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCAMPAIGNSREQUEST_P_H
#define QTAWS_LISTCAMPAIGNSREQUEST_P_H

#include "personalizerequest_p.h"
#include "listcampaignsrequest.h"

namespace QtAws {
namespace Personalize {

class ListCampaignsRequest;

class ListCampaignsRequestPrivate : public PersonalizeRequestPrivate {

public:
    ListCampaignsRequestPrivate(const PersonalizeRequest::Action action,
                                   ListCampaignsRequest * const q);
    ListCampaignsRequestPrivate(const ListCampaignsRequestPrivate &other,
                                   ListCampaignsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCampaignsRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
