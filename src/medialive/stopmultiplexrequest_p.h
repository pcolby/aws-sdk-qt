// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMULTIPLEXREQUEST_P_H
#define QTAWS_STOPMULTIPLEXREQUEST_P_H

#include "medialiverequest_p.h"
#include "stopmultiplexrequest.h"

namespace QtAws {
namespace MediaLive {

class StopMultiplexRequest;

class StopMultiplexRequestPrivate : public MediaLiveRequestPrivate {

public:
    StopMultiplexRequestPrivate(const MediaLiveRequest::Action action,
                                   StopMultiplexRequest * const q);
    StopMultiplexRequestPrivate(const StopMultiplexRequestPrivate &other,
                                   StopMultiplexRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopMultiplexRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
