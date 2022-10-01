// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYRESOURCEDEPLOYMENTSTATUSCHANGERESPONSE_P_H
#define QTAWS_NOTIFYRESOURCEDEPLOYMENTSTATUSCHANGERESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class NotifyResourceDeploymentStatusChangeResponse;

class NotifyResourceDeploymentStatusChangeResponsePrivate : public ProtonResponsePrivate {

public:

    explicit NotifyResourceDeploymentStatusChangeResponsePrivate(NotifyResourceDeploymentStatusChangeResponse * const q);

    void parseNotifyResourceDeploymentStatusChangeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(NotifyResourceDeploymentStatusChangeResponse)
    Q_DISABLE_COPY(NotifyResourceDeploymentStatusChangeResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
