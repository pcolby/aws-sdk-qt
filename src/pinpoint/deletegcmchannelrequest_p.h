// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGCMCHANNELREQUEST_P_H
#define QTAWS_DELETEGCMCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deletegcmchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteGcmChannelRequest;

class DeleteGcmChannelRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteGcmChannelRequestPrivate(const PinpointRequest::Action action,
                                   DeleteGcmChannelRequest * const q);
    DeleteGcmChannelRequestPrivate(const DeleteGcmChannelRequestPrivate &other,
                                   DeleteGcmChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGcmChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
