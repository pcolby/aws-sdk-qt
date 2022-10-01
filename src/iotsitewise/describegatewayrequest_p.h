// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGATEWAYREQUEST_P_H
#define QTAWS_DESCRIBEGATEWAYREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "describegatewayrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeGatewayRequest;

class DescribeGatewayRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DescribeGatewayRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DescribeGatewayRequest * const q);
    DescribeGatewayRequestPrivate(const DescribeGatewayRequestPrivate &other,
                                   DescribeGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGatewayRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
