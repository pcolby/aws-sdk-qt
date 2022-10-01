// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONVERSIONSREQUEST_P_H
#define QTAWS_LISTPERMISSIONVERSIONSREQUEST_P_H

#include "ramrequest_p.h"
#include "listpermissionversionsrequest.h"

namespace QtAws {
namespace Ram {

class ListPermissionVersionsRequest;

class ListPermissionVersionsRequestPrivate : public RamRequestPrivate {

public:
    ListPermissionVersionsRequestPrivate(const RamRequest::Action action,
                                   ListPermissionVersionsRequest * const q);
    ListPermissionVersionsRequestPrivate(const ListPermissionVersionsRequestPrivate &other,
                                   ListPermissionVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPermissionVersionsRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
