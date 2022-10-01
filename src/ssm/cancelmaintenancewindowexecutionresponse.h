// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELMAINTENANCEWINDOWEXECUTIONRESPONSE_H
#define QTAWS_CANCELMAINTENANCEWINDOWEXECUTIONRESPONSE_H

#include "ssmresponse.h"
#include "cancelmaintenancewindowexecutionrequest.h"

namespace QtAws {
namespace Ssm {

class CancelMaintenanceWindowExecutionResponsePrivate;

class QTAWSSSM_EXPORT CancelMaintenanceWindowExecutionResponse : public SsmResponse {
    Q_OBJECT

public:
    CancelMaintenanceWindowExecutionResponse(const CancelMaintenanceWindowExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelMaintenanceWindowExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelMaintenanceWindowExecutionResponse)
    Q_DISABLE_COPY(CancelMaintenanceWindowExecutionResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
