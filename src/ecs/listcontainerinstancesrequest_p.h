// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTAINERINSTANCESREQUEST_P_H
#define QTAWS_LISTCONTAINERINSTANCESREQUEST_P_H

#include "ecsrequest_p.h"
#include "listcontainerinstancesrequest.h"

namespace QtAws {
namespace Ecs {

class ListContainerInstancesRequest;

class ListContainerInstancesRequestPrivate : public EcsRequestPrivate {

public:
    ListContainerInstancesRequestPrivate(const EcsRequest::Action action,
                                   ListContainerInstancesRequest * const q);
    ListContainerInstancesRequestPrivate(const ListContainerInstancesRequestPrivate &other,
                                   ListContainerInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListContainerInstancesRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
