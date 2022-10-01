// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSITGATEWAYSRESPONSE_H
#define QTAWS_DESCRIBETRANSITGATEWAYSRESPONSE_H

#include "ec2response.h"
#include "describetransitgatewaysrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTransitGatewaysResponsePrivate;

class QTAWSEC2_EXPORT DescribeTransitGatewaysResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeTransitGatewaysResponse(const DescribeTransitGatewaysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTransitGatewaysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransitGatewaysResponse)
    Q_DISABLE_COPY(DescribeTransitGatewaysResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
