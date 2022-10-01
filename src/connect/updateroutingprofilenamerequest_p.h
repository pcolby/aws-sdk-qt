// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGPROFILENAMEREQUEST_P_H
#define QTAWS_UPDATEROUTINGPROFILENAMEREQUEST_P_H

#include "connectrequest_p.h"
#include "updateroutingprofilenamerequest.h"

namespace QtAws {
namespace Connect {

class UpdateRoutingProfileNameRequest;

class UpdateRoutingProfileNameRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateRoutingProfileNameRequestPrivate(const ConnectRequest::Action action,
                                   UpdateRoutingProfileNameRequest * const q);
    UpdateRoutingProfileNameRequestPrivate(const UpdateRoutingProfileNameRequestPrivate &other,
                                   UpdateRoutingProfileNameRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRoutingProfileNameRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
