// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIGNALINGCHANNELREQUEST_P_H
#define QTAWS_CREATESIGNALINGCHANNELREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "createsignalingchannelrequest.h"

namespace QtAws {
namespace KinesisVideo {

class CreateSignalingChannelRequest;

class CreateSignalingChannelRequestPrivate : public KinesisVideoRequestPrivate {

public:
    CreateSignalingChannelRequestPrivate(const KinesisVideoRequest::Action action,
                                   CreateSignalingChannelRequest * const q);
    CreateSignalingChannelRequestPrivate(const CreateSignalingChannelRequestPrivate &other,
                                   CreateSignalingChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSignalingChannelRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
