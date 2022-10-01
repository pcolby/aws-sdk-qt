// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAINTENANCEWINDOWTARGETRESPONSE_H
#define QTAWS_UPDATEMAINTENANCEWINDOWTARGETRESPONSE_H

#include "ssmresponse.h"
#include "updatemaintenancewindowtargetrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateMaintenanceWindowTargetResponsePrivate;

class QTAWSSSM_EXPORT UpdateMaintenanceWindowTargetResponse : public SsmResponse {
    Q_OBJECT

public:
    UpdateMaintenanceWindowTargetResponse(const UpdateMaintenanceWindowTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMaintenanceWindowTargetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMaintenanceWindowTargetResponse)
    Q_DISABLE_COPY(UpdateMaintenanceWindowTargetResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
