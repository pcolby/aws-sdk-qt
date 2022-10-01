// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERROUTINGPROFILEREQUEST_P_H
#define QTAWS_UPDATEUSERROUTINGPROFILEREQUEST_P_H

#include "connectrequest_p.h"
#include "updateuserroutingprofilerequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserRoutingProfileRequest;

class UpdateUserRoutingProfileRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateUserRoutingProfileRequestPrivate(const ConnectRequest::Action action,
                                   UpdateUserRoutingProfileRequest * const q);
    UpdateUserRoutingProfileRequestPrivate(const UpdateUserRoutingProfileRequestPrivate &other,
                                   UpdateUserRoutingProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserRoutingProfileRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
