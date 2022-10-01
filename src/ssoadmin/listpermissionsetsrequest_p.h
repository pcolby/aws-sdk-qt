// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSETSREQUEST_P_H
#define QTAWS_LISTPERMISSIONSETSREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "listpermissionsetsrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListPermissionSetsRequest;

class ListPermissionSetsRequestPrivate : public SsoAdminRequestPrivate {

public:
    ListPermissionSetsRequestPrivate(const SsoAdminRequest::Action action,
                                   ListPermissionSetsRequest * const q);
    ListPermissionSetsRequestPrivate(const ListPermissionSetsRequestPrivate &other,
                                   ListPermissionSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPermissionSetsRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
