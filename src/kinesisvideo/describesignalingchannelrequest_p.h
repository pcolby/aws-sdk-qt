// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIGNALINGCHANNELREQUEST_P_H
#define QTAWS_DESCRIBESIGNALINGCHANNELREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "describesignalingchannelrequest.h"

namespace QtAws {
namespace KinesisVideo {

class DescribeSignalingChannelRequest;

class DescribeSignalingChannelRequestPrivate : public KinesisVideoRequestPrivate {

public:
    DescribeSignalingChannelRequestPrivate(const KinesisVideoRequest::Action action,
                                   DescribeSignalingChannelRequest * const q);
    DescribeSignalingChannelRequestPrivate(const DescribeSignalingChannelRequestPrivate &other,
                                   DescribeSignalingChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSignalingChannelRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
