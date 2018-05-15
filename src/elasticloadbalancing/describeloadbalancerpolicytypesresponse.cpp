/*
    Copyright 2013-2018 Paul Colby

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

#include "describeloadbalancerpolicytypesresponse.h"
#include "describeloadbalancerpolicytypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/*!
 * \class QtAws::ElasticLoadBalancing::DescribeLoadBalancerPolicyTypesResponse
 * \brief The DescribeLoadBalancerPolicyTypesResponse class provides an interace for ElasticLoadBalancing DescribeLoadBalancerPolicyTypes responses.
 *
 * \inmodule QtAwsElasticLoadBalancing
 *
 *  <fullname>Elastic Load Balancing</fullname>
 * 
 *  A load balancer can distribute incoming traffic across your EC2 instances. This enables you to increase the availability
 *  of your application. The load balancer also monitors the health of its registered instances and ensures that it routes
 *  traffic only to healthy instances. You configure your load balancer to accept incoming traffic by specifying one or more
 *  listeners, which are configured with a protocol and port number for connections from clients to the load balancer and a
 *  protocol and port number for connections from the load balancer to the
 * 
 *  instances>
 * 
 *  Elastic Load Balancing supports three types of load balancers: Application Load Balancers, Network Load Balancers, and
 *  Classic Load Balancers. You can select a load balancer based on your application needs. For more information, see the <a
 *  href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic Load Balancing User
 * 
 *  Guide</a>>
 * 
 *  This reference covers the 2012-06-01 API, which supports Classic Load Balancers. The 2015-12-01 API supports Application
 *  Load Balancers and Network Load
 * 
 *  Balancers>
 * 
 *  To get started, create a load balancer with one or more listeners using <a>CreateLoadBalancer</a>. Register your
 *  instances with the load balancer using
 * 
 *  <a>RegisterInstancesWithLoadBalancer</a>>
 * 
 *  All Elastic Load Balancing operations are <i>idempotent</i>, which means that they complete at most one time. If you
 *  repeat an operation, it succeeds with a 200 OK response
 *
 * \sa ElasticLoadBalancingClient::describeLoadBalancerPolicyTypes
 */

/*!
 * Constructs a DescribeLoadBalancerPolicyTypesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLoadBalancerPolicyTypesResponse::DescribeLoadBalancerPolicyTypesResponse(
        const DescribeLoadBalancerPolicyTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new DescribeLoadBalancerPolicyTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeLoadBalancerPolicyTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLoadBalancerPolicyTypesRequest * DescribeLoadBalancerPolicyTypesResponse::request() const
{
    Q_D(const DescribeLoadBalancerPolicyTypesResponse);
    return static_cast<const DescribeLoadBalancerPolicyTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticLoadBalancing DescribeLoadBalancerPolicyTypes \a response.
 */
void DescribeLoadBalancerPolicyTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLoadBalancerPolicyTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticLoadBalancing::DescribeLoadBalancerPolicyTypesResponsePrivate
 * \brief The DescribeLoadBalancerPolicyTypesResponsePrivate class provides private implementation for DescribeLoadBalancerPolicyTypesResponse.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancing
 */

/*!
 * Constructs a DescribeLoadBalancerPolicyTypesResponsePrivate object with public implementation \a q.
 */
DescribeLoadBalancerPolicyTypesResponsePrivate::DescribeLoadBalancerPolicyTypesResponsePrivate(
    DescribeLoadBalancerPolicyTypesResponse * const q) : ElasticLoadBalancingResponsePrivate(q)
{

}

/*!
 * Parses a ElasticLoadBalancing DescribeLoadBalancerPolicyTypes response element from \a xml.
 */
void DescribeLoadBalancerPolicyTypesResponsePrivate::parseDescribeLoadBalancerPolicyTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLoadBalancerPolicyTypesResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
