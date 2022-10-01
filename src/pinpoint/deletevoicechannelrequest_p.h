// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECHANNELREQUEST_P_H
#define QTAWS_DELETEVOICECHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deletevoicechannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteVoiceChannelRequest;

class DeleteVoiceChannelRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteVoiceChannelRequestPrivate(const PinpointRequest::Action action,
                                   DeleteVoiceChannelRequest * const q);
    DeleteVoiceChannelRequestPrivate(const DeleteVoiceChannelRequestPrivate &other,
                                   DeleteVoiceChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
