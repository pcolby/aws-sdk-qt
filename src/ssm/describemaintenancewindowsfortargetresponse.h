// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWSFORTARGETRESPONSE_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWSFORTARGETRESPONSE_H

#include "ssmresponse.h"
#include "describemaintenancewindowsfortargetrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowsForTargetResponsePrivate;

class QTAWSSSM_EXPORT DescribeMaintenanceWindowsForTargetResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeMaintenanceWindowsForTargetResponse(const DescribeMaintenanceWindowsForTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMaintenanceWindowsForTargetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceWindowsForTargetResponse)
    Q_DISABLE_COPY(DescribeMaintenanceWindowsForTargetResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
