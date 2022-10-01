// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPENTUNNELREQUEST_P_H
#define QTAWS_OPENTUNNELREQUEST_P_H

#include "iotsecuretunnelingrequest_p.h"
#include "opentunnelrequest.h"

namespace QtAws {
namespace IoTSecureTunneling {

class OpenTunnelRequest;

class OpenTunnelRequestPrivate : public IoTSecureTunnelingRequestPrivate {

public:
    OpenTunnelRequestPrivate(const IoTSecureTunnelingRequest::Action action,
                                   OpenTunnelRequest * const q);
    OpenTunnelRequestPrivate(const OpenTunnelRequestPrivate &other,
                                   OpenTunnelRequest * const q);

private:
    Q_DECLARE_PUBLIC(OpenTunnelRequest)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
