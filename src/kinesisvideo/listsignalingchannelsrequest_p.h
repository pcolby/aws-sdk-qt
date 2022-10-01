// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNALINGCHANNELSREQUEST_P_H
#define QTAWS_LISTSIGNALINGCHANNELSREQUEST_P_H

#include "kinesisvideorequest_p.h"
#include "listsignalingchannelsrequest.h"

namespace QtAws {
namespace KinesisVideo {

class ListSignalingChannelsRequest;

class ListSignalingChannelsRequestPrivate : public KinesisVideoRequestPrivate {

public:
    ListSignalingChannelsRequestPrivate(const KinesisVideoRequest::Action action,
                                   ListSignalingChannelsRequest * const q);
    ListSignalingChannelsRequestPrivate(const ListSignalingChannelsRequestPrivate &other,
                                   ListSignalingChannelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSignalingChannelsRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
