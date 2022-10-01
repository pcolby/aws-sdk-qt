// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEHEALTHRESPONSE_H
#define QTAWS_DESCRIBEINSTANCEHEALTHRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "describeinstancehealthrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeInstanceHealthResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DescribeInstanceHealthResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    DescribeInstanceHealthResponse(const DescribeInstanceHealthRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstanceHealthRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceHealthResponse)
    Q_DISABLE_COPY(DescribeInstanceHealthResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
