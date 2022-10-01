// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMULTIPLEXREQUEST_P_H
#define QTAWS_DELETEMULTIPLEXREQUEST_P_H

#include "medialiverequest_p.h"
#include "deletemultiplexrequest.h"

namespace QtAws {
namespace MediaLive {

class DeleteMultiplexRequest;

class DeleteMultiplexRequestPrivate : public MediaLiveRequestPrivate {

public:
    DeleteMultiplexRequestPrivate(const MediaLiveRequest::Action action,
                                   DeleteMultiplexRequest * const q);
    DeleteMultiplexRequestPrivate(const DeleteMultiplexRequestPrivate &other,
                                   DeleteMultiplexRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMultiplexRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
