// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKRESPONSE_H
#define QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKRESPONSE_H

#include "ssmresponse.h"
#include "getmaintenancewindowexecutiontaskrequest.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowExecutionTaskResponsePrivate;

class QTAWSSSM_EXPORT GetMaintenanceWindowExecutionTaskResponse : public SsmResponse {
    Q_OBJECT

public:
    GetMaintenanceWindowExecutionTaskResponse(const GetMaintenanceWindowExecutionTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMaintenanceWindowExecutionTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMaintenanceWindowExecutionTaskResponse)
    Q_DISABLE_COPY(GetMaintenanceWindowExecutionTaskResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
