// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTREAMINGSESSIONREQUEST_P_H
#define QTAWS_STOPSTREAMINGSESSIONREQUEST_P_H

#include "nimblerequest_p.h"
#include "stopstreamingsessionrequest.h"

namespace QtAws {
namespace Nimble {

class StopStreamingSessionRequest;

class StopStreamingSessionRequestPrivate : public NimbleRequestPrivate {

public:
    StopStreamingSessionRequestPrivate(const NimbleRequest::Action action,
                                   StopStreamingSessionRequest * const q);
    StopStreamingSessionRequestPrivate(const StopStreamingSessionRequestPrivate &other,
                                   StopStreamingSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopStreamingSessionRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
