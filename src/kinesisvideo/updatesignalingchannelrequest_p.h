// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIGNALINGCHANNELREQUEST_P_H
#define QTAWS_UPDATESIGNALINGCHANNELREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "updatesignalingchannelrequest.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateSignalingChannelRequest;

class UpdateSignalingChannelRequestPrivate : public KinesisVideoRequestPrivate {

public:
    UpdateSignalingChannelRequestPrivate(const KinesisVideoRequest::Action action,
                                   UpdateSignalingChannelRequest * const q);
    UpdateSignalingChannelRequestPrivate(const UpdateSignalingChannelRequestPrivate &other,
                                   UpdateSignalingChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSignalingChannelRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
