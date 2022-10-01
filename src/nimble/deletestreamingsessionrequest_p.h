// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMINGSESSIONREQUEST_P_H
#define QTAWS_DELETESTREAMINGSESSIONREQUEST_P_H

#include "nimblerequest_p.h"
#include "deletestreamingsessionrequest.h"

namespace QtAws {
namespace Nimble {

class DeleteStreamingSessionRequest;

class DeleteStreamingSessionRequestPrivate : public NimbleRequestPrivate {

public:
    DeleteStreamingSessionRequestPrivate(const NimbleRequest::Action action,
                                   DeleteStreamingSessionRequest * const q);
    DeleteStreamingSessionRequestPrivate(const DeleteStreamingSessionRequestPrivate &other,
                                   DeleteStreamingSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStreamingSessionRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
