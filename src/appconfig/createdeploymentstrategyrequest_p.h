// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTSTRATEGYREQUEST_P_H
#define QTAWS_CREATEDEPLOYMENTSTRATEGYREQUEST_P_H

#include "appconfigrequest_p.h"
#include "createdeploymentstrategyrequest.h"

namespace QtAws {
namespace AppConfig {

class CreateDeploymentStrategyRequest;

class CreateDeploymentStrategyRequestPrivate : public AppConfigRequestPrivate {

public:
    CreateDeploymentStrategyRequestPrivate(const AppConfigRequest::Action action,
                                   CreateDeploymentStrategyRequest * const q);
    CreateDeploymentStrategyRequestPrivate(const CreateDeploymentStrategyRequestPrivate &other,
                                   CreateDeploymentStrategyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDeploymentStrategyRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
