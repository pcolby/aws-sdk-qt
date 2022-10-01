// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMULTIPLEXREQUEST_P_H
#define QTAWS_STARTMULTIPLEXREQUEST_P_H

#include "medialiverequest_p.h"
#include "startmultiplexrequest.h"

namespace QtAws {
namespace MediaLive {

class StartMultiplexRequest;

class StartMultiplexRequestPrivate : public MediaLiveRequestPrivate {

public:
    StartMultiplexRequestPrivate(const MediaLiveRequest::Action action,
                                   StartMultiplexRequest * const q);
    StartMultiplexRequestPrivate(const StartMultiplexRequestPrivate &other,
                                   StartMultiplexRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartMultiplexRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
