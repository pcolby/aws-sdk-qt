// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPNSSANDBOXCHANNELREQUEST_P_H
#define QTAWS_UPDATEAPNSSANDBOXCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updateapnssandboxchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateApnsSandboxChannelRequest;

class UpdateApnsSandboxChannelRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateApnsSandboxChannelRequestPrivate(const PinpointRequest::Action action,
                                   UpdateApnsSandboxChannelRequest * const q);
    UpdateApnsSandboxChannelRequestPrivate(const UpdateApnsSandboxChannelRequestPrivate &other,
                                   UpdateApnsSandboxChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApnsSandboxChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
