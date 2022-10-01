// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCESTARTTIMERESPONSE_H
#define QTAWS_DESCRIBEMAINTENANCESTARTTIMERESPONSE_H

#include "storagegatewayresponse.h"
#include "describemaintenancestarttimerequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeMaintenanceStartTimeResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeMaintenanceStartTimeResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeMaintenanceStartTimeResponse(const DescribeMaintenanceStartTimeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMaintenanceStartTimeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceStartTimeResponse)
    Q_DISABLE_COPY(DescribeMaintenanceStartTimeResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
