// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEREQUEST_P_H
#define QTAWS_UPDATESERVICEREQUEST_P_H

#include "ecsrequest_p.h"
#include "updateservicerequest.h"

namespace QtAws {
namespace Ecs {

class UpdateServiceRequest;

class UpdateServiceRequestPrivate : public EcsRequestPrivate {

public:
    UpdateServiceRequestPrivate(const EcsRequest::Action action,
                                   UpdateServiceRequest * const q);
    UpdateServiceRequestPrivate(const UpdateServiceRequestPrivate &other,
                                   UpdateServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServiceRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
