// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPROXYENDPOINTSRESPONSE_H
#define QTAWS_DESCRIBEDBPROXYENDPOINTSRESPONSE_H

#include "rdsresponse.h"
#include "describedbproxyendpointsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBProxyEndpointsResponsePrivate;

class QTAWSRDS_EXPORT DescribeDBProxyEndpointsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBProxyEndpointsResponse(const DescribeDBProxyEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBProxyEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBProxyEndpointsResponse)
    Q_DISABLE_COPY(DescribeDBProxyEndpointsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
