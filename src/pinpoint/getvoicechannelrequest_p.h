// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECHANNELREQUEST_P_H
#define QTAWS_GETVOICECHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getvoicechannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetVoiceChannelRequest;

class GetVoiceChannelRequestPrivate : public PinpointRequestPrivate {

public:
    GetVoiceChannelRequestPrivate(const PinpointRequest::Action action,
                                   GetVoiceChannelRequest * const q);
    GetVoiceChannelRequestPrivate(const GetVoiceChannelRequestPrivate &other,
                                   GetVoiceChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVoiceChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
