// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONRESPONSE_H
#define QTAWS_GETMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONRESPONSE_H

#include "ssmresponse.h"
#include "getmaintenancewindowexecutiontaskinvocationrequest.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowExecutionTaskInvocationResponsePrivate;

class QTAWSSSM_EXPORT GetMaintenanceWindowExecutionTaskInvocationResponse : public SsmResponse {
    Q_OBJECT

public:
    GetMaintenanceWindowExecutionTaskInvocationResponse(const GetMaintenanceWindowExecutionTaskInvocationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMaintenanceWindowExecutionTaskInvocationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMaintenanceWindowExecutionTaskInvocationResponse)
    Q_DISABLE_COPY(GetMaintenanceWindowExecutionTaskInvocationResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
