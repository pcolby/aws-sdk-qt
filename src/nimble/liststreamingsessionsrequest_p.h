// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMINGSESSIONSREQUEST_P_H
#define QTAWS_LISTSTREAMINGSESSIONSREQUEST_P_H

#include "nimblerequest_p.h"
#include "liststreamingsessionsrequest.h"

namespace QtAws {
namespace Nimble {

class ListStreamingSessionsRequest;

class ListStreamingSessionsRequestPrivate : public NimbleRequestPrivate {

public:
    ListStreamingSessionsRequestPrivate(const NimbleRequest::Action action,
                                   ListStreamingSessionsRequest * const q);
    ListStreamingSessionsRequestPrivate(const ListStreamingSessionsRequestPrivate &other,
                                   ListStreamingSessionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStreamingSessionsRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
