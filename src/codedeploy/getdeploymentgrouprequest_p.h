// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTGROUPREQUEST_P_H
#define QTAWS_GETDEPLOYMENTGROUPREQUEST_P_H

#include "codedeployrequest_p.h"
#include "getdeploymentgrouprequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetDeploymentGroupRequest;

class GetDeploymentGroupRequestPrivate : public CodeDeployRequestPrivate {

public:
    GetDeploymentGroupRequestPrivate(const CodeDeployRequest::Action action,
                                   GetDeploymentGroupRequest * const q);
    GetDeploymentGroupRequestPrivate(const GetDeploymentGroupRequestPrivate &other,
                                   GetDeploymentGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeploymentGroupRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
