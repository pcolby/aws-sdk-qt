// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTAINERAGENTREQUEST_P_H
#define QTAWS_UPDATECONTAINERAGENTREQUEST_P_H

#include "ecsrequest_p.h"
#include "updatecontaineragentrequest.h"

namespace QtAws {
namespace Ecs {

class UpdateContainerAgentRequest;

class UpdateContainerAgentRequestPrivate : public EcsRequestPrivate {

public:
    UpdateContainerAgentRequestPrivate(const EcsRequest::Action action,
                                   UpdateContainerAgentRequest * const q);
    UpdateContainerAgentRequestPrivate(const UpdateContainerAgentRequestPrivate &other,
                                   UpdateContainerAgentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContainerAgentRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
