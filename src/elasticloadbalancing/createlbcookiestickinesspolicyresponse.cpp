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

#include "createlbcookiestickinesspolicyresponse.h"
#include "createlbcookiestickinesspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/*!
 * \class QtAws::ElasticLoadBalancing::CreateLBCookieStickinessPolicyResponse
 * \brief The CreateLBCookieStickinessPolicyResponse class provides an interace for ElasticLoadBalancing CreateLBCookieStickinessPolicy responses.
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
 * \sa ElasticLoadBalancingClient::createLBCookieStickinessPolicy
 */

/*!
 * Constructs a CreateLBCookieStickinessPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLBCookieStickinessPolicyResponse::CreateLBCookieStickinessPolicyResponse(
        const CreateLBCookieStickinessPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new CreateLBCookieStickinessPolicyResponsePrivate(this), parent)
{
    setRequest(new CreateLBCookieStickinessPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLBCookieStickinessPolicyRequest * CreateLBCookieStickinessPolicyResponse::request() const
{
    Q_D(const CreateLBCookieStickinessPolicyResponse);
    return static_cast<const CreateLBCookieStickinessPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticLoadBalancing CreateLBCookieStickinessPolicy \a response.
 */
void CreateLBCookieStickinessPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLBCookieStickinessPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticLoadBalancing::CreateLBCookieStickinessPolicyResponsePrivate
 * \brief The CreateLBCookieStickinessPolicyResponsePrivate class provides private implementation for CreateLBCookieStickinessPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancing
 */

/*!
 * Constructs a CreateLBCookieStickinessPolicyResponsePrivate object with public implementation \a q.
 */
CreateLBCookieStickinessPolicyResponsePrivate::CreateLBCookieStickinessPolicyResponsePrivate(
    CreateLBCookieStickinessPolicyResponse * const q) : ElasticLoadBalancingResponsePrivate(q)
{

}

/*!
 * Parses a ElasticLoadBalancing CreateLBCookieStickinessPolicy response element from \a xml.
 */
void CreateLBCookieStickinessPolicyResponsePrivate::parseCreateLBCookieStickinessPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLBCookieStickinessPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
