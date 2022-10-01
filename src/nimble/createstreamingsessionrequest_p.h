// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGSESSIONREQUEST_P_H
#define QTAWS_CREATESTREAMINGSESSIONREQUEST_P_H

#include "nimblerequest_p.h"
#include "createstreamingsessionrequest.h"

namespace QtAws {
namespace Nimble {

class CreateStreamingSessionRequest;

class CreateStreamingSessionRequestPrivate : public NimbleRequestPrivate {

public:
    CreateStreamingSessionRequestPrivate(const NimbleRequest::Action action,
                                   CreateStreamingSessionRequest * const q);
    CreateStreamingSessionRequestPrivate(const CreateStreamingSessionRequestPrivate &other,
                                   CreateStreamingSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStreamingSessionRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
