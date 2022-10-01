// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERCONTAINERINSTANCEREQUEST_P_H
#define QTAWS_DEREGISTERCONTAINERINSTANCEREQUEST_P_H

#include "ecsrequest_p.h"
#include "deregistercontainerinstancerequest.h"

namespace QtAws {
namespace Ecs {

class DeregisterContainerInstanceRequest;

class DeregisterContainerInstanceRequestPrivate : public EcsRequestPrivate {

public:
    DeregisterContainerInstanceRequestPrivate(const EcsRequest::Action action,
                                   DeregisterContainerInstanceRequest * const q);
    DeregisterContainerInstanceRequestPrivate(const DeregisterContainerInstanceRequestPrivate &other,
                                   DeregisterContainerInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterContainerInstanceRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
