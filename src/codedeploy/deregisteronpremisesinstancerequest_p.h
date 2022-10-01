// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERONPREMISESINSTANCEREQUEST_P_H
#define QTAWS_DEREGISTERONPREMISESINSTANCEREQUEST_P_H

#include "codedeployrequest_p.h"
#include "deregisteronpremisesinstancerequest.h"

namespace QtAws {
namespace CodeDeploy {

class DeregisterOnPremisesInstanceRequest;

class DeregisterOnPremisesInstanceRequestPrivate : public CodeDeployRequestPrivate {

public:
    DeregisterOnPremisesInstanceRequestPrivate(const CodeDeployRequest::Action action,
                                   DeregisterOnPremisesInstanceRequest * const q);
    DeregisterOnPremisesInstanceRequestPrivate(const DeregisterOnPremisesInstanceRequestPrivate &other,
                                   DeregisterOnPremisesInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterOnPremisesInstanceRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
