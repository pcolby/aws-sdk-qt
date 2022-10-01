// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPNSSANDBOXCHANNELREQUEST_P_H
#define QTAWS_GETAPNSSANDBOXCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getapnssandboxchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApnsSandboxChannelRequest;

class GetApnsSandboxChannelRequestPrivate : public PinpointRequestPrivate {

public:
    GetApnsSandboxChannelRequestPrivate(const PinpointRequest::Action action,
                                   GetApnsSandboxChannelRequest * const q);
    GetApnsSandboxChannelRequestPrivate(const GetApnsSandboxChannelRequestPrivate &other,
                                   GetApnsSandboxChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApnsSandboxChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
