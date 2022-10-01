// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONTASKSRESPONSE_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONTASKSRESPONSE_H

#include "ssmresponse.h"
#include "describemaintenancewindowexecutiontasksrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowExecutionTasksResponsePrivate;

class QTAWSSSM_EXPORT DescribeMaintenanceWindowExecutionTasksResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeMaintenanceWindowExecutionTasksResponse(const DescribeMaintenanceWindowExecutionTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMaintenanceWindowExecutionTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceWindowExecutionTasksResponse)
    Q_DISABLE_COPY(DescribeMaintenanceWindowExecutionTasksResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
