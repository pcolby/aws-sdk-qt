// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYRESOURCEDEPLOYMENTSTATUSCHANGERESPONSE_H
#define QTAWS_NOTIFYRESOURCEDEPLOYMENTSTATUSCHANGERESPONSE_H

#include "protonresponse.h"
#include "notifyresourcedeploymentstatuschangerequest.h"

namespace QtAws {
namespace Proton {

class NotifyResourceDeploymentStatusChangeResponsePrivate;

class QTAWSPROTON_EXPORT NotifyResourceDeploymentStatusChangeResponse : public ProtonResponse {
    Q_OBJECT

public:
    NotifyResourceDeploymentStatusChangeResponse(const NotifyResourceDeploymentStatusChangeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const NotifyResourceDeploymentStatusChangeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NotifyResourceDeploymentStatusChangeResponse)
    Q_DISABLE_COPY(NotifyResourceDeploymentStatusChangeResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
