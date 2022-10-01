// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPLAYSREQUEST_P_H
#define QTAWS_LISTREPLAYSREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "listreplaysrequest.h"

namespace QtAws {
namespace EventBridge {

class ListReplaysRequest;

class ListReplaysRequestPrivate : public EventBridgeRequestPrivate {

public:
    ListReplaysRequestPrivate(const EventBridgeRequest::Action action,
                                   ListReplaysRequest * const q);
    ListReplaysRequestPrivate(const ListReplaysRequestPrivate &other,
                                   ListReplaysRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListReplaysRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
