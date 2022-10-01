// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCONTAINERINSTANCEREQUEST_P_H
#define QTAWS_REGISTERCONTAINERINSTANCEREQUEST_P_H

#include "ecsrequest_p.h"
#include "registercontainerinstancerequest.h"

namespace QtAws {
namespace Ecs {

class RegisterContainerInstanceRequest;

class RegisterContainerInstanceRequestPrivate : public EcsRequestPrivate {

public:
    RegisterContainerInstanceRequestPrivate(const EcsRequest::Action action,
                                   RegisterContainerInstanceRequest * const q);
    RegisterContainerInstanceRequestPrivate(const RegisterContainerInstanceRequestPrivate &other,
                                   RegisterContainerInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterContainerInstanceRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
