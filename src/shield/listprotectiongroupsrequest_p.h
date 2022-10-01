// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROTECTIONGROUPSREQUEST_P_H
#define QTAWS_LISTPROTECTIONGROUPSREQUEST_P_H

#include "shieldrequest_p.h"
#include "listprotectiongroupsrequest.h"

namespace QtAws {
namespace Shield {

class ListProtectionGroupsRequest;

class ListProtectionGroupsRequestPrivate : public ShieldRequestPrivate {

public:
    ListProtectionGroupsRequestPrivate(const ShieldRequest::Action action,
                                   ListProtectionGroupsRequest * const q);
    ListProtectionGroupsRequestPrivate(const ListProtectionGroupsRequestPrivate &other,
                                   ListProtectionGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProtectionGroupsRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
