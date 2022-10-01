// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPSREQUEST_P_H
#define QTAWS_LISTGROUPSREQUEST_P_H

#include "iamrequest_p.h"
#include "listgroupsrequest.h"

namespace QtAws {
namespace Iam {

class ListGroupsRequest;

class ListGroupsRequestPrivate : public IamRequestPrivate {

public:
    ListGroupsRequestPrivate(const IamRequest::Action action,
                                   ListGroupsRequest * const q);
    ListGroupsRequestPrivate(const ListGroupsRequestPrivate &other,
                                   ListGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGroupsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
