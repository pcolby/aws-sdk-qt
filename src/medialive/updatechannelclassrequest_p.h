// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELCLASSREQUEST_P_H
#define QTAWS_UPDATECHANNELCLASSREQUEST_P_H

#include "medialiverequest_p.h"
#include "updatechannelclassrequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateChannelClassRequest;

class UpdateChannelClassRequestPrivate : public MediaLiveRequestPrivate {

public:
    UpdateChannelClassRequestPrivate(const MediaLiveRequest::Action action,
                                   UpdateChannelClassRequest * const q);
    UpdateChannelClassRequestPrivate(const UpdateChannelClassRequestPrivate &other,
                                   UpdateChannelClassRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateChannelClassRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
