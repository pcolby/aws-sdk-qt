// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPIDESTINATIONSREQUEST_P_H
#define QTAWS_LISTAPIDESTINATIONSREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "listapidestinationsrequest.h"

namespace QtAws {
namespace EventBridge {

class ListApiDestinationsRequest;

class ListApiDestinationsRequestPrivate : public EventBridgeRequestPrivate {

public:
    ListApiDestinationsRequestPrivate(const EventBridgeRequest::Action action,
                                   ListApiDestinationsRequest * const q);
    ListApiDestinationsRequestPrivate(const ListApiDestinationsRequestPrivate &other,
                                   ListApiDestinationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApiDestinationsRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
