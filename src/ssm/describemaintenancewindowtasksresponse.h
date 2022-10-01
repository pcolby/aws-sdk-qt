// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWTASKSRESPONSE_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWTASKSRESPONSE_H

#include "ssmresponse.h"
#include "describemaintenancewindowtasksrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowTasksResponsePrivate;

class QTAWSSSM_EXPORT DescribeMaintenanceWindowTasksResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeMaintenanceWindowTasksResponse(const DescribeMaintenanceWindowTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMaintenanceWindowTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceWindowTasksResponse)
    Q_DISABLE_COPY(DescribeMaintenanceWindowTasksResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
