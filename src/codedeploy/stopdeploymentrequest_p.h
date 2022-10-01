// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDEPLOYMENTREQUEST_P_H
#define QTAWS_STOPDEPLOYMENTREQUEST_P_H

#include "codedeployrequest_p.h"
#include "stopdeploymentrequest.h"

namespace QtAws {
namespace CodeDeploy {

class StopDeploymentRequest;

class StopDeploymentRequestPrivate : public CodeDeployRequestPrivate {

public:
    StopDeploymentRequestPrivate(const CodeDeployRequest::Action action,
                                   StopDeploymentRequest * const q);
    StopDeploymentRequestPrivate(const StopDeploymentRequestPrivate &other,
                                   StopDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopDeploymentRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
