// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPSREQUEST_P_H
#define QTAWS_LISTGROUPSREQUEST_P_H

#include "resourcegroupsrequest_p.h"
#include "listgroupsrequest.h"

namespace QtAws {
namespace ResourceGroups {

class ListGroupsRequest;

class ListGroupsRequestPrivate : public ResourceGroupsRequestPrivate {

public:
    ListGroupsRequestPrivate(const ResourceGroupsRequest::Action action,
                                   ListGroupsRequest * const q);
    ListGroupsRequestPrivate(const ListGroupsRequestPrivate &other,
                                   ListGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGroupsRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
