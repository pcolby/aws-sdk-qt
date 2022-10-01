// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELREQUEST_P_H
#define QTAWS_UPDATECHANNELREQUEST_P_H

#include "medialiverequest_p.h"
#include "updatechannelrequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateChannelRequest;

class UpdateChannelRequestPrivate : public MediaLiveRequestPrivate {

public:
    UpdateChannelRequestPrivate(const MediaLiveRequest::Action action,
                                   UpdateChannelRequest * const q);
    UpdateChannelRequestPrivate(const UpdateChannelRequestPrivate &other,
                                   UpdateChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateChannelRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
