// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBULKDEPLOYMENTREQUEST_P_H
#define QTAWS_STARTBULKDEPLOYMENTREQUEST_P_H

#include "greengrassrequest_p.h"
#include "startbulkdeploymentrequest.h"

namespace QtAws {
namespace Greengrass {

class StartBulkDeploymentRequest;

class StartBulkDeploymentRequestPrivate : public GreengrassRequestPrivate {

public:
    StartBulkDeploymentRequestPrivate(const GreengrassRequest::Action action,
                                   StartBulkDeploymentRequest * const q);
    StartBulkDeploymentRequestPrivate(const StartBulkDeploymentRequestPrivate &other,
                                   StartBulkDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartBulkDeploymentRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
