// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELREADMARKERREQUEST_P_H
#define QTAWS_UPDATECHANNELREADMARKERREQUEST_P_H

#include "chimesdkmessagingrequest_p.h"
#include "updatechannelreadmarkerrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class UpdateChannelReadMarkerRequest;

class UpdateChannelReadMarkerRequestPrivate : public ChimeSdkMessagingRequestPrivate {

public:
    UpdateChannelReadMarkerRequestPrivate(const ChimeSdkMessagingRequest::Action action,
                                   UpdateChannelReadMarkerRequest * const q);
    UpdateChannelReadMarkerRequestPrivate(const UpdateChannelReadMarkerRequestPrivate &other,
                                   UpdateChannelReadMarkerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateChannelReadMarkerRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
