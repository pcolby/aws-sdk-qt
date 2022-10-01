// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECARRIERGATEWAYSRESPONSE_H
#define QTAWS_DESCRIBECARRIERGATEWAYSRESPONSE_H

#include "ec2response.h"
#include "describecarriergatewaysrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeCarrierGatewaysResponsePrivate;

class QTAWSEC2_EXPORT DescribeCarrierGatewaysResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeCarrierGatewaysResponse(const DescribeCarrierGatewaysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCarrierGatewaysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCarrierGatewaysResponse)
    Q_DISABLE_COPY(DescribeCarrierGatewaysResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
