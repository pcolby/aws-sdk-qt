// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPNSVOIPSANDBOXCHANNELREQUEST_P_H
#define QTAWS_DELETEAPNSVOIPSANDBOXCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deleteapnsvoipsandboxchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteApnsVoipSandboxChannelRequest;

class DeleteApnsVoipSandboxChannelRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteApnsVoipSandboxChannelRequestPrivate(const PinpointRequest::Action action,
                                   DeleteApnsVoipSandboxChannelRequest * const q);
    DeleteApnsVoipSandboxChannelRequestPrivate(const DeleteApnsVoipSandboxChannelRequestPrivate &other,
                                   DeleteApnsVoipSandboxChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApnsVoipSandboxChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
