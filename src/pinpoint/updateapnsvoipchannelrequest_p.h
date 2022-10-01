// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPNSVOIPCHANNELREQUEST_P_H
#define QTAWS_UPDATEAPNSVOIPCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updateapnsvoipchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateApnsVoipChannelRequest;

class UpdateApnsVoipChannelRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateApnsVoipChannelRequestPrivate(const PinpointRequest::Action action,
                                   UpdateApnsVoipChannelRequest * const q);
    UpdateApnsVoipChannelRequestPrivate(const UpdateApnsVoipChannelRequestPrivate &other,
                                   UpdateApnsVoipChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApnsVoipChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
