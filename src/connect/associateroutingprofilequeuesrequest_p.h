// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEROUTINGPROFILEQUEUESREQUEST_P_H
#define QTAWS_ASSOCIATEROUTINGPROFILEQUEUESREQUEST_P_H

#include "connectrequest_p.h"
#include "associateroutingprofilequeuesrequest.h"

namespace QtAws {
namespace Connect {

class AssociateRoutingProfileQueuesRequest;

class AssociateRoutingProfileQueuesRequestPrivate : public ConnectRequestPrivate {

public:
    AssociateRoutingProfileQueuesRequestPrivate(const ConnectRequest::Action action,
                                   AssociateRoutingProfileQueuesRequest * const q);
    AssociateRoutingProfileQueuesRequestPrivate(const AssociateRoutingProfileQueuesRequestPrivate &other,
                                   AssociateRoutingProfileQueuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateRoutingProfileQueuesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
