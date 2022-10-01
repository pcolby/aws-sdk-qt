// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEPLOYMENTSTRATEGYREQUEST_P_H
#define QTAWS_UPDATEDEPLOYMENTSTRATEGYREQUEST_P_H

#include "appconfigrequest_p.h"
#include "updatedeploymentstrategyrequest.h"

namespace QtAws {
namespace AppConfig {

class UpdateDeploymentStrategyRequest;

class UpdateDeploymentStrategyRequestPrivate : public AppConfigRequestPrivate {

public:
    UpdateDeploymentStrategyRequestPrivate(const AppConfigRequest::Action action,
                                   UpdateDeploymentStrategyRequest * const q);
    UpdateDeploymentStrategyRequestPrivate(const UpdateDeploymentStrategyRequestPrivate &other,
                                   UpdateDeploymentStrategyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDeploymentStrategyRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
