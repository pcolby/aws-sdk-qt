// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGPROFILECONCURRENCYREQUEST_P_H
#define QTAWS_UPDATEROUTINGPROFILECONCURRENCYREQUEST_P_H

#include "connectrequest_p.h"
#include "updateroutingprofileconcurrencyrequest.h"

namespace QtAws {
namespace Connect {

class UpdateRoutingProfileConcurrencyRequest;

class UpdateRoutingProfileConcurrencyRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateRoutingProfileConcurrencyRequestPrivate(const ConnectRequest::Action action,
                                   UpdateRoutingProfileConcurrencyRequest * const q);
    UpdateRoutingProfileConcurrencyRequestPrivate(const UpdateRoutingProfileConcurrencyRequestPrivate &other,
                                   UpdateRoutingProfileConcurrencyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRoutingProfileConcurrencyRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
