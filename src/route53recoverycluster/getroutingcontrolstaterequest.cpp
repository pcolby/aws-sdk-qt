// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getroutingcontrolstaterequest.h"
#include "getroutingcontrolstaterequest_p.h"
#include "getroutingcontrolstateresponse.h"
#include "route53recoveryclusterrequest_p.h"

namespace QtAws {
namespace Route53RecoveryCluster {

/*!
 * \class QtAws::Route53RecoveryCluster::GetRoutingControlStateRequest
 * \brief The GetRoutingControlStateRequest class provides an interface for Route53RecoveryCluster GetRoutingControlState requests.
 *
 * \inmodule QtAwsRoute53RecoveryCluster
 *
 *  Welcome to the Routing Control (Recovery Cluster) API Reference Guide for Amazon Route 53 Application Recovery
 * 
 *  Controller>
 * 
 *  With Route 53 ARC, you can use routing control with extreme reliability to recover applications by rerouting traffic
 *  across Availability Zones or Amazon Web Services Regions. Routing controls are simple on/off switches hosted on a highly
 *  available cluster in Route 53 ARC. A cluster provides a set of five redundant Regional endpoints against which you can
 *  run API calls to get or update the state of routing controls. To implement failover, you set one routing control On and
 *  another one Off, to reroute traffic from one Availability Zone or Amazon Web Services Region to another.
 * 
 *  </p
 * 
 *  <i>Be aware that you must specify a Regional endpoint for a cluster when you work with API cluster operations to get or
 *  update routing control states in Route 53 ARC.</i> In addition, you must specify the US West (Oregon) Region for Route
 *  53 ARC API calls. For example, use the parameter <code>--region us-west-2</code> with AWS CLI commands. For more
 *  information, see <a href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.update.api.html"> Get and
 *  update routing control states using the API</a> in the Amazon Route 53 Application Recovery Controller Developer
 * 
 *  Guide>
 * 
 *  This API guide includes information about the API operations for how to get and update routing control states in Route
 *  53 ARC. To work with routing control in Route 53 ARC, you must first create the required components (clusters, control
 *  panels, and routing controls) using the recovery cluster configuration
 * 
 *  API>
 * 
 *  For more information about working with routing control in Route 53 ARC, see the
 * 
 *  following> <ul> <li>
 * 
 *  Create clusters, control panels, and routing controls by using API operations. For more information, see the <a
 *  href="https://docs.aws.amazon.com/recovery-cluster/latest/api/">Recovery Control Configuration API Reference Guide for
 *  Amazon Route 53 Application Recovery
 * 
 *  Controller</a>> </li> <li>
 * 
 *  Learn about the components in recovery control, including clusters, routing controls, and control panels, and how to
 *  work with Route 53 ARC in the Amazon Web Services console. For more information, see <a
 *  href="https://docs.aws.amazon.com/r53recovery/latest/dg/introduction-components.html#introduction-components-routing">
 *  Recovery control components</a> in the Amazon Route 53 Application Recovery Controller Developer
 * 
 *  Guide> </li> <li>
 * 
 *  Route 53 ARC also provides readiness checks that continually audit resources to help make sure that your applications
 *  are scaled and ready to handle failover traffic. For more information about the related API operations, see the <a
 *  href="https://docs.aws.amazon.com/recovery-readiness/latest/api/">Recovery Readiness API Reference Guide for Amazon
 *  Route 53 Application Recovery
 * 
 *  Controller</a>> </li> <li>
 * 
 *  For more information about creating resilient applications and preparing for recovery readiness with Route 53 ARC, see
 *  the <a href="https://docs.aws.amazon.com/r53recovery/latest/dg/">Amazon Route 53 Application Recovery Controller
 *  Developer
 *
 * \sa Route53RecoveryClusterClient::getRoutingControlState
 */

/*!
 * Constructs a copy of \a other.
 */
GetRoutingControlStateRequest::GetRoutingControlStateRequest(const GetRoutingControlStateRequest &other)
    : Route53RecoveryClusterRequest(new GetRoutingControlStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRoutingControlStateRequest object.
 */
GetRoutingControlStateRequest::GetRoutingControlStateRequest()
    : Route53RecoveryClusterRequest(new GetRoutingControlStateRequestPrivate(Route53RecoveryClusterRequest::GetRoutingControlStateAction, this))
{

}

/*!
 * \reimp
 */
bool GetRoutingControlStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRoutingControlStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRoutingControlStateRequest::response(QNetworkReply * const reply) const
{
    return new GetRoutingControlStateResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryCluster::GetRoutingControlStateRequestPrivate
 * \brief The GetRoutingControlStateRequestPrivate class provides private implementation for GetRoutingControlStateRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryCluster
 */

/*!
 * Constructs a GetRoutingControlStateRequestPrivate object for Route53RecoveryCluster \a action,
 * with public implementation \a q.
 */
GetRoutingControlStateRequestPrivate::GetRoutingControlStateRequestPrivate(
    const Route53RecoveryClusterRequest::Action action, GetRoutingControlStateRequest * const q)
    : Route53RecoveryClusterRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRoutingControlStateRequest
 * class' copy constructor.
 */
GetRoutingControlStateRequestPrivate::GetRoutingControlStateRequestPrivate(
    const GetRoutingControlStateRequestPrivate &other, GetRoutingControlStateRequest * const q)
    : Route53RecoveryClusterRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryCluster
} // namespace QtAws
