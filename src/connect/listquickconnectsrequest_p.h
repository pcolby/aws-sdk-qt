// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUICKCONNECTSREQUEST_P_H
#define QTAWS_LISTQUICKCONNECTSREQUEST_P_H

#include "connectrequest_p.h"
#include "listquickconnectsrequest.h"

namespace QtAws {
namespace Connect {

class ListQuickConnectsRequest;

class ListQuickConnectsRequestPrivate : public ConnectRequestPrivate {

public:
    ListQuickConnectsRequestPrivate(const ConnectRequest::Action action,
                                   ListQuickConnectsRequest * const q);
    ListQuickConnectsRequestPrivate(const ListQuickConnectsRequestPrivate &other,
                                   ListQuickConnectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListQuickConnectsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
