// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGCMCHANNELREQUEST_P_H
#define QTAWS_UPDATEGCMCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updategcmchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateGcmChannelRequest;

class UpdateGcmChannelRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateGcmChannelRequestPrivate(const PinpointRequest::Action action,
                                   UpdateGcmChannelRequest * const q);
    UpdateGcmChannelRequestPrivate(const UpdateGcmChannelRequestPrivate &other,
                                   UpdateGcmChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGcmChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
