// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGSESSIONSTREAMREQUEST_P_H
#define QTAWS_GETSTREAMINGSESSIONSTREAMREQUEST_P_H

#include "nimblerequest_p.h"
#include "getstreamingsessionstreamrequest.h"

namespace QtAws {
namespace Nimble {

class GetStreamingSessionStreamRequest;

class GetStreamingSessionStreamRequestPrivate : public NimbleRequestPrivate {

public:
    GetStreamingSessionStreamRequestPrivate(const NimbleRequest::Action action,
                                   GetStreamingSessionStreamRequest * const q);
    GetStreamingSessionStreamRequestPrivate(const GetStreamingSessionStreamRequestPrivate &other,
                                   GetStreamingSessionStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStreamingSessionStreamRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
