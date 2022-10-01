// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGPROFILEQUEUESREQUEST_P_H
#define QTAWS_UPDATEROUTINGPROFILEQUEUESREQUEST_P_H

#include "connectrequest_p.h"
#include "updateroutingprofilequeuesrequest.h"

namespace QtAws {
namespace Connect {

class UpdateRoutingProfileQueuesRequest;

class UpdateRoutingProfileQueuesRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateRoutingProfileQueuesRequestPrivate(const ConnectRequest::Action action,
                                   UpdateRoutingProfileQueuesRequest * const q);
    UpdateRoutingProfileQueuesRequestPrivate(const UpdateRoutingProfileQueuesRequestPrivate &other,
                                   UpdateRoutingProfileQueuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRoutingProfileQueuesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
