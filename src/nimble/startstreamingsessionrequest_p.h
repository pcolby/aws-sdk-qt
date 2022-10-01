// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTREAMINGSESSIONREQUEST_P_H
#define QTAWS_STARTSTREAMINGSESSIONREQUEST_P_H

#include "nimblerequest_p.h"
#include "startstreamingsessionrequest.h"

namespace QtAws {
namespace Nimble {

class StartStreamingSessionRequest;

class StartStreamingSessionRequestPrivate : public NimbleRequestPrivate {

public:
    StartStreamingSessionRequestPrivate(const NimbleRequest::Action action,
                                   StartStreamingSessionRequest * const q);
    StartStreamingSessionRequestPrivate(const StartStreamingSessionRequestPrivate &other,
                                   StartStreamingSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartStreamingSessionRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
