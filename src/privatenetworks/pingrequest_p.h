// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINGREQUEST_P_H
#define QTAWS_PINGREQUEST_P_H

#include "privatenetworksrequest_p.h"
#include "pingrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class PingRequest;

class PingRequestPrivate : public PrivateNetworksRequestPrivate {

public:
    PingRequestPrivate(const PrivateNetworksRequest::Action action,
                                   PingRequest * const q);
    PingRequestPrivate(const PingRequestPrivate &other,
                                   PingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PingRequest)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
