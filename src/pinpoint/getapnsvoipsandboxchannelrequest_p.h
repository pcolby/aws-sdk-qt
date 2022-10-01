// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPNSVOIPSANDBOXCHANNELREQUEST_P_H
#define QTAWS_GETAPNSVOIPSANDBOXCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getapnsvoipsandboxchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApnsVoipSandboxChannelRequest;

class GetApnsVoipSandboxChannelRequestPrivate : public PinpointRequestPrivate {

public:
    GetApnsVoipSandboxChannelRequestPrivate(const PinpointRequest::Action action,
                                   GetApnsVoipSandboxChannelRequest * const q);
    GetApnsVoipSandboxChannelRequestPrivate(const GetApnsVoipSandboxChannelRequestPrivate &other,
                                   GetApnsVoipSandboxChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApnsVoipSandboxChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
