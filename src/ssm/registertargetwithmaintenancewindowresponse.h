// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTARGETWITHMAINTENANCEWINDOWRESPONSE_H
#define QTAWS_REGISTERTARGETWITHMAINTENANCEWINDOWRESPONSE_H

#include "ssmresponse.h"
#include "registertargetwithmaintenancewindowrequest.h"

namespace QtAws {
namespace Ssm {

class RegisterTargetWithMaintenanceWindowResponsePrivate;

class QTAWSSSM_EXPORT RegisterTargetWithMaintenanceWindowResponse : public SsmResponse {
    Q_OBJECT

public:
    RegisterTargetWithMaintenanceWindowResponse(const RegisterTargetWithMaintenanceWindowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterTargetWithMaintenanceWindowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterTargetWithMaintenanceWindowResponse)
    Q_DISABLE_COPY(RegisterTargetWithMaintenanceWindowResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
