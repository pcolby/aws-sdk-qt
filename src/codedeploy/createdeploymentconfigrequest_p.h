// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTCONFIGREQUEST_P_H
#define QTAWS_CREATEDEPLOYMENTCONFIGREQUEST_P_H

#include "codedeployrequest_p.h"
#include "createdeploymentconfigrequest.h"

namespace QtAws {
namespace CodeDeploy {

class CreateDeploymentConfigRequest;

class CreateDeploymentConfigRequestPrivate : public CodeDeployRequestPrivate {

public:
    CreateDeploymentConfigRequestPrivate(const CodeDeployRequest::Action action,
                                   CreateDeploymentConfigRequest * const q);
    CreateDeploymentConfigRequestPrivate(const CreateDeploymentConfigRequestPrivate &other,
                                   CreateDeploymentConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDeploymentConfigRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
