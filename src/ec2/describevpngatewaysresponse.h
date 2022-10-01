// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPNGATEWAYSRESPONSE_H
#define QTAWS_DESCRIBEVPNGATEWAYSRESPONSE_H

#include "ec2response.h"
#include "describevpngatewaysrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpnGatewaysResponsePrivate;

class QTAWSEC2_EXPORT DescribeVpnGatewaysResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeVpnGatewaysResponse(const DescribeVpnGatewaysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVpnGatewaysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpnGatewaysResponse)
    Q_DISABLE_COPY(DescribeVpnGatewaysResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
