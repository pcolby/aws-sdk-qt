// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERSERVICEDEPLOYMENTRESPONSE_H
#define QTAWS_CREATECONTAINERSERVICEDEPLOYMENTRESPONSE_H

#include "lightsailresponse.h"
#include "createcontainerservicedeploymentrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateContainerServiceDeploymentResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateContainerServiceDeploymentResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateContainerServiceDeploymentResponse(const CreateContainerServiceDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateContainerServiceDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContainerServiceDeploymentResponse)
    Q_DISABLE_COPY(CreateContainerServiceDeploymentResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
