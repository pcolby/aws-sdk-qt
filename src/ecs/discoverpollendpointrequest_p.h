// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCOVERPOLLENDPOINTREQUEST_P_H
#define QTAWS_DISCOVERPOLLENDPOINTREQUEST_P_H

#include "ecsrequest_p.h"
#include "discoverpollendpointrequest.h"

namespace QtAws {
namespace Ecs {

class DiscoverPollEndpointRequest;

class DiscoverPollEndpointRequestPrivate : public EcsRequestPrivate {

public:
    DiscoverPollEndpointRequestPrivate(const EcsRequest::Action action,
                                   DiscoverPollEndpointRequest * const q);
    DiscoverPollEndpointRequestPrivate(const DiscoverPollEndpointRequestPrivate &other,
                                   DiscoverPollEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DiscoverPollEndpointRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
