// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAINTENANCEWINDOWRESPONSE_H
#define QTAWS_UPDATEMAINTENANCEWINDOWRESPONSE_H

#include "ssmresponse.h"
#include "updatemaintenancewindowrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateMaintenanceWindowResponsePrivate;

class QTAWSSSM_EXPORT UpdateMaintenanceWindowResponse : public SsmResponse {
    Q_OBJECT

public:
    UpdateMaintenanceWindowResponse(const UpdateMaintenanceWindowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMaintenanceWindowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMaintenanceWindowResponse)
    Q_DISABLE_COPY(UpdateMaintenanceWindowResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
