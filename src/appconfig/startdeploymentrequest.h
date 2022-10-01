// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDEPLOYMENTREQUEST_H
#define QTAWS_STARTDEPLOYMENTREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class StartDeploymentRequestPrivate;

class QTAWSAPPCONFIG_EXPORT StartDeploymentRequest : public AppConfigRequest {

public:
    StartDeploymentRequest(const StartDeploymentRequest &other);
    StartDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDeploymentRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
