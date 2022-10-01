// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAINTENANCEWINDOWTASKRESPONSE_H
#define QTAWS_UPDATEMAINTENANCEWINDOWTASKRESPONSE_H

#include "ssmresponse.h"
#include "updatemaintenancewindowtaskrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateMaintenanceWindowTaskResponsePrivate;

class QTAWSSSM_EXPORT UpdateMaintenanceWindowTaskResponse : public SsmResponse {
    Q_OBJECT

public:
    UpdateMaintenanceWindowTaskResponse(const UpdateMaintenanceWindowTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMaintenanceWindowTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMaintenanceWindowTaskResponse)
    Q_DISABLE_COPY(UpdateMaintenanceWindowTaskResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
