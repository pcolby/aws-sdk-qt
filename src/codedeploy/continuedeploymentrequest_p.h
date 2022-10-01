// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONTINUEDEPLOYMENTREQUEST_P_H
#define QTAWS_CONTINUEDEPLOYMENTREQUEST_P_H

#include "codedeployrequest_p.h"
#include "continuedeploymentrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ContinueDeploymentRequest;

class ContinueDeploymentRequestPrivate : public CodeDeployRequestPrivate {

public:
    ContinueDeploymentRequestPrivate(const CodeDeployRequest::Action action,
                                   ContinueDeploymentRequest * const q);
    ContinueDeploymentRequestPrivate(const ContinueDeploymentRequestPrivate &other,
                                   ContinueDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(ContinueDeploymentRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
