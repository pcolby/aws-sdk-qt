// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifytargetgroupresponse.h"
#include "modifytargetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/*!
 * \class QtAws::ElasticLoadBalancingv2::ModifyTargetGroupResponse
 * \brief The ModifyTargetGroupResponse class provides an interace for ElasticLoadBalancingv2 ModifyTargetGroup responses.
 *
 * \inmodule QtAwsElasticLoadBalancingv2
 *
 *  <fullname>Elastic Load Balancing</fullname>
 * 
 *  A load balancer distributes incoming traffic across targets, such as your EC2 instances. This enables you to increase
 *  the availability of your application. The load balancer also monitors the health of its registered targets and ensures
 *  that it routes traffic only to healthy targets. You configure your load balancer to accept incoming traffic by
 *  specifying one or more listeners, which are configured with a protocol and port number for connections from clients to
 *  the load balancer. You configure a target group with a protocol and port number for connections from the load balancer
 *  to the targets, and with health check settings to be used when checking the health status of the
 * 
 *  targets>
 * 
 *  Elastic Load Balancing supports the following types of load balancers: Application Load Balancers, Network Load
 *  Balancers, Gateway Load Balancers, and Classic Load Balancers. This reference covers the following load balancer
 * 
 *  types> <ul> <li>
 * 
 *  Application Load Balancer - Operates at the application layer (layer 7) and supports HTTP and
 * 
 *  HTTPS> </li> <li>
 * 
 *  Network Load Balancer - Operates at the transport layer (layer 4) and supports TCP, TLS, and
 * 
 *  UDP> </li> <li>
 * 
 *  Gateway Load Balancer - Operates at the network layer (layer
 * 
 *  3)> </li> </ul>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic Load
 *  Balancing User
 * 
 *  Guide</a>>
 * 
 *  All Elastic Load Balancing operations are idempotent, which means that they complete at most one time. If you repeat an
 *  operation, it
 *
 * \sa ElasticLoadBalancingv2Client::modifyTargetGroup
 */

/*!
 * Constructs a ModifyTargetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyTargetGroupResponse::ModifyTargetGroupResponse(
        const ModifyTargetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new ModifyTargetGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyTargetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyTargetGroupRequest * ModifyTargetGroupResponse::request() const
{
    Q_D(const ModifyTargetGroupResponse);
    return static_cast<const ModifyTargetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticLoadBalancingv2 ModifyTargetGroup \a response.
 */
void ModifyTargetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyTargetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticLoadBalancingv2::ModifyTargetGroupResponsePrivate
 * \brief The ModifyTargetGroupResponsePrivate class provides private implementation for ModifyTargetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancingv2
 */

/*!
 * Constructs a ModifyTargetGroupResponsePrivate object with public implementation \a q.
 */
ModifyTargetGroupResponsePrivate::ModifyTargetGroupResponsePrivate(
    ModifyTargetGroupResponse * const q) : ElasticLoadBalancingv2ResponsePrivate(q)
{

}

/*!
 * Parses a ElasticLoadBalancingv2 ModifyTargetGroup response element from \a xml.
 */
void ModifyTargetGroupResponsePrivate::parseModifyTargetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyTargetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
