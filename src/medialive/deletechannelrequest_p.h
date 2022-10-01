// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELREQUEST_P_H
#define QTAWS_DELETECHANNELREQUEST_P_H

#include "medialiverequest_p.h"
#include "deletechannelrequest.h"

namespace QtAws {
namespace MediaLive {

class DeleteChannelRequest;

class DeleteChannelRequestPrivate : public MediaLiveRequestPrivate {

public:
    DeleteChannelRequestPrivate(const MediaLiveRequest::Action action,
                                   DeleteChannelRequest * const q);
    DeleteChannelRequestPrivate(const DeleteChannelRequestPrivate &other,
                                   DeleteChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteChannelRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
