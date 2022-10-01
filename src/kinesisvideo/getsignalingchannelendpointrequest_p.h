// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIGNALINGCHANNELENDPOINTREQUEST_P_H
#define QTAWS_GETSIGNALINGCHANNELENDPOINTREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "getsignalingchannelendpointrequest.h"

namespace QtAws {
namespace KinesisVideo {

class GetSignalingChannelEndpointRequest;

class GetSignalingChannelEndpointRequestPrivate : public KinesisVideoRequestPrivate {

public:
    GetSignalingChannelEndpointRequestPrivate(const KinesisVideoRequest::Action action,
                                   GetSignalingChannelEndpointRequest * const q);
    GetSignalingChannelEndpointRequestPrivate(const GetSignalingChannelEndpointRequestPrivate &other,
                                   GetSignalingChannelEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSignalingChannelEndpointRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
