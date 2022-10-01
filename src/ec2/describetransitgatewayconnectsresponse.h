// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYCONNECTSRESPONSE_H
#define QTAWS_DESCRIBETRANSITGATEWAYCONNECTSRESPONSE_H

#include "ec2response.h"
#include "describetransitgatewayconnectsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewayConnectsResponsePrivate;

class QTAWSEC2_EXPORT DescribeTransitGatewayConnectsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeTransitGatewayConnectsResponse(const DescribeTransitGatewayConnectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTransitGatewayConnectsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransitGatewayConnectsResponse)
    Q_DISABLE_COPY(DescribeTransitGatewayConnectsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
