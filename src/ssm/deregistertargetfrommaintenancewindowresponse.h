// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTARGETFROMMAINTENANCEWINDOWRESPONSE_H
#define QTAWS_DEREGISTERTARGETFROMMAINTENANCEWINDOWRESPONSE_H

#include "ssmresponse.h"
#include "deregistertargetfrommaintenancewindowrequest.h"

namespace QtAws {
namespace Ssm {

class DeregisterTargetFromMaintenanceWindowResponsePrivate;

class QTAWSSSM_EXPORT DeregisterTargetFromMaintenanceWindowResponse : public SsmResponse {
    Q_OBJECT

public:
    DeregisterTargetFromMaintenanceWindowResponse(const DeregisterTargetFromMaintenanceWindowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterTargetFromMaintenanceWindowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterTargetFromMaintenanceWindowResponse)
    Q_DISABLE_COPY(DeregisterTargetFromMaintenanceWindowResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
