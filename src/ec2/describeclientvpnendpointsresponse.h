// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNENDPOINTSRESPONSE_H
#define QTAWS_DESCRIBECLIENTVPNENDPOINTSRESPONSE_H

#include "ec2response.h"
#include "describeclientvpnendpointsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnEndpointsResponsePrivate;

class QTAWSEC2_EXPORT DescribeClientVpnEndpointsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeClientVpnEndpointsResponse(const DescribeClientVpnEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClientVpnEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClientVpnEndpointsResponse)
    Q_DISABLE_COPY(DescribeClientVpnEndpointsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
