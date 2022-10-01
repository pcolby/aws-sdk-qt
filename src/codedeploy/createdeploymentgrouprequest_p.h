// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTGROUPREQUEST_P_H
#define QTAWS_CREATEDEPLOYMENTGROUPREQUEST_P_H

#include "codedeployrequest_p.h"
#include "createdeploymentgrouprequest.h"

namespace QtAws {
namespace CodeDeploy {

class CreateDeploymentGroupRequest;

class CreateDeploymentGroupRequestPrivate : public CodeDeployRequestPrivate {

public:
    CreateDeploymentGroupRequestPrivate(const CodeDeployRequest::Action action,
                                   CreateDeploymentGroupRequest * const q);
    CreateDeploymentGroupRequestPrivate(const CreateDeploymentGroupRequestPrivate &other,
                                   CreateDeploymentGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDeploymentGroupRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
