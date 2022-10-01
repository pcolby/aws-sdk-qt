// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPNSVOIPCHANNELREQUEST_P_H
#define QTAWS_GETAPNSVOIPCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getapnsvoipchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApnsVoipChannelRequest;

class GetApnsVoipChannelRequestPrivate : public PinpointRequestPrivate {

public:
    GetApnsVoipChannelRequestPrivate(const PinpointRequest::Action action,
                                   GetApnsVoipChannelRequest * const q);
    GetApnsVoipChannelRequestPrivate(const GetApnsVoipChannelRequestPrivate &other,
                                   GetApnsVoipChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApnsVoipChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
