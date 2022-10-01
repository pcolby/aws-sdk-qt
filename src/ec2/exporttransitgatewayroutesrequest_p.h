// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTTRANSITGATEWAYROUTESREQUEST_P_H
#define QTAWS_EXPORTTRANSITGATEWAYROUTESREQUEST_P_H

#include "ec2request_p.h"
#include "exporttransitgatewayroutesrequest.h"

namespace QtAws {
namespace Ec2 {

class ExportTransitGatewayRoutesRequest;

class ExportTransitGatewayRoutesRequestPrivate : public Ec2RequestPrivate {

public:
    ExportTransitGatewayRoutesRequestPrivate(const Ec2Request::Action action,
                                   ExportTransitGatewayRoutesRequest * const q);
    ExportTransitGatewayRoutesRequestPrivate(const ExportTransitGatewayRoutesRequestPrivate &other,
                                   ExportTransitGatewayRoutesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportTransitGatewayRoutesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
