// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWTARGETSRESPONSE_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWTARGETSRESPONSE_H

#include "ssmresponse.h"
#include "describemaintenancewindowtargetsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowTargetsResponsePrivate;

class QTAWSSSM_EXPORT DescribeMaintenanceWindowTargetsResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeMaintenanceWindowTargetsResponse(const DescribeMaintenanceWindowTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMaintenanceWindowTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceWindowTargetsResponse)
    Q_DISABLE_COPY(DescribeMaintenanceWindowTargetsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
