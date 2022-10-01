// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATETUNNELACCESSTOKENREQUEST_P_H
#define QTAWS_ROTATETUNNELACCESSTOKENREQUEST_P_H

#include "iotsecuretunnelingrequest_p.h"
#include "rotatetunnelaccesstokenrequest.h"

namespace QtAws {
namespace IoTSecureTunneling {

class RotateTunnelAccessTokenRequest;

class RotateTunnelAccessTokenRequestPrivate : public IoTSecureTunnelingRequestPrivate {

public:
    RotateTunnelAccessTokenRequestPrivate(const IoTSecureTunnelingRequest::Action action,
                                   RotateTunnelAccessTokenRequest * const q);
    RotateTunnelAccessTokenRequestPrivate(const RotateTunnelAccessTokenRequestPrivate &other,
                                   RotateTunnelAccessTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(RotateTunnelAccessTokenRequest)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
