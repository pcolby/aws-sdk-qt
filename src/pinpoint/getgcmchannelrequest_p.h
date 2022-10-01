// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGCMCHANNELREQUEST_P_H
#define QTAWS_GETGCMCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getgcmchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetGcmChannelRequest;

class GetGcmChannelRequestPrivate : public PinpointRequestPrivate {

public:
    GetGcmChannelRequestPrivate(const PinpointRequest::Action action,
                                   GetGcmChannelRequest * const q);
    GetGcmChannelRequestPrivate(const GetGcmChannelRequestPrivate &other,
                                   GetGcmChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGcmChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
