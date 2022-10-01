// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCAMPAIGNSREQUEST_P_H
#define QTAWS_LISTCAMPAIGNSREQUEST_P_H

#include "connectcampaignsrequest_p.h"
#include "listcampaignsrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class ListCampaignsRequest;

class ListCampaignsRequestPrivate : public ConnectCampaignsRequestPrivate {

public:
    ListCampaignsRequestPrivate(const ConnectCampaignsRequest::Action action,
                                   ListCampaignsRequest * const q);
    ListCampaignsRequestPrivate(const ListCampaignsRequestPrivate &other,
                                   ListCampaignsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCampaignsRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
