// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTASKFROMMAINTENANCEWINDOWRESPONSE_H
#define QTAWS_DEREGISTERTASKFROMMAINTENANCEWINDOWRESPONSE_H

#include "ssmresponse.h"
#include "deregistertaskfrommaintenancewindowrequest.h"

namespace QtAws {
namespace Ssm {

class DeregisterTaskFromMaintenanceWindowResponsePrivate;

class QTAWSSSM_EXPORT DeregisterTaskFromMaintenanceWindowResponse : public SsmResponse {
    Q_OBJECT

public:
    DeregisterTaskFromMaintenanceWindowResponse(const DeregisterTaskFromMaintenanceWindowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterTaskFromMaintenanceWindowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterTaskFromMaintenanceWindowResponse)
    Q_DISABLE_COPY(DeregisterTaskFromMaintenanceWindowResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
