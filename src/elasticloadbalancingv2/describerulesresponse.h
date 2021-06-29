/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBERULESRESPONSE_H
#define QTAWS_DESCRIBERULESRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "describerulesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeRulesResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DescribeRulesResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    DescribeRulesResponse(const DescribeRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRulesResponse)
    Q_DISABLE_COPY(DescribeRulesResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
