// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPAMPOOLSRESPONSE_H
#define QTAWS_DESCRIBEIPAMPOOLSRESPONSE_H

#include "ec2response.h"
#include "describeipampoolsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeIpamPoolsResponsePrivate;

class QTAWSEC2_EXPORT DescribeIpamPoolsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeIpamPoolsResponse(const DescribeIpamPoolsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIpamPoolsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIpamPoolsResponse)
    Q_DISABLE_COPY(DescribeIpamPoolsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
