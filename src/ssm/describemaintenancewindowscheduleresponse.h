// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWSCHEDULERESPONSE_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWSCHEDULERESPONSE_H

#include "ssmresponse.h"
#include "describemaintenancewindowschedulerequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowScheduleResponsePrivate;

class QTAWSSSM_EXPORT DescribeMaintenanceWindowScheduleResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeMaintenanceWindowScheduleResponse(const DescribeMaintenanceWindowScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMaintenanceWindowScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceWindowScheduleResponse)
    Q_DISABLE_COPY(DescribeMaintenanceWindowScheduleResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
