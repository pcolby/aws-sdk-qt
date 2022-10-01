// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGSESSIONSTREAMREQUEST_P_H
#define QTAWS_CREATESTREAMINGSESSIONSTREAMREQUEST_P_H

#include "nimblerequest_p.h"
#include "createstreamingsessionstreamrequest.h"

namespace QtAws {
namespace Nimble {

class CreateStreamingSessionStreamRequest;

class CreateStreamingSessionStreamRequestPrivate : public NimbleRequestPrivate {

public:
    CreateStreamingSessionStreamRequestPrivate(const NimbleRequest::Action action,
                                   CreateStreamingSessionStreamRequest * const q);
    CreateStreamingSessionStreamRequestPrivate(const CreateStreamingSessionStreamRequestPrivate &other,
                                   CreateStreamingSessionStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStreamingSessionStreamRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
