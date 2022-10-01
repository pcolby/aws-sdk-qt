// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECAPACITYPROVIDERREQUEST_P_H
#define QTAWS_DELETECAPACITYPROVIDERREQUEST_P_H

#include "ecsrequest_p.h"
#include "deletecapacityproviderrequest.h"

namespace QtAws {
namespace Ecs {

class DeleteCapacityProviderRequest;

class DeleteCapacityProviderRequestPrivate : public EcsRequestPrivate {

public:
    DeleteCapacityProviderRequestPrivate(const EcsRequest::Action action,
                                   DeleteCapacityProviderRequest * const q);
    DeleteCapacityProviderRequestPrivate(const DeleteCapacityProviderRequestPrivate &other,
                                   DeleteCapacityProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCapacityProviderRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
