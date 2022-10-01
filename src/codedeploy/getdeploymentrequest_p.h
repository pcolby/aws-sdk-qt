// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTREQUEST_P_H
#define QTAWS_GETDEPLOYMENTREQUEST_P_H

#include "codedeployrequest_p.h"
#include "getdeploymentrequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetDeploymentRequest;

class GetDeploymentRequestPrivate : public CodeDeployRequestPrivate {

public:
    GetDeploymentRequestPrivate(const CodeDeployRequest::Action action,
                                   GetDeploymentRequest * const q);
    GetDeploymentRequestPrivate(const GetDeploymentRequestPrivate &other,
                                   GetDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeploymentRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
