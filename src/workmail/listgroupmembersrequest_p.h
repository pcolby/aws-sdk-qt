// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPMEMBERSREQUEST_P_H
#define QTAWS_LISTGROUPMEMBERSREQUEST_P_H

#include "workmailrequest_p.h"
#include "listgroupmembersrequest.h"

namespace QtAws {
namespace WorkMail {

class ListGroupMembersRequest;

class ListGroupMembersRequestPrivate : public WorkMailRequestPrivate {

public:
    ListGroupMembersRequestPrivate(const WorkMailRequest::Action action,
                                   ListGroupMembersRequest * const q);
    ListGroupMembersRequestPrivate(const ListGroupMembersRequestPrivate &other,
                                   ListGroupMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGroupMembersRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
