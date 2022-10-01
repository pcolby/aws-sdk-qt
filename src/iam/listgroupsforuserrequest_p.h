// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPSFORUSERREQUEST_P_H
#define QTAWS_LISTGROUPSFORUSERREQUEST_P_H

#include "iamrequest_p.h"
#include "listgroupsforuserrequest.h"

namespace QtAws {
namespace Iam {

class ListGroupsForUserRequest;

class ListGroupsForUserRequestPrivate : public IamRequestPrivate {

public:
    ListGroupsForUserRequestPrivate(const IamRequest::Action action,
                                   ListGroupsForUserRequest * const q);
    ListGroupsForUserRequestPrivate(const ListGroupsForUserRequestPrivate &other,
                                   ListGroupsForUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGroupsForUserRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
