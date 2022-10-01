// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSERVICEINSTANCEDEPLOYMENTRESPONSE_H
#define QTAWS_CANCELSERVICEINSTANCEDEPLOYMENTRESPONSE_H

#include "protonresponse.h"
#include "cancelserviceinstancedeploymentrequest.h"

namespace QtAws {
namespace Proton {

class CancelServiceInstanceDeploymentResponsePrivate;

class QTAWSPROTON_EXPORT CancelServiceInstanceDeploymentResponse : public ProtonResponse {
    Q_OBJECT

public:
    CancelServiceInstanceDeploymentResponse(const CancelServiceInstanceDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelServiceInstanceDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelServiceInstanceDeploymentResponse)
    Q_DISABLE_COPY(CancelServiceInstanceDeploymentResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
