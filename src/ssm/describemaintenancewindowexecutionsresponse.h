// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONSRESPONSE_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONSRESPONSE_H

#include "ssmresponse.h"
#include "describemaintenancewindowexecutionsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowExecutionsResponsePrivate;

class QTAWSSSM_EXPORT DescribeMaintenanceWindowExecutionsResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeMaintenanceWindowExecutionsResponse(const DescribeMaintenanceWindowExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMaintenanceWindowExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceWindowExecutionsResponse)
    Q_DISABLE_COPY(DescribeMaintenanceWindowExecutionsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
