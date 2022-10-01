// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEPLOYMENTSTRATEGIESREQUEST_P_H
#define QTAWS_LISTDEPLOYMENTSTRATEGIESREQUEST_P_H

#include "appconfigrequest_p.h"
#include "listdeploymentstrategiesrequest.h"

namespace QtAws {
namespace AppConfig {

class ListDeploymentStrategiesRequest;

class ListDeploymentStrategiesRequestPrivate : public AppConfigRequestPrivate {

public:
    ListDeploymentStrategiesRequestPrivate(const AppConfigRequest::Action action,
                                   ListDeploymentStrategiesRequest * const q);
    ListDeploymentStrategiesRequestPrivate(const ListDeploymentStrategiesRequestPrivate &other,
                                   ListDeploymentStrategiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeploymentStrategiesRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
