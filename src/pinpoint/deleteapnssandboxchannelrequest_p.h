// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPNSSANDBOXCHANNELREQUEST_P_H
#define QTAWS_DELETEAPNSSANDBOXCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deleteapnssandboxchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteApnsSandboxChannelRequest;

class DeleteApnsSandboxChannelRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteApnsSandboxChannelRequestPrivate(const PinpointRequest::Action action,
                                   DeleteApnsSandboxChannelRequest * const q);
    DeleteApnsSandboxChannelRequestPrivate(const DeleteApnsSandboxChannelRequestPrivate &other,
                                   DeleteApnsSandboxChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApnsSandboxChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
