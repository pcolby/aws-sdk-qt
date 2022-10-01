// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENATGATEWAYSRESPONSE_H
#define QTAWS_DESCRIBENATGATEWAYSRESPONSE_H

#include "ec2response.h"
#include "describenatgatewaysrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeNatGatewaysResponsePrivate;

class QTAWSEC2_EXPORT DescribeNatGatewaysResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeNatGatewaysResponse(const DescribeNatGatewaysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNatGatewaysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNatGatewaysResponse)
    Q_DISABLE_COPY(DescribeNatGatewaysResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
