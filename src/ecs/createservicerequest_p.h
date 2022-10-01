// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICEREQUEST_P_H
#define QTAWS_CREATESERVICEREQUEST_P_H

#include "ecsrequest_p.h"
#include "createservicerequest.h"

namespace QtAws {
namespace Ecs {

class CreateServiceRequest;

class CreateServiceRequestPrivate : public EcsRequestPrivate {

public:
    CreateServiceRequestPrivate(const EcsRequest::Action action,
                                   CreateServiceRequest * const q);
    CreateServiceRequestPrivate(const CreateServiceRequestPrivate &other,
                                   CreateServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateServiceRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
