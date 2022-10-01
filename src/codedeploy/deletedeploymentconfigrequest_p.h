// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTCONFIGREQUEST_P_H
#define QTAWS_DELETEDEPLOYMENTCONFIGREQUEST_P_H

#include "codedeployrequest_p.h"
#include "deletedeploymentconfigrequest.h"

namespace QtAws {
namespace CodeDeploy {

class DeleteDeploymentConfigRequest;

class DeleteDeploymentConfigRequestPrivate : public CodeDeployRequestPrivate {

public:
    DeleteDeploymentConfigRequestPrivate(const CodeDeployRequest::Action action,
                                   DeleteDeploymentConfigRequest * const q);
    DeleteDeploymentConfigRequestPrivate(const DeleteDeploymentConfigRequestPrivate &other,
                                   DeleteDeploymentConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDeploymentConfigRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
