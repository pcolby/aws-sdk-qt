// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWSRESPONSE_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWSRESPONSE_H

#include "ssmresponse.h"
#include "describemaintenancewindowsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowsResponsePrivate;

class QTAWSSSM_EXPORT DescribeMaintenanceWindowsResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeMaintenanceWindowsResponse(const DescribeMaintenanceWindowsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMaintenanceWindowsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceWindowsResponse)
    Q_DISABLE_COPY(DescribeMaintenanceWindowsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
