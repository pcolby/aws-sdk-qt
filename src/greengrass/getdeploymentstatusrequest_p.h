// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTSTATUSREQUEST_P_H
#define QTAWS_GETDEPLOYMENTSTATUSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getdeploymentstatusrequest.h"

namespace QtAws {
namespace Greengrass {

class GetDeploymentStatusRequest;

class GetDeploymentStatusRequestPrivate : public GreengrassRequestPrivate {

public:
    GetDeploymentStatusRequestPrivate(const GreengrassRequest::Action action,
                                   GetDeploymentStatusRequest * const q);
    GetDeploymentStatusRequestPrivate(const GetDeploymentStatusRequestPrivate &other,
                                   GetDeploymentStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeploymentStatusRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
