// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEPLOYMENTSTRATEGYREQUEST_H
#define QTAWS_UPDATEDEPLOYMENTSTRATEGYREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class UpdateDeploymentStrategyRequestPrivate;

class QTAWSAPPCONFIG_EXPORT UpdateDeploymentStrategyRequest : public AppConfigRequest {

public:
    UpdateDeploymentStrategyRequest(const UpdateDeploymentStrategyRequest &other);
    UpdateDeploymentStrategyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeploymentStrategyRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
