// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDEPLOYMENTREQUEST_P_H
#define QTAWS_STARTDEPLOYMENTREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "startdeploymentrequest.h"

namespace QtAws {
namespace AppRunner {

class StartDeploymentRequest;

class StartDeploymentRequestPrivate : public AppRunnerRequestPrivate {

public:
    StartDeploymentRequestPrivate(const AppRunnerRequest::Action action,
                                   StartDeploymentRequest * const q);
    StartDeploymentRequestPrivate(const StartDeploymentRequestPrivate &other,
                                   StartDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDeploymentRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
