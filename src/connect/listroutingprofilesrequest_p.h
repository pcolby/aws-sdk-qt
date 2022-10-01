// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTINGPROFILESREQUEST_P_H
#define QTAWS_LISTROUTINGPROFILESREQUEST_P_H

#include "connectrequest_p.h"
#include "listroutingprofilesrequest.h"

namespace QtAws {
namespace Connect {

class ListRoutingProfilesRequest;

class ListRoutingProfilesRequestPrivate : public ConnectRequestPrivate {

public:
    ListRoutingProfilesRequestPrivate(const ConnectRequest::Action action,
                                   ListRoutingProfilesRequest * const q);
    ListRoutingProfilesRequestPrivate(const ListRoutingProfilesRequestPrivate &other,
                                   ListRoutingProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRoutingProfilesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
