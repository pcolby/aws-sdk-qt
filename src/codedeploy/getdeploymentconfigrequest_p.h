// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTCONFIGREQUEST_P_H
#define QTAWS_GETDEPLOYMENTCONFIGREQUEST_P_H

#include "codedeployrequest_p.h"
#include "getdeploymentconfigrequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetDeploymentConfigRequest;

class GetDeploymentConfigRequestPrivate : public CodeDeployRequestPrivate {

public:
    GetDeploymentConfigRequestPrivate(const CodeDeployRequest::Action action,
                                   GetDeploymentConfigRequest * const q);
    GetDeploymentConfigRequestPrivate(const GetDeploymentConfigRequestPrivate &other,
                                   GetDeploymentConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeploymentConfigRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
