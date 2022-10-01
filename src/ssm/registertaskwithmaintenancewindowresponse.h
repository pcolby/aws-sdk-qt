// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTASKWITHMAINTENANCEWINDOWRESPONSE_H
#define QTAWS_REGISTERTASKWITHMAINTENANCEWINDOWRESPONSE_H

#include "ssmresponse.h"
#include "registertaskwithmaintenancewindowrequest.h"

namespace QtAws {
namespace Ssm {

class RegisterTaskWithMaintenanceWindowResponsePrivate;

class QTAWSSSM_EXPORT RegisterTaskWithMaintenanceWindowResponse : public SsmResponse {
    Q_OBJECT

public:
    RegisterTaskWithMaintenanceWindowResponse(const RegisterTaskWithMaintenanceWindowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterTaskWithMaintenanceWindowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterTaskWithMaintenanceWindowResponse)
    Q_DISABLE_COPY(RegisterTaskWithMaintenanceWindowResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
