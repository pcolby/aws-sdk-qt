// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELREQUEST_P_H
#define QTAWS_CREATECHANNELREQUEST_P_H

#include "medialiverequest_p.h"
#include "createchannelrequest.h"

namespace QtAws {
namespace MediaLive {

class CreateChannelRequest;

class CreateChannelRequestPrivate : public MediaLiveRequestPrivate {

public:
    CreateChannelRequestPrivate(const MediaLiveRequest::Action action,
                                   CreateChannelRequest * const q);
    CreateChannelRequestPrivate(const CreateChannelRequestPrivate &other,
                                   CreateChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateChannelRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
