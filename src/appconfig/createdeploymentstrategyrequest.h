// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTSTRATEGYREQUEST_H
#define QTAWS_CREATEDEPLOYMENTSTRATEGYREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class CreateDeploymentStrategyRequestPrivate;

class QTAWSAPPCONFIG_EXPORT CreateDeploymentStrategyRequest : public AppConfigRequest {

public:
    CreateDeploymentStrategyRequest(const CreateDeploymentStrategyRequest &other);
    CreateDeploymentStrategyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeploymentStrategyRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
