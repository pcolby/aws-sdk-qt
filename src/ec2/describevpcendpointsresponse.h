// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTSRESPONSE_H
#define QTAWS_DESCRIBEVPCENDPOINTSRESPONSE_H

#include "ec2response.h"
#include "describevpcendpointsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointsResponsePrivate;

class QTAWSEC2_EXPORT DescribeVpcEndpointsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeVpcEndpointsResponse(const DescribeVpcEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVpcEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcEndpointsResponse)
    Q_DISABLE_COPY(DescribeVpcEndpointsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
