// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTREQUEST_P_H
#define QTAWS_CREATEDEPLOYMENTREQUEST_P_H

#include "amplifyrequest_p.h"
#include "createdeploymentrequest.h"

namespace QtAws {
namespace Amplify {

class CreateDeploymentRequest;

class CreateDeploymentRequestPrivate : public AmplifyRequestPrivate {

public:
    CreateDeploymentRequestPrivate(const AmplifyRequest::Action action,
                                   CreateDeploymentRequest * const q);
    CreateDeploymentRequestPrivate(const CreateDeploymentRequestPrivate &other,
                                   CreateDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDeploymentRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
