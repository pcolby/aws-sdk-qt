// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROLESREQUEST_P_H
#define QTAWS_LISTROLESREQUEST_P_H

#include "iamrequest_p.h"
#include "listrolesrequest.h"

namespace QtAws {
namespace Iam {

class ListRolesRequest;

class ListRolesRequestPrivate : public IamRequestPrivate {

public:
    ListRolesRequestPrivate(const IamRequest::Action action,
                                   ListRolesRequest * const q);
    ListRolesRequestPrivate(const ListRolesRequestPrivate &other,
                                   ListRolesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRolesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
