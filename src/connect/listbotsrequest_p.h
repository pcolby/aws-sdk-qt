// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTSREQUEST_P_H
#define QTAWS_LISTBOTSREQUEST_P_H

#include "connectrequest_p.h"
#include "listbotsrequest.h"

namespace QtAws {
namespace Connect {

class ListBotsRequest;

class ListBotsRequestPrivate : public ConnectRequestPrivate {

public:
    ListBotsRequestPrivate(const ConnectRequest::Action action,
                                   ListBotsRequest * const q);
    ListBotsRequestPrivate(const ListBotsRequestPrivate &other,
                                   ListBotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBotsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
