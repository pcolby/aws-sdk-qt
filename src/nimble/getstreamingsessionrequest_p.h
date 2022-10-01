// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGSESSIONREQUEST_P_H
#define QTAWS_GETSTREAMINGSESSIONREQUEST_P_H

#include "nimblerequest_p.h"
#include "getstreamingsessionrequest.h"

namespace QtAws {
namespace Nimble {

class GetStreamingSessionRequest;

class GetStreamingSessionRequestPrivate : public NimbleRequestPrivate {

public:
    GetStreamingSessionRequestPrivate(const NimbleRequest::Action action,
                                   GetStreamingSessionRequest * const q);
    GetStreamingSessionRequestPrivate(const GetStreamingSessionRequestPrivate &other,
                                   GetStreamingSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStreamingSessionRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
