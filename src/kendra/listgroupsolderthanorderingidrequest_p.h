// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPSOLDERTHANORDERINGIDREQUEST_P_H
#define QTAWS_LISTGROUPSOLDERTHANORDERINGIDREQUEST_P_H

#include "kendrarequest_p.h"
#include "listgroupsolderthanorderingidrequest.h"

namespace QtAws {
namespace Kendra {

class ListGroupsOlderThanOrderingIdRequest;

class ListGroupsOlderThanOrderingIdRequestPrivate : public KendraRequestPrivate {

public:
    ListGroupsOlderThanOrderingIdRequestPrivate(const KendraRequest::Action action,
                                   ListGroupsOlderThanOrderingIdRequest * const q);
    ListGroupsOlderThanOrderingIdRequestPrivate(const ListGroupsOlderThanOrderingIdRequestPrivate &other,
                                   ListGroupsOlderThanOrderingIdRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGroupsOlderThanOrderingIdRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
