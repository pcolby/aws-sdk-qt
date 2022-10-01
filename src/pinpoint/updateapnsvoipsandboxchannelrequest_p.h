// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPNSVOIPSANDBOXCHANNELREQUEST_P_H
#define QTAWS_UPDATEAPNSVOIPSANDBOXCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updateapnsvoipsandboxchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateApnsVoipSandboxChannelRequest;

class UpdateApnsVoipSandboxChannelRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateApnsVoipSandboxChannelRequestPrivate(const PinpointRequest::Action action,
                                   UpdateApnsVoipSandboxChannelRequest * const q);
    UpdateApnsVoipSandboxChannelRequestPrivate(const UpdateApnsVoipSandboxChannelRequestPrivate &other,
                                   UpdateApnsVoipSandboxChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApnsVoipSandboxChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
