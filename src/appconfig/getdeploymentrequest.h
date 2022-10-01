// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTREQUEST_H
#define QTAWS_GETDEPLOYMENTREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class GetDeploymentRequestPrivate;

class QTAWSAPPCONFIG_EXPORT GetDeploymentRequest : public AppConfigRequest {

public:
    GetDeploymentRequest(const GetDeploymentRequest &other);
    GetDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
