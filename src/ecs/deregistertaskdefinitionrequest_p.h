// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTASKDEFINITIONREQUEST_P_H
#define QTAWS_DEREGISTERTASKDEFINITIONREQUEST_P_H

#include "ecsrequest_p.h"
#include "deregistertaskdefinitionrequest.h"

namespace QtAws {
namespace Ecs {

class DeregisterTaskDefinitionRequest;

class DeregisterTaskDefinitionRequestPrivate : public EcsRequestPrivate {

public:
    DeregisterTaskDefinitionRequestPrivate(const EcsRequest::Action action,
                                   DeregisterTaskDefinitionRequest * const q);
    DeregisterTaskDefinitionRequestPrivate(const DeregisterTaskDefinitionRequestPrivate &other,
                                   DeregisterTaskDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterTaskDefinitionRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
