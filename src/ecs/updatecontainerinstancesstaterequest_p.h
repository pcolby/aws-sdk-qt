// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTAINERINSTANCESSTATEREQUEST_P_H
#define QTAWS_UPDATECONTAINERINSTANCESSTATEREQUEST_P_H

#include "ecsrequest_p.h"
#include "updatecontainerinstancesstaterequest.h"

namespace QtAws {
namespace Ecs {

class UpdateContainerInstancesStateRequest;

class UpdateContainerInstancesStateRequestPrivate : public EcsRequestPrivate {

public:
    UpdateContainerInstancesStateRequestPrivate(const EcsRequest::Action action,
                                   UpdateContainerInstancesStateRequest * const q);
    UpdateContainerInstancesStateRequestPrivate(const UpdateContainerInstancesStateRequestPrivate &other,
                                   UpdateContainerInstancesStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContainerInstancesStateRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
