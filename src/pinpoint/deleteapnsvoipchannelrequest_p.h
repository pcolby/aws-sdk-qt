// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPNSVOIPCHANNELREQUEST_P_H
#define QTAWS_DELETEAPNSVOIPCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deleteapnsvoipchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteApnsVoipChannelRequest;

class DeleteApnsVoipChannelRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteApnsVoipChannelRequestPrivate(const PinpointRequest::Action action,
                                   DeleteApnsVoipChannelRequest * const q);
    DeleteApnsVoipChannelRequestPrivate(const DeleteApnsVoipChannelRequestPrivate &other,
                                   DeleteApnsVoipChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApnsVoipChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
