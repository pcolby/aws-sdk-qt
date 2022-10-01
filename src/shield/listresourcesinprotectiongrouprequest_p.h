// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESINPROTECTIONGROUPREQUEST_P_H
#define QTAWS_LISTRESOURCESINPROTECTIONGROUPREQUEST_P_H

#include "shieldrequest_p.h"
#include "listresourcesinprotectiongrouprequest.h"

namespace QtAws {
namespace Shield {

class ListResourcesInProtectionGroupRequest;

class ListResourcesInProtectionGroupRequestPrivate : public ShieldRequestPrivate {

public:
    ListResourcesInProtectionGroupRequestPrivate(const ShieldRequest::Action action,
                                   ListResourcesInProtectionGroupRequest * const q);
    ListResourcesInProtectionGroupRequestPrivate(const ListResourcesInProtectionGroupRequestPrivate &other,
                                   ListResourcesInProtectionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourcesInProtectionGroupRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
