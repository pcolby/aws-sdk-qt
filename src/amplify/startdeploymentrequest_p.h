// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDEPLOYMENTREQUEST_P_H
#define QTAWS_STARTDEPLOYMENTREQUEST_P_H

#include "amplifyrequest_p.h"
#include "startdeploymentrequest.h"

namespace QtAws {
namespace Amplify {

class StartDeploymentRequest;

class StartDeploymentRequestPrivate : public AmplifyRequestPrivate {

public:
    StartDeploymentRequestPrivate(const AmplifyRequest::Action action,
                                   StartDeploymentRequest * const q);
    StartDeploymentRequestPrivate(const StartDeploymentRequestPrivate &other,
                                   StartDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDeploymentRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
