// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOICECHANNELREQUEST_P_H
#define QTAWS_UPDATEVOICECHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updatevoicechannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateVoiceChannelRequest;

class UpdateVoiceChannelRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateVoiceChannelRequestPrivate(const PinpointRequest::Action action,
                                   UpdateVoiceChannelRequest * const q);
    UpdateVoiceChannelRequestPrivate(const UpdateVoiceChannelRequestPrivate &other,
                                   UpdateVoiceChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVoiceChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
