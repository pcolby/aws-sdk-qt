// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEPLOYMENTGROUPREQUEST_P_H
#define QTAWS_UPDATEDEPLOYMENTGROUPREQUEST_P_H

#include "codedeployrequest_p.h"
#include "updatedeploymentgrouprequest.h"

namespace QtAws {
namespace CodeDeploy {

class UpdateDeploymentGroupRequest;

class UpdateDeploymentGroupRequestPrivate : public CodeDeployRequestPrivate {

public:
    UpdateDeploymentGroupRequestPrivate(const CodeDeployRequest::Action action,
                                   UpdateDeploymentGroupRequest * const q);
    UpdateDeploymentGroupRequestPrivate(const UpdateDeploymentGroupRequestPrivate &other,
                                   UpdateDeploymentGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDeploymentGroupRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
