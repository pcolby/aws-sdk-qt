// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUEQUICKCONNECTSREQUEST_P_H
#define QTAWS_LISTQUEUEQUICKCONNECTSREQUEST_P_H

#include "connectrequest_p.h"
#include "listqueuequickconnectsrequest.h"

namespace QtAws {
namespace Connect {

class ListQueueQuickConnectsRequest;

class ListQueueQuickConnectsRequestPrivate : public ConnectRequestPrivate {

public:
    ListQueueQuickConnectsRequestPrivate(const ConnectRequest::Action action,
                                   ListQueueQuickConnectsRequest * const q);
    ListQueueQuickConnectsRequestPrivate(const ListQueueQuickConnectsRequestPrivate &other,
                                   ListQueueQuickConnectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListQueueQuickConnectsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
