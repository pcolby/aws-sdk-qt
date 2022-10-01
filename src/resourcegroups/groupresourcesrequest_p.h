// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GROUPRESOURCESREQUEST_P_H
#define QTAWS_GROUPRESOURCESREQUEST_P_H

#include "resourcegroupsrequest_p.h"
#include "groupresourcesrequest.h"

namespace QtAws {
namespace ResourceGroups {

class GroupResourcesRequest;

class GroupResourcesRequestPrivate : public ResourceGroupsRequestPrivate {

public:
    GroupResourcesRequestPrivate(const ResourceGroupsRequest::Action action,
                                   GroupResourcesRequest * const q);
    GroupResourcesRequestPrivate(const GroupResourcesRequestPrivate &other,
                                   GroupResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GroupResourcesRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
