// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enableavailabilityzonesforloadbalancerresponse.h"
#include "enableavailabilityzonesforloadbalancerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/*!
 * \class QtAws::ElasticLoadBalancing::EnableAvailabilityZonesForLoadBalancerResponse
 * \brief The EnableAvailabilityZonesForLoadBalancerResponse class provides an interace for ElasticLoadBalancing EnableAvailabilityZonesForLoadBalancer responses.
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
 * \sa ElasticLoadBalancingClient::enableAvailabilityZonesForLoadBalancer
 */

/*!
 * Constructs a EnableAvailabilityZonesForLoadBalancerResponse object for \a reply to \a request, with parent \a parent.
 */
EnableAvailabilityZonesForLoadBalancerResponse::EnableAvailabilityZonesForLoadBalancerResponse(
        const EnableAvailabilityZonesForLoadBalancerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new EnableAvailabilityZonesForLoadBalancerResponsePrivate(this), parent)
{
    setRequest(new EnableAvailabilityZonesForLoadBalancerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableAvailabilityZonesForLoadBalancerRequest * EnableAvailabilityZonesForLoadBalancerResponse::request() const
{
    Q_D(const EnableAvailabilityZonesForLoadBalancerResponse);
    return static_cast<const EnableAvailabilityZonesForLoadBalancerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticLoadBalancing EnableAvailabilityZonesForLoadBalancer \a response.
 */
void EnableAvailabilityZonesForLoadBalancerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableAvailabilityZonesForLoadBalancerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticLoadBalancing::EnableAvailabilityZonesForLoadBalancerResponsePrivate
 * \brief The EnableAvailabilityZonesForLoadBalancerResponsePrivate class provides private implementation for EnableAvailabilityZonesForLoadBalancerResponse.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancing
 */

/*!
 * Constructs a EnableAvailabilityZonesForLoadBalancerResponsePrivate object with public implementation \a q.
 */
EnableAvailabilityZonesForLoadBalancerResponsePrivate::EnableAvailabilityZonesForLoadBalancerResponsePrivate(
    EnableAvailabilityZonesForLoadBalancerResponse * const q) : ElasticLoadBalancingResponsePrivate(q)
{

}

/*!
 * Parses a ElasticLoadBalancing EnableAvailabilityZonesForLoadBalancer response element from \a xml.
 */
void EnableAvailabilityZonesForLoadBalancerResponsePrivate::parseEnableAvailabilityZonesForLoadBalancerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableAvailabilityZonesForLoadBalancerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
