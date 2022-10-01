// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSERVICEPIPELINEDEPLOYMENTRESPONSE_H
#define QTAWS_CANCELSERVICEPIPELINEDEPLOYMENTRESPONSE_H

#include "protonresponse.h"
#include "cancelservicepipelinedeploymentrequest.h"

namespace QtAws {
namespace Proton {

class CancelServicePipelineDeploymentResponsePrivate;

class QTAWSPROTON_EXPORT CancelServicePipelineDeploymentResponse : public ProtonResponse {
    Q_OBJECT

public:
    CancelServicePipelineDeploymentResponse(const CancelServicePipelineDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelServicePipelineDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelServicePipelineDeploymentResponse)
    Q_DISABLE_COPY(CancelServicePipelineDeploymentResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
