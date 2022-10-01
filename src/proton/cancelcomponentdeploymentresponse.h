// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCOMPONENTDEPLOYMENTRESPONSE_H
#define QTAWS_CANCELCOMPONENTDEPLOYMENTRESPONSE_H

#include "protonresponse.h"
#include "cancelcomponentdeploymentrequest.h"

namespace QtAws {
namespace Proton {

class CancelComponentDeploymentResponsePrivate;

class QTAWSPROTON_EXPORT CancelComponentDeploymentResponse : public ProtonResponse {
    Q_OBJECT

public:
    CancelComponentDeploymentResponse(const CancelComponentDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelComponentDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelComponentDeploymentResponse)
    Q_DISABLE_COPY(CancelComponentDeploymentResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
