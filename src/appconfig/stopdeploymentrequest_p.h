// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDEPLOYMENTREQUEST_P_H
#define QTAWS_STOPDEPLOYMENTREQUEST_P_H

#include "appconfigrequest_p.h"
#include "stopdeploymentrequest.h"

namespace QtAws {
namespace AppConfig {

class StopDeploymentRequest;

class StopDeploymentRequestPrivate : public AppConfigRequestPrivate {

public:
    StopDeploymentRequestPrivate(const AppConfigRequest::Action action,
                                   StopDeploymentRequest * const q);
    StopDeploymentRequestPrivate(const StopDeploymentRequestPrivate &other,
                                   StopDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopDeploymentRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
