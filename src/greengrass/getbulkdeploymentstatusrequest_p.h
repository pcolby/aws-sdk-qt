// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBULKDEPLOYMENTSTATUSREQUEST_P_H
#define QTAWS_GETBULKDEPLOYMENTSTATUSREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getbulkdeploymentstatusrequest.h"

namespace QtAws {
namespace Greengrass {

class GetBulkDeploymentStatusRequest;

class GetBulkDeploymentStatusRequestPrivate : public GreengrassRequestPrivate {

public:
    GetBulkDeploymentStatusRequestPrivate(const GreengrassRequest::Action action,
                                   GetBulkDeploymentStatusRequest * const q);
    GetBulkDeploymentStatusRequestPrivate(const GetBulkDeploymentStatusRequestPrivate &other,
                                   GetBulkDeploymentStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBulkDeploymentStatusRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
