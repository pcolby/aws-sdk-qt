// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTSTRATEGYREQUEST_H
#define QTAWS_GETDEPLOYMENTSTRATEGYREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class GetDeploymentStrategyRequestPrivate;

class QTAWSAPPCONFIG_EXPORT GetDeploymentStrategyRequest : public AppConfigRequest {

public:
    GetDeploymentStrategyRequest(const GetDeploymentStrategyRequest &other);
    GetDeploymentStrategyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentStrategyRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
