// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTASKDEFINITIONREQUEST_P_H
#define QTAWS_REGISTERTASKDEFINITIONREQUEST_P_H

#include "ecsrequest_p.h"
#include "registertaskdefinitionrequest.h"

namespace QtAws {
namespace Ecs {

class RegisterTaskDefinitionRequest;

class RegisterTaskDefinitionRequestPrivate : public EcsRequestPrivate {

public:
    RegisterTaskDefinitionRequestPrivate(const EcsRequest::Action action,
                                   RegisterTaskDefinitionRequest * const q);
    RegisterTaskDefinitionRequestPrivate(const RegisterTaskDefinitionRequestPrivate &other,
                                   RegisterTaskDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterTaskDefinitionRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
