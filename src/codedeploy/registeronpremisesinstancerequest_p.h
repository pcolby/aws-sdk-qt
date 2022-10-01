// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERONPREMISESINSTANCEREQUEST_P_H
#define QTAWS_REGISTERONPREMISESINSTANCEREQUEST_P_H

#include "codedeployrequest_p.h"
#include "registeronpremisesinstancerequest.h"

namespace QtAws {
namespace CodeDeploy {

class RegisterOnPremisesInstanceRequest;

class RegisterOnPremisesInstanceRequestPrivate : public CodeDeployRequestPrivate {

public:
    RegisterOnPremisesInstanceRequestPrivate(const CodeDeployRequest::Action action,
                                   RegisterOnPremisesInstanceRequest * const q);
    RegisterOnPremisesInstanceRequestPrivate(const RegisterOnPremisesInstanceRequestPrivate &other,
                                   RegisterOnPremisesInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterOnPremisesInstanceRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
