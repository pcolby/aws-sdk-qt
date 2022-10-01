// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTINGPROFILEREQUEST_P_H
#define QTAWS_CREATEROUTINGPROFILEREQUEST_P_H

#include "connectrequest_p.h"
#include "createroutingprofilerequest.h"

namespace QtAws {
namespace Connect {

class CreateRoutingProfileRequest;

class CreateRoutingProfileRequestPrivate : public ConnectRequestPrivate {

public:
    CreateRoutingProfileRequestPrivate(const ConnectRequest::Action action,
                                   CreateRoutingProfileRequest * const q);
    CreateRoutingProfileRequestPrivate(const CreateRoutingProfileRequestPrivate &other,
                                   CreateRoutingProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRoutingProfileRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
