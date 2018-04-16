/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deregisterinstancesfromloadbalancerresponse.h"
#include "deregisterinstancesfromloadbalancerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/*!
 * \class QtAws::ElasticLoadBalancing::DeregisterInstancesFromLoadBalancerResponse
 *
 * \brief The DeregisterInstancesFromLoadBalancerResponse class provides an interace for ElasticLoadBalancing DeregisterInstancesFromLoadBalancer responses.
 *
 * \ingroup ElasticLoadBalancing
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
 * \sa ElasticLoadBalancingClient::deregisterInstancesFromLoadBalancer
 */

/*!
 * @brief  Constructs a new DeregisterInstancesFromLoadBalancerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterInstancesFromLoadBalancerResponse::DeregisterInstancesFromLoadBalancerResponse(
        const DeregisterInstancesFromLoadBalancerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new DeregisterInstancesFromLoadBalancerResponsePrivate(this), parent)
{
    setRequest(new DeregisterInstancesFromLoadBalancerRequest(request));
    setReply(reply);
}

const DeregisterInstancesFromLoadBalancerRequest * DeregisterInstancesFromLoadBalancerResponse::request() const
{
    Q_D(const DeregisterInstancesFromLoadBalancerResponse);
    return static_cast<const DeregisterInstancesFromLoadBalancerRequest *>(d->request);
}

/*!
 * @brief  Parse a ElasticLoadBalancing DeregisterInstancesFromLoadBalancer response.
 *
 * @param  response  Response to parse.
 */
void DeregisterInstancesFromLoadBalancerResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeregisterInstancesFromLoadBalancerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeregisterInstancesFromLoadBalancerResponsePrivate
 *
 * \brief Private implementation for DeregisterInstancesFromLoadBalancerResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeregisterInstancesFromLoadBalancerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterInstancesFromLoadBalancerResponse instance.
 */
DeregisterInstancesFromLoadBalancerResponsePrivate::DeregisterInstancesFromLoadBalancerResponsePrivate(
    DeregisterInstancesFromLoadBalancerResponse * const q) : ElasticLoadBalancingResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ElasticLoadBalancing DeregisterInstancesFromLoadBalancerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterInstancesFromLoadBalancerResponsePrivate::parseDeregisterInstancesFromLoadBalancerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterInstancesFromLoadBalancerResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
