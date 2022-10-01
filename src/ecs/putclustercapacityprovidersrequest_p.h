// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCLUSTERCAPACITYPROVIDERSREQUEST_P_H
#define QTAWS_PUTCLUSTERCAPACITYPROVIDERSREQUEST_P_H

#include "ecsrequest_p.h"
#include "putclustercapacityprovidersrequest.h"

namespace QtAws {
namespace Ecs {

class PutClusterCapacityProvidersRequest;

class PutClusterCapacityProvidersRequestPrivate : public EcsRequestPrivate {

public:
    PutClusterCapacityProvidersRequestPrivate(const EcsRequest::Action action,
                                   PutClusterCapacityProvidersRequest * const q);
    PutClusterCapacityProvidersRequestPrivate(const PutClusterCapacityProvidersRequestPrivate &other,
                                   PutClusterCapacityProvidersRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutClusterCapacityProvidersRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
