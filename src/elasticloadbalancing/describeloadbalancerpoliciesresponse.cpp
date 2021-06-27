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

#include "describeloadbalancerpoliciesresponse.h"
#include "describeloadbalancerpoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/*!
 * \class QtAws::ElasticLoadBalancing::DescribeLoadBalancerPoliciesResponse
 * \brief The DescribeLoadBalancerPoliciesResponse class provides an interace for ElasticLoadBalancing DescribeLoadBalancerPolicies responses.
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
 *  href="https://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic Load Balancing User
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
 * \sa ElasticLoadBalancingClient::describeLoadBalancerPolicies
 */

/*!
 * Constructs a DescribeLoadBalancerPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLoadBalancerPoliciesResponse::DescribeLoadBalancerPoliciesResponse(
        const DescribeLoadBalancerPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new DescribeLoadBalancerPoliciesResponsePrivate(this), parent)
{
    setRequest(new DescribeLoadBalancerPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLoadBalancerPoliciesRequest * DescribeLoadBalancerPoliciesResponse::request() const
{
    return static_cast<const DescribeLoadBalancerPoliciesRequest *>(ElasticLoadBalancingResponse::request());
}

/*!
 * \reimp
 * Parses a successful ElasticLoadBalancing DescribeLoadBalancerPolicies \a response.
 */
void DescribeLoadBalancerPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLoadBalancerPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticLoadBalancing::DescribeLoadBalancerPoliciesResponsePrivate
 * \brief The DescribeLoadBalancerPoliciesResponsePrivate class provides private implementation for DescribeLoadBalancerPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancing
 */

/*!
 * Constructs a DescribeLoadBalancerPoliciesResponsePrivate object with public implementation \a q.
 */
DescribeLoadBalancerPoliciesResponsePrivate::DescribeLoadBalancerPoliciesResponsePrivate(
    DescribeLoadBalancerPoliciesResponse * const q) : ElasticLoadBalancingResponsePrivate(q)
{

}

/*!
 * Parses a ElasticLoadBalancing DescribeLoadBalancerPolicies response element from \a xml.
 */
void DescribeLoadBalancerPoliciesResponsePrivate::parseDescribeLoadBalancerPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLoadBalancerPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
