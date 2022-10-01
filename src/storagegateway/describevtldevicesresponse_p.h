// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVTLDEVICESRESPONSE_P_H
#define QTAWS_DESCRIBEVTLDEVICESRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeVTLDevicesResponse;

class DescribeVTLDevicesResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeVTLDevicesResponsePrivate(DescribeVTLDevicesResponse * const q);

    void parseDescribeVTLDevicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVTLDevicesResponse)
    Q_DISABLE_COPY(DescribeVTLDevicesResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
