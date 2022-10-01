// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCEUSERSREQUEST_P_H
#define QTAWS_LISTAPPINSTANCEUSERSREQUEST_P_H

#include "chimerequest_p.h"
#include "listappinstanceusersrequest.h"

namespace QtAws {
namespace Chime {

class ListAppInstanceUsersRequest;

class ListAppInstanceUsersRequestPrivate : public ChimeRequestPrivate {

public:
    ListAppInstanceUsersRequestPrivate(const ChimeRequest::Action action,
                                   ListAppInstanceUsersRequest * const q);
    ListAppInstanceUsersRequestPrivate(const ListAppInstanceUsersRequestPrivate &other,
                                   ListAppInstanceUsersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppInstanceUsersRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
