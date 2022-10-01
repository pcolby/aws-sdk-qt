// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGATEWAYINFORMATIONRESPONSE_P_H
#define QTAWS_DESCRIBEGATEWAYINFORMATIONRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeGatewayInformationResponse;

class DescribeGatewayInformationResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeGatewayInformationResponsePrivate(DescribeGatewayInformationResponse * const q);

    void parseDescribeGatewayInformationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGatewayInformationResponse)
    Q_DISABLE_COPY(DescribeGatewayInformationResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
