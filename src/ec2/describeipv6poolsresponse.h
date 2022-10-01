// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPV6POOLSRESPONSE_H
#define QTAWS_DESCRIBEIPV6POOLSRESPONSE_H

#include "ec2response.h"
#include "describeipv6poolsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeIpv6PoolsResponsePrivate;

class QTAWSEC2_EXPORT DescribeIpv6PoolsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeIpv6PoolsResponse(const DescribeIpv6PoolsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIpv6PoolsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIpv6PoolsResponse)
    Q_DISABLE_COPY(DescribeIpv6PoolsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
