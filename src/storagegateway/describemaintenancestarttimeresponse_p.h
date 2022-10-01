// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCESTARTTIMERESPONSE_P_H
#define QTAWS_DESCRIBEMAINTENANCESTARTTIMERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeMaintenanceStartTimeResponse;

class DescribeMaintenanceStartTimeResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeMaintenanceStartTimeResponsePrivate(DescribeMaintenanceStartTimeResponse * const q);

    void parseDescribeMaintenanceStartTimeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceStartTimeResponse)
    Q_DISABLE_COPY(DescribeMaintenanceStartTimeResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
