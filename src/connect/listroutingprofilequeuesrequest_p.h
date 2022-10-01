// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTINGPROFILEQUEUESREQUEST_P_H
#define QTAWS_LISTROUTINGPROFILEQUEUESREQUEST_P_H

#include "connectrequest_p.h"
#include "listroutingprofilequeuesrequest.h"

namespace QtAws {
namespace Connect {

class ListRoutingProfileQueuesRequest;

class ListRoutingProfileQueuesRequestPrivate : public ConnectRequestPrivate {

public:
    ListRoutingProfileQueuesRequestPrivate(const ConnectRequest::Action action,
                                   ListRoutingProfileQueuesRequest * const q);
    ListRoutingProfileQueuesRequestPrivate(const ListRoutingProfileQueuesRequestPrivate &other,
                                   ListRoutingProfileQueuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRoutingProfileQueuesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
