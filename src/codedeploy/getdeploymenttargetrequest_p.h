// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTTARGETREQUEST_P_H
#define QTAWS_GETDEPLOYMENTTARGETREQUEST_P_H

#include "codedeployrequest_p.h"
#include "getdeploymenttargetrequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetDeploymentTargetRequest;

class GetDeploymentTargetRequestPrivate : public CodeDeployRequestPrivate {

public:
    GetDeploymentTargetRequestPrivate(const CodeDeployRequest::Action action,
                                   GetDeploymentTargetRequest * const q);
    GetDeploymentTargetRequestPrivate(const GetDeploymentTargetRequestPrivate &other,
                                   GetDeploymentTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeploymentTargetRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
