// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDEPLOYMENTREQUEST_P_H
#define QTAWS_CANCELDEPLOYMENTREQUEST_P_H

#include "greengrassv2request_p.h"
#include "canceldeploymentrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class CancelDeploymentRequest;

class CancelDeploymentRequestPrivate : public GreengrassV2RequestPrivate {

public:
    CancelDeploymentRequestPrivate(const GreengrassV2Request::Action action,
                                   CancelDeploymentRequest * const q);
    CancelDeploymentRequestPrivate(const CancelDeploymentRequestPrivate &other,
                                   CancelDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelDeploymentRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
