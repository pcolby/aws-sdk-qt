// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUESREQUEST_P_H
#define QTAWS_LISTQUEUESREQUEST_P_H

#include "connectrequest_p.h"
#include "listqueuesrequest.h"

namespace QtAws {
namespace Connect {

class ListQueuesRequest;

class ListQueuesRequestPrivate : public ConnectRequestPrivate {

public:
    ListQueuesRequestPrivate(const ConnectRequest::Action action,
                                   ListQueuesRequest * const q);
    ListQueuesRequestPrivate(const ListQueuesRequestPrivate &other,
                                   ListQueuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListQueuesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
