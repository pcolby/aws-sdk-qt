// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEMBERSREQUEST_P_H
#define QTAWS_LISTMEMBERSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "listmembersrequest.h"

namespace QtAws {
namespace GuardDuty {

class ListMembersRequest;

class ListMembersRequestPrivate : public GuardDutyRequestPrivate {

public:
    ListMembersRequestPrivate(const GuardDutyRequest::Action action,
                                   ListMembersRequest * const q);
    ListMembersRequestPrivate(const ListMembersRequestPrivate &other,
                                   ListMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMembersRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
