// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMULTIPLEXREQUEST_P_H
#define QTAWS_UPDATEMULTIPLEXREQUEST_P_H

#include "medialiverequest_p.h"
#include "updatemultiplexrequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateMultiplexRequest;

class UpdateMultiplexRequestPrivate : public MediaLiveRequestPrivate {

public:
    UpdateMultiplexRequestPrivate(const MediaLiveRequest::Action action,
                                   UpdateMultiplexRequest * const q);
    UpdateMultiplexRequestPrivate(const UpdateMultiplexRequestPrivate &other,
                                   UpdateMultiplexRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMultiplexRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
