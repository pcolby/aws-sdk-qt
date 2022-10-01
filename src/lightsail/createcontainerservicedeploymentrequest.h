// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERSERVICEDEPLOYMENTREQUEST_H
#define QTAWS_CREATECONTAINERSERVICEDEPLOYMENTREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateContainerServiceDeploymentRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateContainerServiceDeploymentRequest : public LightsailRequest {

public:
    CreateContainerServiceDeploymentRequest(const CreateContainerServiceDeploymentRequest &other);
    CreateContainerServiceDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContainerServiceDeploymentRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
