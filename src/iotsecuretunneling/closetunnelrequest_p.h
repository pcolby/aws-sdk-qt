// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOSETUNNELREQUEST_P_H
#define QTAWS_CLOSETUNNELREQUEST_P_H

#include "iotsecuretunnelingrequest_p.h"
#include "closetunnelrequest.h"

namespace QtAws {
namespace IoTSecureTunneling {

class CloseTunnelRequest;

class CloseTunnelRequestPrivate : public IoTSecureTunnelingRequestPrivate {

public:
    CloseTunnelRequestPrivate(const IoTSecureTunnelingRequest::Action action,
                                   CloseTunnelRequest * const q);
    CloseTunnelRequestPrivate(const CloseTunnelRequestPrivate &other,
                                   CloseTunnelRequest * const q);

private:
    Q_DECLARE_PUBLIC(CloseTunnelRequest)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
