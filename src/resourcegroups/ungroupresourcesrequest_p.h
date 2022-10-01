// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNGROUPRESOURCESREQUEST_P_H
#define QTAWS_UNGROUPRESOURCESREQUEST_P_H

#include "resourcegroupsrequest_p.h"
#include "ungroupresourcesrequest.h"

namespace QtAws {
namespace ResourceGroups {

class UngroupResourcesRequest;

class UngroupResourcesRequestPrivate : public ResourceGroupsRequestPrivate {

public:
    UngroupResourcesRequestPrivate(const ResourceGroupsRequest::Action action,
                                   UngroupResourcesRequest * const q);
    UngroupResourcesRequestPrivate(const UngroupResourcesRequestPrivate &other,
                                   UngroupResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UngroupResourcesRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
