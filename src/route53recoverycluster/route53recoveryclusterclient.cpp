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

#include "route53recoveryclusterclient.h"
#include "route53recoveryclusterclient_p.h"

#include "core/awssignaturev4.h"
#include "getroutingcontrolstaterequest.h"
#include "getroutingcontrolstateresponse.h"
#include "listroutingcontrolsrequest.h"
#include "listroutingcontrolsresponse.h"
#include "updateroutingcontrolstaterequest.h"
#include "updateroutingcontrolstateresponse.h"
#include "updateroutingcontrolstatesrequest.h"
#include "updateroutingcontrolstatesresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Route53RecoveryCluster
 * \brief Contains classess for accessing Route53 Recovery Cluster.
 *
 * \inmodule QtAwsRoute53RecoveryCluster
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Route53RecoveryCluster {

/*!
 * \class QtAws::Route53RecoveryCluster::Route53RecoveryClusterClient
 * \brief The Route53RecoveryClusterClient class provides access to the Route53 Recovery Cluster service.
 *
 * \ingroup aws-clients
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
 */

/*!
 * \brief Constructs a Route53RecoveryClusterClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
Route53RecoveryClusterClient::Route53RecoveryClusterClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Route53RecoveryClusterClientPrivate(this), parent)
{
    Q_D(Route53RecoveryClusterClient);
    d->apiVersion = QStringLiteral("2019-12-02");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("route53-recovery-cluster");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Route53 Recovery Cluster");
    d->serviceName = QStringLiteral("route53-recovery-cluster");
}

/*!
 * \overload Route53RecoveryClusterClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
Route53RecoveryClusterClient::Route53RecoveryClusterClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Route53RecoveryClusterClientPrivate(this), parent)
{
    Q_D(Route53RecoveryClusterClient);
    d->apiVersion = QStringLiteral("2019-12-02");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("route53-recovery-cluster");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Route53 Recovery Cluster");
    d->serviceName = QStringLiteral("route53-recovery-cluster");
}

/*!
 * Sends \a request to the Route53RecoveryClusterClient service, and returns a pointer to an
 * GetRoutingControlStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the state for a routing control. A routing control is a simple on/off switch that you can use to route traffic to
 * cells. When a routing control state is On, traffic flows to a cell. When the state is Off, traffic does not flow.
 *
 * </p
 *
 * Before you can create a routing control, you must first create a cluster, and then host the control in a control panel
 * on the cluster. For more information, see <a
 * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.create.html"> Create routing control
 * structures</a> in the Amazon Route 53 Application Recovery Controller Developer Guide. You access one of the endpoints
 * for the cluster to get or update the routing control state to redirect traffic for your application.
 *
 * </p
 *
 * <i>You must specify Regional endpoints when you work with API cluster operations to get or update routing control states
 * in Route 53 ARC.</i>
 *
 * </p
 *
 * To see a code example for getting a routing control state, including accessing Regional cluster endpoints in sequence,
 * see <a href="https://docs.aws.amazon.com/r53recovery/latest/dg/service_code_examples_actions.html">API examples</a> in
 * the Amazon Route 53 Application Recovery Controller Developer
 *
 * Guide>
 *
 * Learn more about working with routing controls in the following topics in the Amazon Route 53 Application Recovery
 * Controller Developer
 *
 * Guide> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.update.html"> Viewing and updating routing
 * control states</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.html">Working with routing controls in Route
 * 53 ARC</a>
 */
GetRoutingControlStateResponse * Route53RecoveryClusterClient::getRoutingControlState(const GetRoutingControlStateRequest &request)
{
    return qobject_cast<GetRoutingControlStateResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryClusterClient service, and returns a pointer to an
 * ListRoutingControlsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List routing control names and Amazon Resource Names (ARNs), as well as the routing control state for each routing
 * control, along with the control panel name and control panel ARN for the routing controls. If you specify a control
 * panel ARN, this call lists the routing controls in the control panel. Otherwise, it lists all the routing controls in
 * the
 *
 * cluster>
 *
 * A routing control is a simple on/off switch in Route 53 ARC that you can use to route traffic to cells. When a routing
 * control state is On, traffic flows to a cell. When the state is Off, traffic does not
 *
 * flow>
 *
 * Before you can create a routing control, you must first create a cluster, and then host the control in a control panel
 * on the cluster. For more information, see <a
 * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.create.html"> Create routing control
 * structures</a> in the Amazon Route 53 Application Recovery Controller Developer Guide. You access one of the endpoints
 * for the cluster to get or update the routing control state to redirect traffic for your application.
 *
 * </p
 *
 * <i>You must specify Regional endpoints when you work with API cluster operations to use this API operation to list
 * routing controls in Route 53 ARC.</i>
 *
 * </p
 *
 * Learn more about working with routing controls in the following topics in the Amazon Route 53 Application Recovery
 * Controller Developer
 *
 * Guide> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.update.html"> Viewing and updating routing
 * control states</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.html">Working with routing controls in Route
 * 53 ARC</a>
 */
ListRoutingControlsResponse * Route53RecoveryClusterClient::listRoutingControls(const ListRoutingControlsRequest &request)
{
    return qobject_cast<ListRoutingControlsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryClusterClient service, and returns a pointer to an
 * UpdateRoutingControlStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Set the state of the routing control to reroute traffic. You can set the value to be On or Off. When the state is On,
 * traffic flows to a cell. When the state is Off, traffic does not
 *
 * flow>
 *
 * With Route 53 ARC, you can add safety rules for routing controls, which are safeguards for routing control state updates
 * that help prevent unexpected outcomes, like fail open traffic routing. However, there are scenarios when you might want
 * to bypass the routing control safeguards that are enforced with safety rules that you've configured. For example, you
 * might want to fail over quickly for disaster recovery, and one or more safety rules might be unexpectedly preventing you
 * from updating a routing control state to reroute traffic. In a "break glass" scenario like this, you can override one or
 * more safety rules to change a routing control state and fail over your
 *
 * application>
 *
 * The <code>SafetyRulesToOverride</code> property enables you override one or more safety rules and update routing control
 * states. For more information, see <a
 * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.override-safety-rule.html"> Override safety
 * rules to reroute traffic</a> in the Amazon Route 53 Application Recovery Controller Developer
 *
 * Guide>
 *
 * <i>You must specify Regional endpoints when you work with API cluster operations to get or update routing control states
 * in Route 53 ARC.</i>
 *
 * </p
 *
 * To see a code example for getting a routing control state, including accessing Regional cluster endpoints in sequence,
 * see <a href="https://docs.aws.amazon.com/r53recovery/latest/dg/service_code_examples_actions.html">API examples</a> in
 * the Amazon Route 53 Application Recovery Controller Developer
 *
 * Guide> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.update.html"> Viewing and updating routing
 * control states</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.html">Working with routing controls
 * overall</a>
 */
UpdateRoutingControlStateResponse * Route53RecoveryClusterClient::updateRoutingControlState(const UpdateRoutingControlStateRequest &request)
{
    return qobject_cast<UpdateRoutingControlStateResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53RecoveryClusterClient service, and returns a pointer to an
 * UpdateRoutingControlStatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Set multiple routing control states. You can set the value for each state to be On or Off. When the state is On, traffic
 * flows to a cell. When it's Off, traffic does not
 *
 * flow>
 *
 * With Route 53 ARC, you can add safety rules for routing controls, which are safeguards for routing control state updates
 * that help prevent unexpected outcomes, like fail open traffic routing. However, there are scenarios when you might want
 * to bypass the routing control safeguards that are enforced with safety rules that you've configured. For example, you
 * might want to fail over quickly for disaster recovery, and one or more safety rules might be unexpectedly preventing you
 * from updating a routing control state to reroute traffic. In a "break glass" scenario like this, you can override one or
 * more safety rules to change a routing control state and fail over your
 *
 * application>
 *
 * The <code>SafetyRulesToOverride</code> property enables you override one or more safety rules and update routing control
 * states. For more information, see <a
 * href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.override-safety-rule.html"> Override safety
 * rules to reroute traffic</a> in the Amazon Route 53 Application Recovery Controller Developer
 *
 * Guide>
 *
 * <i>You must specify Regional endpoints when you work with API cluster operations to get or update routing control states
 * in Route 53 ARC.</i>
 *
 * </p
 *
 * To see a code example for getting a routing control state, including accessing Regional cluster endpoints in sequence,
 * see <a href="https://docs.aws.amazon.com/r53recovery/latest/dg/service_code_examples_actions.html">API examples</a> in
 * the Amazon Route 53 Application Recovery Controller Developer
 *
 * Guide> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.update.html"> Viewing and updating routing
 * control states</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/r53recovery/latest/dg/routing-control.html">Working with routing controls
 * overall</a>
 */
UpdateRoutingControlStatesResponse * Route53RecoveryClusterClient::updateRoutingControlStates(const UpdateRoutingControlStatesRequest &request)
{
    return qobject_cast<UpdateRoutingControlStatesResponse *>(send(request));
}

/*!
 * \class QtAws::Route53RecoveryCluster::Route53RecoveryClusterClientPrivate
 * \brief The Route53RecoveryClusterClientPrivate class provides private implementation for Route53RecoveryClusterClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRoute53RecoveryCluster
 */

/*!
 * Constructs a Route53RecoveryClusterClientPrivate object with public implementation \a q.
 */
Route53RecoveryClusterClientPrivate::Route53RecoveryClusterClientPrivate(Route53RecoveryClusterClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Route53RecoveryCluster
} // namespace QtAws
