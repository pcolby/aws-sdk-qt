// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTINSTANCEREQUEST_P_H
#define QTAWS_GETDEPLOYMENTINSTANCEREQUEST_P_H

#include "codedeployrequest_p.h"
#include "getdeploymentinstancerequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetDeploymentInstanceRequest;

class GetDeploymentInstanceRequestPrivate : public CodeDeployRequestPrivate {

public:
    GetDeploymentInstanceRequestPrivate(const CodeDeployRequest::Action action,
                                   GetDeploymentInstanceRequest * const q);
    GetDeploymentInstanceRequestPrivate(const GetDeploymentInstanceRequestPrivate &other,
                                   GetDeploymentInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeploymentInstanceRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
