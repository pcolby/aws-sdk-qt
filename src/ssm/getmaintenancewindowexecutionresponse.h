// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWEXECUTIONRESPONSE_H
#define QTAWS_GETMAINTENANCEWINDOWEXECUTIONRESPONSE_H

#include "ssmresponse.h"
#include "getmaintenancewindowexecutionrequest.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowExecutionResponsePrivate;

class QTAWSSSM_EXPORT GetMaintenanceWindowExecutionResponse : public SsmResponse {
    Q_OBJECT

public:
    GetMaintenanceWindowExecutionResponse(const GetMaintenanceWindowExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMaintenanceWindowExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMaintenanceWindowExecutionResponse)
    Q_DISABLE_COPY(GetMaintenanceWindowExecutionResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
