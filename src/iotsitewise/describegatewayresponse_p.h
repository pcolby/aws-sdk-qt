// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGATEWAYRESPONSE_P_H
#define QTAWS_DESCRIBEGATEWAYRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeGatewayResponse;

class DescribeGatewayResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit DescribeGatewayResponsePrivate(DescribeGatewayResponse * const q);

    void parseDescribeGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGatewayResponse)
    Q_DISABLE_COPY(DescribeGatewayResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
