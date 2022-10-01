// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIGNALINGCHANNELREQUEST_P_H
#define QTAWS_DELETESIGNALINGCHANNELREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "deletesignalingchannelrequest.h"

namespace QtAws {
namespace KinesisVideo {

class DeleteSignalingChannelRequest;

class DeleteSignalingChannelRequestPrivate : public KinesisVideoRequestPrivate {

public:
    DeleteSignalingChannelRequestPrivate(const KinesisVideoRequest::Action action,
                                   DeleteSignalingChannelRequest * const q);
    DeleteSignalingChannelRequestPrivate(const DeleteSignalingChannelRequestPrivate &other,
                                   DeleteSignalingChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSignalingChannelRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
