// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTSTRATEGYREQUEST_P_H
#define QTAWS_GETDEPLOYMENTSTRATEGYREQUEST_P_H

#include "appconfigrequest_p.h"
#include "getdeploymentstrategyrequest.h"

namespace QtAws {
namespace AppConfig {

class GetDeploymentStrategyRequest;

class GetDeploymentStrategyRequestPrivate : public AppConfigRequestPrivate {

public:
    GetDeploymentStrategyRequestPrivate(const AppConfigRequest::Action action,
                                   GetDeploymentStrategyRequest * const q);
    GetDeploymentStrategyRequestPrivate(const GetDeploymentStrategyRequestPrivate &other,
                                   GetDeploymentStrategyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeploymentStrategyRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
