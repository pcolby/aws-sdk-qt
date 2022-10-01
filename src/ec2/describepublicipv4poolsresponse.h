// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPUBLICIPV4POOLSRESPONSE_H
#define QTAWS_DESCRIBEPUBLICIPV4POOLSRESPONSE_H

#include "ec2response.h"
#include "describepublicipv4poolsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribePublicIpv4PoolsResponsePrivate;

class QTAWSEC2_EXPORT DescribePublicIpv4PoolsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribePublicIpv4PoolsResponse(const DescribePublicIpv4PoolsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePublicIpv4PoolsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePublicIpv4PoolsResponse)
    Q_DISABLE_COPY(DescribePublicIpv4PoolsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
