// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBULKDEPLOYMENTREQUEST_P_H
#define QTAWS_STOPBULKDEPLOYMENTREQUEST_P_H

#include "greengrassrequest_p.h"
#include "stopbulkdeploymentrequest.h"

namespace QtAws {
namespace Greengrass {

class StopBulkDeploymentRequest;

class StopBulkDeploymentRequestPrivate : public GreengrassRequestPrivate {

public:
    StopBulkDeploymentRequestPrivate(const GreengrassRequest::Action action,
                                   StopBulkDeploymentRequest * const q);
    StopBulkDeploymentRequestPrivate(const StopBulkDeploymentRequestPrivate &other,
                                   StopBulkDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopBulkDeploymentRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
