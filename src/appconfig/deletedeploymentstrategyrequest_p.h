// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTSTRATEGYREQUEST_P_H
#define QTAWS_DELETEDEPLOYMENTSTRATEGYREQUEST_P_H

#include "appconfigrequest_p.h"
#include "deletedeploymentstrategyrequest.h"

namespace QtAws {
namespace AppConfig {

class DeleteDeploymentStrategyRequest;

class DeleteDeploymentStrategyRequestPrivate : public AppConfigRequestPrivate {

public:
    DeleteDeploymentStrategyRequestPrivate(const AppConfigRequest::Action action,
                                   DeleteDeploymentStrategyRequest * const q);
    DeleteDeploymentStrategyRequestPrivate(const DeleteDeploymentStrategyRequestPrivate &other,
                                   DeleteDeploymentStrategyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDeploymentStrategyRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
