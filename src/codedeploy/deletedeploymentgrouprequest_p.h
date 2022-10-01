// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTGROUPREQUEST_P_H
#define QTAWS_DELETEDEPLOYMENTGROUPREQUEST_P_H

#include "codedeployrequest_p.h"
#include "deletedeploymentgrouprequest.h"

namespace QtAws {
namespace CodeDeploy {

class DeleteDeploymentGroupRequest;

class DeleteDeploymentGroupRequestPrivate : public CodeDeployRequestPrivate {

public:
    DeleteDeploymentGroupRequestPrivate(const CodeDeployRequest::Action action,
                                   DeleteDeploymentGroupRequest * const q);
    DeleteDeploymentGroupRequestPrivate(const DeleteDeploymentGroupRequestPrivate &other,
                                   DeleteDeploymentGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDeploymentGroupRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
