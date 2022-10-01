// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAPACITYPROVIDERREQUEST_P_H
#define QTAWS_CREATECAPACITYPROVIDERREQUEST_P_H

#include "ecsrequest_p.h"
#include "createcapacityproviderrequest.h"

namespace QtAws {
namespace Ecs {

class CreateCapacityProviderRequest;

class CreateCapacityProviderRequestPrivate : public EcsRequestPrivate {

public:
    CreateCapacityProviderRequestPrivate(const EcsRequest::Action action,
                                   CreateCapacityProviderRequest * const q);
    CreateCapacityProviderRequestPrivate(const CreateCapacityProviderRequestPrivate &other,
                                   CreateCapacityProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCapacityProviderRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
