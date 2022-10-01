// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMERGATEWAYSRESPONSE_H
#define QTAWS_DESCRIBECUSTOMERGATEWAYSRESPONSE_H

#include "ec2response.h"
#include "describecustomergatewaysrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeCustomerGatewaysResponsePrivate;

class QTAWSEC2_EXPORT DescribeCustomerGatewaysResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeCustomerGatewaysResponse(const DescribeCustomerGatewaysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCustomerGatewaysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomerGatewaysResponse)
    Q_DISABLE_COPY(DescribeCustomerGatewaysResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
