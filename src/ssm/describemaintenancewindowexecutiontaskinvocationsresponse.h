// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONSRESPONSE_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONSRESPONSE_H

#include "ssmresponse.h"
#include "describemaintenancewindowexecutiontaskinvocationsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowExecutionTaskInvocationsResponsePrivate;

class QTAWSSSM_EXPORT DescribeMaintenanceWindowExecutionTaskInvocationsResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeMaintenanceWindowExecutionTaskInvocationsResponse(const DescribeMaintenanceWindowExecutionTaskInvocationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMaintenanceWindowExecutionTaskInvocationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceWindowExecutionTaskInvocationsResponse)
    Q_DISABLE_COPY(DescribeMaintenanceWindowExecutionTaskInvocationsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
