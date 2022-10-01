// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDEPLOYMENTREQUEST_H
#define QTAWS_STOPDEPLOYMENTREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class StopDeploymentRequestPrivate;

class QTAWSAPPCONFIG_EXPORT StopDeploymentRequest : public AppConfigRequest {

public:
    StopDeploymentRequest(const StopDeploymentRequest &other);
    StopDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDeploymentRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
