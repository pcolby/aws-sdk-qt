// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELENVIRONMENTDEPLOYMENTRESPONSE_H
#define QTAWS_CANCELENVIRONMENTDEPLOYMENTRESPONSE_H

#include "protonresponse.h"
#include "cancelenvironmentdeploymentrequest.h"

namespace QtAws {
namespace Proton {

class CancelEnvironmentDeploymentResponsePrivate;

class QTAWSPROTON_EXPORT CancelEnvironmentDeploymentResponse : public ProtonResponse {
    Q_OBJECT

public:
    CancelEnvironmentDeploymentResponse(const CancelEnvironmentDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelEnvironmentDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelEnvironmentDeploymentResponse)
    Q_DISABLE_COPY(CancelEnvironmentDeploymentResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
