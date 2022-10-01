// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAPACITYPROVIDERREQUEST_P_H
#define QTAWS_UPDATECAPACITYPROVIDERREQUEST_P_H

#include "ecsrequest_p.h"
#include "updatecapacityproviderrequest.h"

namespace QtAws {
namespace Ecs {

class UpdateCapacityProviderRequest;

class UpdateCapacityProviderRequestPrivate : public EcsRequestPrivate {

public:
    UpdateCapacityProviderRequestPrivate(const EcsRequest::Action action,
                                   UpdateCapacityProviderRequest * const q);
    UpdateCapacityProviderRequestPrivate(const UpdateCapacityProviderRequestPrivate &other,
                                   UpdateCapacityProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCapacityProviderRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
